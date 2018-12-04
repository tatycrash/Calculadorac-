#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

#include "../include/Cola.hpp"
#include "../include/Pila.hpp"
#include "../include/Elemento.hpp"
#include "../include/NodoArbol.hpp"
#include "../include/Arbol.hpp"
#include "../include/funcs.hpp"

using namespace std;

int main(int argc, char **argv){
  int opc;
  Elemento e;
  Cola c;
  Pila p;
  char rpt;
  string entrada;
  /*int valor1;
    int valor2;
    int res;*/
  nodoa nodoAr,nodoRaiz;
  Arbol arbol;

  do {
    cout << "\n\t-------------------------------------------------------------\n";
    cout << "\n\t            CALCULADORA MARAVILLOSA INTERGALACTICA           \n";
    cout << "\n\t-------------------------------------------------------------\n";
    cout << "\t1. Insertar un numero a la calculadora.\n";
    cout << "\t2. Mostrar la cola de la calculadora.\n";
    cout << "\t3. Crear arbol.\n";
    cout << "\t4. Eliminar primer elemento insertado.\n";
    cout << "\t5. Ver arbol.\n";
    cout << "\t7. Recorrido posfijo.\n";
    cout << "\t8. Recorrido infijo.\n";
    cout << "\t9. Recorrido prefijo.\n";
    cout << "\t10. Salir.\n";
    cout << "Opcion: ";
    cin >> opc;

    switch(opc) {
    case 1:
      do {
        // Pedimos los datos
        cout << "Introduzca la operacion que desee introducir en la calculadora (paso por paso): ";
        cin  >> entrada;

        // Si es un valor aceptable, lo introducimos a la cola
        e.setValor(entrada);
        cout << e.getValor();
        if (e.EsNumero() || e.EsOperador() || e.EsParentesis()){
          cout<< "\nEs un numero, operador o parentesis " ;
          c.insertarCola(e);
        }
        // Si no, escribimos error en pantalla
        else {
          cout << "No es un numero ";
        }
        cout << "\nDesea agregar otro elemento a la calculadora(s/N): ";
        cin  >> rpt;
      } while ((rpt=='S') || (rpt=='s'));
      // Mientras digan s o S, continuamos en el bucle
      pause();
      break;

    case 2:
      cout << "\nMostramos los caracteres insertados anteriormente: ";
      c.mostrar();
      pause();
      break;

    case 3:
      try {
        e = c.eliminarCola();
      } catch(out_of_range e) {
        cout<< "VAYA POR DIOS, NO HAY ELEMENTOS EN LA COLA";
        pause();
        break;
      }

      while (e.EsNumero()){
        nodoAr = new NodoArbol(e.getValor(), NULL, NULL);
        p.apilar(nodoAr);
        //cout<<p.cima->valor<<"\n";
        try{
          e = c.eliminarCola();
        }catch(out_of_range e){
          cout<< "VAYA POR DIOS, ERROR OPERACION, VUELVA A INTRODUCIR\n";
          p.~Pila();
          pause();
          break;
        }
      }
      nodoAr = p.desapilar();                                          //Desapilamos el primer nodoarbol de la pila
      try {
        nodoRaiz = new NodoArbol(c.eliminarCola().getValor(),NULL,NULL); //creamos un nodoarbol que tendra el signo de la cola
      }
      catch (out_of_range e) {
        cout << e.what();
      }
      arbol.insertar(nodoRaiz, p.desapilar(), nodoAr);                 //insertamos en el arbol el signo y los dos numeros
      while (!p.pilavacia()){                                          //mientras la pila no este vacia
        nodoRaiz = new NodoArbol(c.eliminarCola().getValor(), NULL, NULL);//creamos el nodoarbol vacio con el nuevo signo que sale de la cola
        arbol.insertar(nodoRaiz, p.desapilar(), arbol.getRaiz());
        arbol.pintar(arbol.getRaiz(),0);
        pause();
      }
      //arbol.pintar(arbol.getRaiz(),0);//pinta el arbol como esta construido
      pause();
      break;

    case 4:
      cout <<"\nPrimer elemento eliminado";
      try {
        c.eliminarCola();
      } catch (const out_of_range e) {
        cout << "No hay nodos en la cola\n";
        break;
      }
      pause();
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    }
    clear();
  } while(opc!=10);
}

