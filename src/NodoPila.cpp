#include "../include/NodoPila.hpp"

using namespace std;

//el nodo pila tendra un puntero a nodo arbol y el siguiente
NodoPila::NodoPila(NodoArbol* val, NodoPila* sig){
  siguiente = sig;
  valor     = val;
}

NodoPila::~NodoPila(){}
