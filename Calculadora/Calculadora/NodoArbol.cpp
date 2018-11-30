#include <NodoArbol.hpp>


/*using namespace std; */

NodoArbol::NodoArbol(string val,NodoArbol* der,NodoArbol* izq){//Nodo arbol va a tener 3 parametros que son el string que le meteremos, izq y der
    
    valor = val;
	der = der;
	izq = izq;
}


string NodoArbol::getValorArb(){//obtenemos el valor del nodoarbol
    return valor;
}

NodoArbol::~NodoArbol(){}//destructor

