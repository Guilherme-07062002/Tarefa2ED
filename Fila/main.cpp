#include <iostream>
#include "fila.hpp"

using namespace std;

int main()
{
    Fila fila = Fila();

    fila.enfileirar('g');
    fila.enfileirar('u');
    fila.enfileirar('i');
    fila.desenfileirar();
    cout << "Está vazia? " << fila.vazio() << endl;
    cout << "Próximo elemento da fila " << fila.proximo() << endl;
    cout << "Está cheia? " << fila.cheio() << endl;

    return 0;
}