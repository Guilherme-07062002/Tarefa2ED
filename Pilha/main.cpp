#include <iostream>
#include "pilha.hpp"

using namespace std;

int main()
{
    Pilha pilha = Pilha();

    cout << "Antes de empilhar algum valor a pilha está cheia? " << pilha.cheio() << endl;

    pilha.empilhar('g');
    pilha.empilhar('u');
    pilha.empilhar('i');

    cout << "Elemento do topo: " << pilha.topo() << endl;
    pilha.desempilhar();
    cout << "Agora está cheia? " << pilha.cheio() << endl;
    cout << "E o elemento que está no topo é: " << pilha.topo() << endl;
    cout << "Portanto está vazio? " << pilha.vazio() << endl;

    return 0;
}