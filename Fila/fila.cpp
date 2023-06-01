#include <iostream>
#include "fila.hpp"

using namespace std;

Fila::Fila()
{
    cout << "Construindo objeto...\n";
    lista_caracteres[capacidade] = {};
    tamanho = -1;
    esta_vazio = true;
    index_inicio = 0;
    valor_proximo = ' ';
}
Fila::~Fila()
{
    cout << "Destruindo objeto...\n";
}
bool Fila::vazio()
{
    if (tamanho <= 0)
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
void Fila::enfileirar(char valor)
{
    if (tamanho == capacidade)
    {
        cout << "A Fila está totalmente preenchida.\n";
        return;
    }
    else
    {
        tamanho++;
        lista_caracteres[tamanho] = valor;
        valor_proximo = lista_caracteres[index_inicio];
        esta_vazio = false;
    }
}
void Fila::desenfileirar()
{
    if (tamanho <= 0)
    {
        cout << "A Fila está vazia.\n";
    }
    else
    {
        tamanho--;
        index_inicio++;
        valor_proximo = lista_caracteres[index_inicio];
    }
}
char Fila::proximo()
{
    if (esta_vazio)
    {
        cout << "A Fila esta vazia\n";
        return ' ';
    }
    else
    {
        return valor_proximo;
    }
}