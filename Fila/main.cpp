#include <iostream>
#include "fila.hpp"

using namespace std;

int main()
{
    Fila fila = Fila();

    // 1 = true | 0 = false

    cout << "Está vazia? " << fila.vazio() << endl;

    fila.enfileirar('g');
    fila.enfileirar('u');
    fila.enfileirar('i');
    fila.desenfileirar();

    cout << "Agora está vazia? " << fila.vazio() << endl;
    cout << "Mas está cheia? " << fila.cheio() << endl;
    cout << "Próximo elemento da fila: " << fila.proximo() << endl;
    fila.desenfileirar();
    cout << "Agora o próximo elemento da fila é: " << fila.proximo() << endl;

    cout << "Desenfileirando elementos restantes..." << endl;
    fila.desenfileirar();

    cout << "Agora o próximo elemento da fila é: " << fila.proximo() << endl;

    return 0;
}