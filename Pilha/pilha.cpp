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
    if (tamanho == 0)
    {
        cout << "A pilha está vazia.";
    }
    else
    {
        tamanho--;
        valor_topo = lista_caracteres[tamanho];
    }
}
char Pilha::topo()
{
    if (esta_vazio)
    {
        cout << "A pilha esta vazia";
        return;
    }
    else
    {
        return valor_topo;
    }
}