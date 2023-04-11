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
            if (aux == nullptr)
            {
                delete aux;
            }
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
            }
            else
            {
                NO *aux = new NO(elemento);
                NO *aux2 = inicio;
                for (int i = 0; i < quantidadeElementos - 1; i++)
                {
                    aux2 = aux2->getProximo();
                }
                aux2->setProximo(aux);
                quantidadeElementos++;
            }
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
        for (int i = 0; i < quantidadeElementos - 2; i++)
        {
            aux = aux->getProximo();
        }
        NO *aux2 = aux->getProximo();
        if (aux2)
        {
            int valor = aux2->getDado();
            delete aux2;
            aux2 = nullptr;
            aux->setProximo(nullptr);
            quantidadeElementos--;
            return valor;
        }
        else
        {
            delete aux2;
            return retirarInicio();
        }
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
        if (posicao < 0 || posicao > quantidadeElementos - 1)
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
                saida += "|" + QString::number(aux->getDado()) + "| -> ";
            }
            aux = aux->getProximo();
        }
        if (estaVazia())
        {
            saida = "(Lista esta vazia)";
        }
        return saida;
    }
}
