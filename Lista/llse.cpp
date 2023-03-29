#include "llse.h"
namespace Pedro
{
    LLSE::LLSE() : quantidadeElementos(0),
                   inicio(0)
    {
    }
    bool LLSE::estaVazia() const
    {
        return (quantidadeElementos == 0);
    }
    void LLSE::inserirInicio(int elemento)
    {
        try
        {
            NO *aux = new NO(elemento);
            quantidadeElementos++;
            aux->setProximo(inicio);
            inicio = aux;
        }
        catch (std::bad_alloc &erro)
        {
            throw QString("No nao criado - inserirInicio");
        }
    }

    void LLSE::inserirFinal(int elemento)
    {
        try
        {

        }
        catch(std::bad_alloc &erro)
        {

        }
    }

    int LLSE::retirarInicio()
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - retirarInicio");
        }
        NO *aux = inicio;
        inicio = aux->getProximo();
        int valor = aux->getDado();
        delete aux;
        aux = nullptr;
        quantidadeElementos--;
        return valor;
    }

    int LLSE::retirarFinal()
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - retirarFinal");
        }
        NO *aux = inicio;

        for (int i = 1; i < quantidadeElementos; i++)
        {
            aux = aux->getProximo();
        }
        int valor = aux->getDado();
        aux->setDado(0);
        aux = inicio;
        for (int i = 0; i < quantidadeElementos - 2; i++)
        {
            aux = aux->getProximo();
        }
        aux->setProximo(nullptr);
        delete aux;
        aux = nullptr;
        quantidadeElementos--;
        return valor;
    }

    int LLSE::acessarInicio() const
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - acessarInicio");
        }
        return (inicio->getDado());
    }
    int LLSE::acessarFinal() const
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - acessarFinal");
        }
        NO* aux = inicio;
        for (int i = 1; i < quantidadeElementos; i++)
        {
            aux = aux->getProximo();
        }
        return aux->getDado();
    }
    QString LLSE::obterDadosLLSE() const
    {
        NO *aux;
        aux = inicio;
        QString saida = "";
        for (int i = 0; i < quantidadeElementos; i++)
        {
            if (i == quantidadeElementos - 1)
            {
                saida += "|" + QString::number(aux->getDado()) + "|";
            }
            else
            {
                saida += "|" + QString::number(aux->getDado()) + "|\t->\t";
            }
            aux = aux->getProximo();
        }
        return saida;
    }
}
