#include <iostream>

#include "../include/Cola.hpp"

using namespace std;

Cola::Cola(){
  primero = NULL;
  ultimo = NULL;
  length = 0;
}

void Cola::insertarElem(Elemento e) {
  pnodo nuevo;             //creas un puntero tipo cola llamado "nuevo".
  nuevo = new NodoCola(e); //este apunta al nuevo nodo en el que se aloja el cliente a insertar.
	if(ultimo) {             //si ultimo es NULL(como henmos dicho arriba en el contructor) significa que la cola esta vacia.
		ultimo->sig =nuevo;    //asi que el siguente del ultimo deja de se NULL par apuntar al "nuevo" que a su vez apunta al nodo insertado.
    ultimo = nuevo;
    ultimo->sig = NULL;
	}
	//ultimo pasa a apunta a la misma direccion que nuevo haciendo a nuevo asi el ultimo de la cola.
	if(!primero){//si no esta vacia
		primero =nuevo;
    ultimo = nuevo;//el vector inicio pasa a apuntar a nuevo haciendolo el primero de la cola.
	}
  length ++;
}

bool colaVacia(NodoCola* primero){
  return (primero==NULL)? true : false;
}

Elemento Cola::eliminarElem(){
  if (!primero) {
    out_of_range ex = out_of_range("VAYA POR DIOS");
    throw ex;
  }

  pnodo aux;
  aux     = primero;
  primero = aux->sig;
  length--;
  return aux->elemento;
  delete aux;
}

void Cola::mostrar(){
  pnodo aux = primero;
  while(aux !=NULL) {
    aux->elemento.mostrarElem();
    aux = aux->sig;
  }
}

int Cola::getLength() {
  return length;
}

bool Cola::esNumero() {
  return primero->elemento.EsNumero();
}

Cola::~Cola(){}

