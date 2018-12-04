#ifndef COLA_HPP
#define COLA_HPP
#include <iostream>
#include <cstddef>

#include "Elemento.hpp"
#include "NodoCola.hpp"

class Cola {

public:
  Cola();
  void     insertarElem(Elemento e);
  Elemento eliminarElem();
  bool     colaVacia();
  void     mostrar();
  int      getLength();
  bool     esNumero();
  ~Cola();
private:
  pnodo primero, ultimo;
  int   length;
};

#endif // COLA_HPP
