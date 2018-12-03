#include <iostream>

#include "../include/Cola.hpp"

using namespace std;

Cola::Cola() {
  primero = NULL;
  ultimo = NULL;
}

void Cola::insertarCola(Elemento e) {
  pnodo nuevo;             //creas unpuntero tipo cola llamado "nuevo".
  nuevo = new NodoCola(e); //este apunta al nuevo nodo en el que se aloja el cliente a insertar.

  if (ultimo) {            //si ultimo es NULL(como henmos dicho arriba en el contructor) significa que la cola esta vacia.
		ultimo->sig =nuevo;    //asi que el siguente del ultimo deja de se NULL par apuntar al "nuevo" que a su vez apunta al nodo insertado.
    ultimo = nuevo;
    ultimo->sig = NULL;
	}
	//ultimo pasa a apunta a la misma direccion que nuevo haciendo a nuevo asi el ultimo de la cola.
	if(!primero){            //si no esta vacia
		primero =nuevo;
    ultimo = nuevo;        //el vector inicio pasa a apuntar a nuevo haciendolo el primero de la cola.
	}
}

bool Cola::colaVacia() {
  return (primero==NULL) ? true : false;
}

Elemento Cola::eliminarCola() {
  pnodo aux;
  aux = primero;
  primero = aux->sig;
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

Cola::~Cola() {
}

