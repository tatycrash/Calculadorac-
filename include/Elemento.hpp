#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP
#include <typeinfo>

class Elemento
{
public:
    Elemento();
    ~Elemento();
    bool EsNumero();
    bool EsOperador();
    bool EsParentesis();
    void setValor(char val);
    char getValor();
    void mostrarElem();

private:
    char valor;
    int numero;
    
    
    
};

#endif // ELEMENTO_HPP
