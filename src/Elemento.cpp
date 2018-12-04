#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>

#include "../include/Elemento.hpp"

using namespace std;

Elemento::Elemento(){
  if (EsNumero()) {
    tipo = Numero;
  } 
}

void Elemento::setValor(string val){
  valor = val;
}
string Elemento::getValor(){
  return valor;
}

int Elemento::getNumero(){
  return numero;
}

bool Elemento::EsNumero(){
  int temp;
  try {
    temp = stoi(&valor);
  }
  catch(const invalid_argument e) {
    return false;
  }
  numero = temp;
  return true;
}

bool Elemento::EsOperador(){
  if (tipo == indef){
    if ((valor [0]=='+') || (valor [0]=='-') || (valor [0]=='*') || (valor [0]=='/') || (valor [0]=='^') || (valor [0]=='%')) {
      return true;
    }else{
      return false;
    }
  }
  return (tipo == Operador) ?  true : false;
}

bool Elemento::EsParentesis(){
  if (tipo ==  indef)
  if ((valor [0]=='(') || (valor [0]==')')){
    return true;
  }else{
    return false;
  }
}

void Elemento::mostrarElem(){
    cout << "\nValor: " << getValor() << endl;
}

Elemento::~Elemento(){}

