#ifndef PILHA_HPP
#define PILHA_HPP

const int capacidade = 100000;

class Pilha
{
public:
    Pilha();
    ~Pilha();
    void empilhar(char valor);
    void desempilhar();
    int topo();
    bool vazio();
    bool cheio();

private:
    char valor_topo;
    bool esta_vazio;
    int tamanho;

    char lista_caracteres[capacidade];
};

#endif