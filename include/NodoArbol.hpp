#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP
#include "Elemento.hpp"
#include <iostream>
#include <cstddef>

using namespace std;

class NodoArbol{

public:
  NodoArbol(string valor, NodoArbol *der = NULL, NodoArbol *izq = NULL);
  ~NodoArbol();
  string getValorArb();

private:
	string valor;
	NodoArbol *izq;
	NodoArbol *der;
  friend class Arbol;
};

typedef NodoArbol* nodoa;

#endif // NODOARBOL_HPP

