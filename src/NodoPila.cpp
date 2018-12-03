#include "NodoPila.hpp"


using namespace std;

NodoPila::NodoPila(NodoArbol* val,NodoPila* sig){//el nodo pila tendra un puntero a nodo arbol y el siguiente
    siguiente = sig;
    valor = val;
}

NodoPila::~NodoPila(){}