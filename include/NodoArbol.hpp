#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP
#include <iostream>
#include <cstddef>

#include "Elemento.hpp"

using namespace std;

class NodoArbol{

public:
    NodoArbol(string valor, NodoArbol *der = NULL, NodoArbol *izq = NULL);
    string getValorArb();
    ~NodoArbol();

private:
	string valor;
	NodoArbol *izq;
	NodoArbol *der;
  friend class Arbol;
};

typedef NodoArbol* nodoa;

#endif // NODOARBOL_HPP

