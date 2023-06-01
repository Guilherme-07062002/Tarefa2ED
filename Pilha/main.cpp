#include<iostream>
#include"pilha.hpp"

using namespace std;

int main(){
    Pilha pilha = Pilha();
    pilha.topo();
    pilha.empilhar('g');
    pilha.empilhar('u');
    pilha.empilhar('i');
    pilha.desempilhar();
    cout << "Elemento do topo: " << pilha.topo() << endl;
    pilha.desempilhar();
    cout << "Está cheio? " << pilha.cheio() << endl;
    cout << "Está vazio? " << pilha.vazio() << endl;
    

    return 0;
}