#include <iostream>
#include "pilha.hpp"

using namespace std;

Pilha::Pilha()
{
    cout << "Construindo objeto...\n\n";
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
    // A pilha so estará cheia quando preencher completamente a sua capacidade
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

    if (tamanho == 0)
    {
        cout << "A pilha está vazia.\n";
    }
    else
    {
        cout << "Desempilhando elemento " << lista_caracteres[tamanho] << "..." << endl;
        tamanho--;
        if (tamanho > 0)
        {
            valor_topo = lista_caracteres[tamanho];
        }
        else
        {
            // Verificar se a pilha foi esvaziada
            vazio();
            cout << "Agora não há mais nenhum elemento na pilha" << endl;
            valor_topo = ' ';
        }
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