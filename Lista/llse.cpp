#include "llse.h"
namespace Pedro{
    LLSE::LLSE():
        quantidadeElementos(0),
        inicio(0)
    {

    }
    bool LLSE::estaVazia()const
    {
        return (quantidadeElementos == 0);
    }
    void LLSE::inserirInicio(int elemento)
    {
        try{
            NO* aux = new NO(elemento);
            quantidadeElementos++;
            aux->setProximo(inicio);
            inicio = aux;
        }catch(std::bad_alloc &erro)
        {
            throw QString ("No nao criado - inserirInicio");
        }
    }
    int LLSE::retirarInicio()
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - retirarInicio");
        }
        NO* aux = inicio;
        inicio = aux->getProximo();
        int valor = aux->getDado();
        delete aux;
        aux = nullptr;
        quantidadeElementos--;
        return valor;
    }
}
