#include "../include/Pila.hpp"

using namespace std;

Pila::Pila() {
    cima = NULL;
}

void Pila::apilar (int valor) {
  ppnodo nuevo;
  nuevo=new NodoPila(valor);

  //Var aux para manipular para manipular el nuevo nodo el nuevo nodo
  if(pilavacia()) {
    cout << "La pila esta vacia";
    nuevo->siguiente=NULL;
  } else {
    nuevo->siguiente=cima;
  }

  cima = nuevo;
}

int Pila::desapilar(){
    ppnodo nodo; //Var aux para manipular el nodo
    int elemento;
    if(!cima)
        cout << "No hay nodos en la pila \n"; // Si no hay nodos en la pila se devuelve 0
    // Nodo apunta al primer elemento de la pila
    nodo = cima;
    //Se asigna a pila toda la pila menos el primer elemento
    cima= nodo->siguiente;
    //Se guarda el retorno del valor del nodo
    elemento = nodo->valor;
    //Se borra el nodo //Se borra el nodo
    delete nodo;
    return elemento;
    }


void Pila::mostrarPila(ppnodo cima){
    cout << "Mostrar la pila";
    if(cima!=NULL){
        while(cima!=NULL){
           cout<<cima->valor<<" - ";
           cima = cima->siguiente;
        }
        cout<<"NULL"<<endl;
    }
    else
        cout<<"Pila vacía"<<endl;
    }
bool Pila::pilavacia(){
    return cima=NULL; 
    }
    
Pila::~Pila()
{
    while(cima) desapilar();
}

