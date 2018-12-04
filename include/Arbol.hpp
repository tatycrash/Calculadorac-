#ifndef ARBOL_HPP
#define ARBOL_HPP

#include <iostream>

#include "NodoArbol.hpp"
#include "Pila.hpp"

using namespace std;

class Arbol{

public:
  Arbol(); //Contructor del arbol
  ~Arbol();
  void insertar(nodoa,nodoa,nodoa);
	nodoa getRaiz();
	void pintar(nodoa, int);
	bool Vacio(nodoa *r) { return r == NULL; }
  void borrar(nodoa);
	void postOrden(nodoa);
	void preOrden(nodoa);
	void inOrden(nodoa);
	/*void buscar(string);*/

private:
	nodoa raiz;
};

#endif // ARBOL_HPP
