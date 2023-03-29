#include "no.h"

Pedro::NO::NO() : dado(0),
                  proximo(0)
{
}

Pedro::NO::NO(int elemento) : dado(elemento),
                              proximo(0)
{
}

int Pedro::NO::getDado() const
{
    return dado;
}

void Pedro::NO::setDado(int newDado)
{
    dado = newDado;
}

Pedro::NO *Pedro::NO::getProximo() const
{
    return proximo;
}

void Pedro::NO::setProximo(NO *newProximo)
{
    proximo = newProximo;
}
