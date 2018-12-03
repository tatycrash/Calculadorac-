#ifndef PILA_HPP
#define PILA_HPP
#include <iostream>

#include "NodoPila.hpp"
#include "Cola.hpp"

class Pila {
public:
    Pila();
    void apilar(int);
    int desapilar();
    bool pilavacia();
    void mostrarPila(ppnodo);
    ~Pila();

private:
    ppnodo cima;
};

#endif // PILA_HPP
