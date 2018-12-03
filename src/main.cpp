#include <stdio.h>
#include <iostream>

#include "../include/Cola.hpp"
#include "../include/Pila.hpp"
#include "../include/Elemento.hpp"

using namespace std;

int main(int argc, char **argv)
{
    int opc;
    Elemento e;
    Cola c;
    Pila p;
    char rpt;
    char entrada;
    int valor1;
    int valor2;
    int res;

    do {
        cout << "\n\t-------------------------------------------------------------\n";
        cout << "\n\t                  CALCULADORA MARAVILLOSA                    \n";
        cout << "\n\t---------------------------------------------------------------\n";

        cout << "\t1. Insertar un numero a la calculadora.\n";
        cout << "\t2. Mostrar la cola de la calculadora.\n";
        cout << "\t3. Resultado de la operacion.\n";
        cout << "\t4. Eliminar ultimo elemento insertado.\n";
        cout << "\t5. Salir.\n";
        cout << "Opcion: ";
        cin >> opc;

        switch(opc) {
            case 1:
                do {
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
            
            e = c.eliminarCola();
            while (e.EsNumero()){
                p.apilar(e.getValor());
                e = c.eliminarCola();
                }
                
            while (e.getValor()!=NULL){
                valor1 = p.desapilar();
                valor2 = p.desapilar();
                switch(e.getValor()){
                    case '^':
                    res=valor2^valor1;
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
                e = c.eliminarCola();
                }

            
            break;
            case 4: 
                cout <<"\nUltimo elemento eliminado";
                c.eliminarCola();
                system("pause");
                break;
            case 5: break;
        }
        system("cls");
    }while(opc!=5);
}

