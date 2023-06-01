#include <iostream>
#include "pilha.hpp"

using namespace std;

Pilha::Pilha()
{
    cout << "Construindo objeto...\n";
    lista_caracteres[capacidade] = {};
    tamanho = 0;
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
void Pilha::empilhar(char valor){

}