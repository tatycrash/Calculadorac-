#include "Elemento.hpp"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>



using namespace std;

Elemento::Elemento(){
 valor;
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
    
    if ((valor [0]=='+') || (valor [0]=='-') || (valor [0]=='*') || (valor [0]=='/') || (valor [0]=='^') || (valor [0]=='%')) {
        return true;
        }else{
        return false;    
        }
}

bool Elemento::EsParentesis(){
    
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

