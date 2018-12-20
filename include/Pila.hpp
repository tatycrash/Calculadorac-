#ifndef PILA_HPP
#define PILA_HPP
#include <iostream>

#include "NodoPila.hpp"
#include "Cola.hpp"
#include "NodoArbol.hpp"

class Pila{
public:
  Pila();
  void apilar(nodoa);
  nodoa desapilar();
  bool pilavacia();
  void mostrarPila(ppnodo);
  bool esUltimo();
  ~Pila();

private:
  NodoPila* cima;
};

#endif // PILA_HPP
