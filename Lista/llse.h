#ifndef LLSE_H
#define LLSE_H
#include <no.h>
#include <QString>

namespace Pedro
{
    class LLSE // lista linear simplesmente encadeada
    {
    private:
        int quantidadeElementos;
        NO *inicio;

    public:
        LLSE();
        bool estaVazia() const;
        void inserirInicio(int elemento);
        void inserirFinal(int elemento);
        int retirarInicio();
        int retirarFinal();
        int acessarInicio() const;
        int acessarFinal() const;
        int retirarPosicao(int posicao);
        void inserirPosicao(int posicao, int elemento);
        int acessarPosicao(int posicao) const;
        int getQuantidadeElementos()const;
        QString obterDadosLLSE() const;
        void inserirOrdenado(int);
    };
}

#endif // LLSE_H
