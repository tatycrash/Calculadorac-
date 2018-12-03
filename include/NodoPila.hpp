#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <cstddef>

class NodoPila
{
    
public:
    NodoPila(int valor,NodoPila* siguiente = NULL);
    ~NodoPila();
    
private:
    NodoPila *siguiente;
    int valor;
    friend class Pila;
};

typedef NodoPila* ppnodo;

#endif // NODOPILA_HPP
