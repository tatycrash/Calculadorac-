#ifndef COLA_HPP
#define COLA_HPP
#include <iostream>
#include <cstddef>

#include "Elemento.hpp"
#include "NodoCola.hpp"

class Cola {

public:
  Cola();
  void     insertarCola(Elemento e);
  Elemento eliminarCola();
  bool     colaVacia();
  void     mostrar();
  int      getLength();
  ~Cola();
private:
  pnodo primero, ultimo;
  int   length;
};

#endif // COLA_HPP
