#include "../include/NodoCola.hpp"


using namespace std;

NodoCola::NodoCola(Elemento e, NodoCola* siguiente) {
    elemento = e;
    sig = siguiente;
}

/*NodoCola::getValor(){
    return this->elemento;
    }*/
NodoCola::~NodoCola() {
}

