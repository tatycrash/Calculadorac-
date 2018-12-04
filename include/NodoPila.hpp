#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <cstddef>

#include "NodoArbol.hpp"

class NodoPila{

public:
    NodoPila(NodoArbol *valor = NULL,NodoPila* siguiente = NULL);
    ~NodoPila();

private:
    NodoPila *siguiente;
    NodoArbol *valor;
    friend class Pila;
};

typedef NodoPila* ppnodo;

#endif // NODOPILA_HPP
