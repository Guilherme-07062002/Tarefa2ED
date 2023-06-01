#ifndef FILA_HPP
#define FILA_HPP

const int capacidade = 100000;

class Fila
{
public:
    Fila();
    ~Fila();
    void enfileirar(char valor);
    void desenfileirar();
    char proximo();
    bool vazio();
    bool cheio();

private:
    char valor_proximo;
    int index_inicio;
    bool esta_vazio;
    int tamanho;

    char lista_caracteres[capacidade];
};

#endif