#include "../include/NodoArbol.hpp"

/**
 * Nodo arbol va a tener 3 parametros que son el string que le meteremos, izq y der
 **/
NodoArbol::NodoArbol(string val, NodoArbol* dere,NodoArbol* izqu){
  valor = val;
	der = dere;
	izq = izqu;
}

/**
 * Obtenemos el valor del nodoarbol
 **/
string NodoArbol::getValorArb() {
    return valor;
}

NodoArbol::~NodoArbol(){}//destructor

