#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include <cstddef>

#include <Elemento.hpp>


class NodoCola{
    
public:
    NodoCola(Elemento elemento, NodoCola* sig =NULL);
    ~NodoCola();
private:
    Elemento elemento;
    NodoCola* sig;
    friend class Cola;
};

typedef NodoCola* pnodo;

#endif // NODOCOLA_HPP
