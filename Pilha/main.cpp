#include <iostream>
#include "pilha.hpp"

using namespace std;

int main()
{
    Pilha pilha = Pilha();

    // 1 = true | 0 = false

    cout << "A pilha está vazia? " << pilha.vazio() << endl;

    pilha.empilhar('g');
    pilha.empilhar('u');
    pilha.empilhar('i');

    cout << "Elemento do topo: " << pilha.topo() << endl;
    pilha.desempilhar();
    cout << "E o elemento que está no topo agora é: " << pilha.topo() << endl;
    cout << "Agora está cheia? " << pilha.cheio() << endl;
    cout << "Portanto está vazio? " << pilha.vazio() << endl;

    cout << "Desempilhando elementos restantes..." << endl;
    pilha.desempilhar();
    pilha.desempilhar();

    cout << "Elemento do topo: " << pilha.topo() << endl;

    return 0;
}