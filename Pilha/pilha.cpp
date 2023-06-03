#include <iostream>
#include "pilha.hpp"

using namespace std;

Pilha::Pilha()
{
    cout << "Construindo objeto...\n";
    lista_caracteres[capacidade] = {};
    tamanho = 0;
    esta_vazio = true;
}
Pilha::~Pilha()
{
    cout << "Destruindo objeto...\n";
}
bool Pilha::vazio()
{
    if (tamanho == 0)
    {
        esta_vazio = true;
        return true;
    }
    else
    {
        return false;
    }
}
bool Pilha::cheio()
{
    if (tamanho > 0)
    {
        esta_vazio = false;
        return true;
    }
    else
    {
        return false;
    }
}
void Pilha::empilhar(char valor)
{
    cout << "Empilhando elemento " << valor << "..." << endl;

    esta_vazio = false;
    if (tamanho == capacidade)
    {
        cout << "A pilha está totalmente preenchida.";
        return;
    }
    else
    {
        tamanho++;
        lista_caracteres[tamanho] = valor;
        valor_topo = lista_caracteres[tamanho];
    }
}
void Pilha::desempilhar()
{
    cout << "Desempilhando elemento " << lista_caracteres[tamanho] << "..." << endl;
    if (tamanho == 0)
    {
        cout << "A pilha está vazia.\n";
    }
    else
    {
        tamanho--;
        valor_topo = lista_caracteres[tamanho];
        // Verificar a pilha foi esvaziada
        Pilha::vazio();
    }
}
char Pilha::topo()
{
    if (esta_vazio)
    {
        cout << "A pilha esta vazia\n";
        return ' ';
    }
    else
    {
        return valor_topo;
    }
}