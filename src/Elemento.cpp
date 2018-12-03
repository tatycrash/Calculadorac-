#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../include/Elemento.hpp"

using namespace std;

Elemento::Elemento() {
  valor;
}

void Elemento::setValor(char val){
  valor = val;
}

char Elemento::getValor(){
  return valor;
}

bool Elemento::EsNumero() {
  if (isdigit(valor)) {
    numero = valor;
    return true;
  } else {
    return false;
  }
}

bool Elemento::EsOperador(){
  if ((valor =='+') || (valor =='-') || (valor =='*') || (valor =='/') || (valor =='^')) {
    return true;
  } else {
    return false;
  }
}

bool Elemento::EsParentesis() {
  if ((valor =='(') || (valor ==')')) {
    return true;
  } else {
    return false;
  }
}

void Elemento::mostrarElem(){
  cout << "\nValor: " << getValor() << endl;
}

Elemento::~Elemento() {
}

