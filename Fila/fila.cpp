#include <iostream>
#include "fila.hpp"

using namespace std;

Fila::Fila()
{
    cout << "Construindo objeto...\n\n";
    lista_caracteres[capacidade] = {};
    tamanho = -1;
    esta_vazio = true;
    index_inicio = 0;
    valor_proximo = ' ';
}
Fila::~Fila()
{
    cout << "\nDestruindo objeto...\n";
}
bool Fila::vazio()
{
    if (tamanho <= -1)
    {
        esta_vazio = true;
        return true;
    }
    else
    {
        return false;
    }
}
bool Fila::cheio()
{
    if (tamanho == capacidade)
    {
        esta_vazio = false;
        return true;
    }
    else
    {
        return false;
    }
}
void Fila::enfileirar(char valor)
{
    esta_vazio = false;
    if (cheio())
    {
        cout << "A Fila está totalmente preenchida.\n";
        return;
    }
    else
    {
        cout << "Enfileirando elemento " << valor << "..." << endl;
        tamanho++;
        lista_caracteres[tamanho] = valor;
        valor_proximo = lista_caracteres[index_inicio];
    }
}
void Fila::desenfileirar()
{
    if (tamanho <= -1)
    {
        cout << "A Fila está vazia.\n";
    }
    else
    {
        cout << "Desenfileirando elemento " << lista_caracteres[index_inicio] << "..." << endl;
        tamanho--;
        index_inicio++;
        if (tamanho >= 0)
        {
            valor_proximo = lista_caracteres[index_inicio];
        }
        else
        {
            vazio();
            cout << "Agora Não há mais nenhum elemento na fila" << endl;
            valor_proximo = ' ';
        }
    }
}
char Fila::proximo()
{
    if (esta_vazio)
    {
        cout << "A pilha esta vazia\n";
        return valor_proximo;
    }
    else
    {
        return valor_proximo;
    }
}