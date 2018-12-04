#include <string>
#include <stdexcept>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>

#include "../include/Stoi.hpp"

namespace std{
    int stoi(string *str){
     
    int res = 0;//inicializamos la variable que luego va a devolver el numero

    if ((*str)[0] != '-') {//si el primer elemento es distinto a menos
      res = (*str)[0] - '0';// coge el numero ascii de 48 y le resta el valor de 0 en ascii
      if (res < 0 || res > 9)//si no esta entre 0 o 9
        throw invalid_argument("no numero");
    }
    else if((*str).length() == 1)//si el string su longuitud es igual a 1 y el primer elemento es -
      throw invalid_argument("no numero");

    if ((*str).length() != 1)//si es distinta su longuitud a 1
      res *= 10;

    for (unsigned int i = 1; i < (*str).length(); ++i) {//un entero que no tiene signo, "unsigned" para que no salga warning
      int temp = (*str)[i] - '0';//coge el numero de ascii 48 y le resta el valor de 0 en ascii
        
      if (temp < 0 || temp > 9) {
        throw invalid_argument("no numero");
      }

      res = res * 10 + temp;//le suma el siguiente numero que seria el siguiente en la cadena
    }

    if ((*str)[0] == '-')//si el signo es igual a menos
      res *= -1;//se multiplica por -1

    return res;//devuelve resultado o int
    }
}




