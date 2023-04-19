#include "llse.h"
namespace Pedro
{
    LLSE::LLSE() : quantidadeElementos(0),
                   inicio(0)
    {
    }
    bool LLSE::estaVazia() const
    {
        return !((bool)quantidadeElementos);
    }
    void LLSE::inserirInicio(int elemento)
    {
        try
        {
            NO *aux = new NO(elemento);
            aux->setProximo(inicio);
            inicio = aux;
            quantidadeElementos++;
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
            if (estaVazia())
            {
                inserirInicio(elemento);
                return;
            }
            NO *aux = new NO(elemento);
            NO *penultimo = inicio;
            for (int i = 0; i < quantidadeElementos - 1; i++)
            {
                penultimo = penultimo->getProximo();
            }
            penultimo->setProximo(aux);
            quantidadeElementos++;
        }
        catch (std::bad_alloc &erro)
        {
            throw QString("No nao criado - inserirFinal");
        }
    }

    int LLSE::retirarInicio()
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - retirarInicio");
        }
        NO *aux = inicio;
        int valor = inicio->getDado();
        inicio = inicio->getProximo();
        if (inicio == nullptr)
        {
            delete inicio;
        }
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
        for (int i = 0; i < quantidadeElementos - 2; i++)
        {
            aux = aux->getProximo();
        }
        if (aux->getProximo() == nullptr)
        {
            return retirarInicio();
        }
        int valor = aux->getProximo()->getDado();
        NO *aux2 = aux->getProximo();
        aux->setProximo(nullptr);
        delete aux2;
        return valor;
    }

    int LLSE::acessarInicio() const
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - acessarInicio");
        }
        return inicio->getDado();
    }
    int LLSE::acessarFinal() const
    {
        if (estaVazia())
        {
            throw QString("Lista esta vazia - acessarFinal");
        }
        NO *aux = inicio;
        for (int i = 0; i < quantidadeElementos - 1; i++)
        {
            aux = aux->getProximo();
        }
        return aux->getDado();
    }

    int LLSE::retirarPosicao(int posicao)
    {
        if (estaVazia())
        {
            throw ("Nao eh possivel retirar, lista vazia - RetirarPosicao");
        }
        if (posicao < 0 || posicao >= quantidadeElementos)
        {
            throw QString("Posicao Invalida - RetirarPosicao");
        }
        if (posicao == 0)
        {
            return retirarInicio();
        }
        if (posicao == quantidadeElementos - 1)
        {
            return retirarFinal();
        }
        NO* aux = inicio;
        for (int i = 0; i < posicao - 1; i++)
        {
            aux = aux->getProximo();
        }
        int valor = aux->getProximo()->getDado();
        NO* del = aux->getProximo();
        aux->setProximo(aux->getProximo()->getProximo());
        delete del;
        del = nullptr;
        quantidadeElementos--;
        return valor;
    }

    void LLSE::inserirPosicao(int posicao, int elemento)
    {
        if (posicao < 0 || posicao > quantidadeElementos)
        {
            throw QString("Posicao Invalida - IncluirPosicao");
        }
        if (posicao == 0)
        {
            inserirInicio(elemento);
            return;
        }
        if (posicao == quantidadeElementos)
        {
            inserirFinal(elemento);
            return;
        }
        NO* aux = inicio;
        for (int i = 0; i < posicao - 1; i++)
        {
            aux = aux->getProximo();
        }
        NO* novo = new NO(elemento);
        novo->setProximo(aux->getProximo());
        aux->setProximo(novo);
        quantidadeElementos++;
    }

    int LLSE::acessarPosicao(int posicao) const
    {
        if (estaVazia())
        {
            throw QString("Nao eh possivel acessar, lista vazia - AcessarPosicao");
        }
        if (posicao < 0 || posicao >= quantidadeElementos)
        {
            throw QString("Posicao invalida - AcessarPosicao");
        }
        if (posicao == 0)
        {
            return acessarInicio();
        }
        if (posicao == quantidadeElementos - 1)
        {
            return acessarFinal();
        }
        NO* aux = inicio;
        for (int i = 0; i < posicao; i++)
        {
            aux = aux->getProximo();
        }
        return aux->getDado();
    }

    int LLSE::getQuantidadeElementos() const
    {
        return quantidadeElementos;
    }
    QString LLSE::obterDadosLLSE() const
    {
        NO *aux = inicio;
        QString saida = "";
        for (int i = 0; i < quantidadeElementos; i++)
        {
            if (i == 0)
            {
                saida += "|" + QString::number(aux->getDado()) + "|";
            }
            else
            {
                saida += " -> |" + QString::number(aux->getDado()) + "|";
            }
            aux = aux->getProximo();
        }
        if (estaVazia())
        {
            return "(lista esta vazia)";
        }
        return saida;
    }

    void LLSE::inserirOrdenado(int elemento)
    {
        if (estaVazia())
        {
            inserirInicio(elemento);
            return;
        }
        int indice = 0;
        NO* aux = inicio;
        for (int i = 0; i < quantidadeElementos; i++)
        {
            if (aux->getDado() <= elemento)
            {
                indice = i+1;
            }
            aux = aux->getProximo();
            if (aux == nullptr)
            {
                inserirPosicao(indice, elemento);
                return;
            }
        }
    }
}
