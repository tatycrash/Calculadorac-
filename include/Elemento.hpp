#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP
#include <typeinfo>
#include <stdlib.h>
#include <string> 
#include <stdio.h>
#include <iostream>
#include <string.h>

#include "Stoi.hpp"

using namespace std;

typedef enum {
              indef,
              Operador,
              Parentesis,
              Numero
} ElemTipo;

class Elemento {
public:
  Elemento();
  ~Elemento();
  bool EsNumero();
  bool EsOperador();
  bool EsParentesis();
  void setValor(string val);
  string getValor();
  void mostrarElem();
  int getNumero();

private:
  string valor;
  int numero;
  ElemTipo tipo;
};

#endif // ELEMENTO_HPP
