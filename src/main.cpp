#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

#include "../include/Cola.hpp"
#include "../include/Pila.hpp"
#include "../include/Elemento.hpp"
#include "../include/NodoArbol.hpp"
#include "../include/Arbol.hpp"

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

/*if (argc > 1){
    for (int i = 0; argv[1][i] != '\0'; i++) {
      char var = argv[1][i];
      switch (var){
      case ' ': {
        continue;
      }
        default: {
        string valor = "";
        valor += var;
        e.setValor(valor);
        c.insertarCola(e);
        }
      }
    }
}*/
    do{
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
        
        switch(opc){
            case 1:
                do{
                cout<< "Introduzca la operacion que desee introducir en la calculadora (paso por paso): ";
                cin >> entrada;
                
                e.setValor(entrada);
                cout << e.getValor();
                if (e.EsNumero() || e.EsOperador() || e.EsParentesis()){
                   cout<< "\nEs un numero, operador o parentesis " ;
                c.insertarCola(e);  
                }else{
                    cout << "No es un numero "; 
                    }
                cout<<"\nDesea agregar otro elemento a la calculadora(s/n): ";
                cin>>rpt;
                }while ((rpt=='S')||(rpt=='s'));
                system("pause");
                break;
            
            case 2: 
                cout<<"\nMostramos los caracteres insertados anteriormente: ";
                c.mostrar();
                system("pause");
                break;
            
            case 3:
            try{
                e = c.eliminarCola();
            }catch(out_of_range e){
                    cout<< "VAYA POR DIOS, NO HAY ELEMENTOS EN LA COLA";
                    system("pause");
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
                    system("pause");
                    break;
                } 
            }
            nodoAr = p.desapilar();//Desapilamos el primer nodoarbol de la pila
            nodoRaiz = new NodoArbol(c.eliminarCola().getValor(),NULL,NULL);//creamos un nodoarbol que tendra el signo de la cola
            arbol.insertar(nodoRaiz, p.desapilar(), nodoAr);//insertamos en el arbol el signo y los dos numeros
            while (!p.pilavacia()){//mientras la pila no este vacia
                nodoRaiz = new NodoArbol(c.eliminarCola().getValor(), NULL, NULL);//creamos el nodoarbol vacio con el nuevo signo que sale de la cola
                arbol.insertar(nodoRaiz, p.desapilar(), arbol.getRaiz());
                arbol.pintar(arbol.getRaiz(),0);
                system("pause");//insertamos el nuevo arbol a la estructura ya creada anteriormente
            }
            //arbol.pintar(arbol.getRaiz(),0);//pinta el arbol como esta construido
            system("pause");
            break;
            /*while (!p.esUltimo()){
                valor1 = p.desapilar();//hijo derecha
                valor2 = p.desapilar();//hijo izquierda
                
                switch(e.getValor()[0]){
                    
                    case '%':
                    res = valor2%valor1;
                    p.apilar(res);
                    break;
                    
                    case '^':
                    res = pow(valor2,valor1);
                    p.apilar(res);
                    break;
                    
                    case '*':
                    res=valor2*valor1;
                    p.apilar(res);
                    break;
                    
                    case '/':
                    res=valor2/valor1;
                    p.apilar(res);
                    break;
                    
                    case '+':
                    res=valor2+valor1;
                    p.apilar(res);
                    break;
                    
                    case '-':
                    res=valor2-valor1;
                    p.apilar(res);
                    break;
                }
                Elemento temp;//si ya se ha borrado la cola
                      try {
                          temp = c.eliminarCola();//intentamos elminar el ultimo de la cola y nos sale una excepcion
                      } catch (const out_of_range e) {
                          break;
                      }
                      e = temp;//devolvemos el elemento que tenemos en la cola
            }
            cout << "Resultado: " << p.desapilar() << '\n';
            system("pause");
            break;*/
            
            case 4: 
                cout <<"\nPrimer elemento eliminado";
                try {
                    c.eliminarCola();
                    } catch (const out_of_range e) {
                      cout << "No hay nodos en la cola\n";
                break;
                }
                system("pause");
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
        system("cls");
    }while(opc!=10);
}

