#include "../include/NodoPila.hpp"


using namespace std;

NodoPila::NodoPila(int valor,NodoPila* siguiente) {
    siguiente = siguiente;
    valor = valor;
}

NodoPila::~NodoPila() {
}
