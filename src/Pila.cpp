#include "../include/Pila.hpp"

using namespace std;

Pila::Pila(){
    cima = NULL;
}

void Pila::apilar (nodoa val){//apilamos nodos arbol a nuestra pila
    ppnodo nuevo;
    nuevo=new NodoPila();//Var aux para manipular para manipular el nuevo nodo el nuevo nodo
    nuevo->valor = val;
    nuevo->siguiente = pilavacia() ? NULL : cima;
    cima=nuevo;
}

nodoa Pila::desapilar(){//desapilamos los nodos arbol que hemos introducido anteriormente
    ppnodo nodo; //Var aux para manipular el nodo
    nodoa elemento;
    if(cima == NULL){
        cout << "No hay nodos en la pila \n";
        return 0;
    }// Si no hay nodos en la pila se devuelve 0
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
    if (cima == NULL){
        return true;
    }
    return false;
}

bool Pila::esUltimo(){
    return !cima;
}

Pila::~Pila(){
    while(cima) desapilar();
}

