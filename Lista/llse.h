#ifndef LLSE_H
#define LLSE_H
#include <no.h>
#include <QString>

namespace Pedro{
    class LLSE // lista linear simplesmente encadeada
    {
    private:
        int quantidadeElementos;
        NO *inicio;
    public:
        LLSE();
        bool estaVazia()const;
        void inserirInicio(int elemento);
        int retirarInicio();
        int acessarInicio()const;
        QString obterDadosLLSE()const;
    };
}

#endif // LLSE_H
