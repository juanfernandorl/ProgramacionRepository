#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/* Se tiene que ingresar numero comprendidos entre 1 - 200 y que sean pares,
validarlos usando un ciclo do/while.
Debera de presentar la suma de los digitos de cada uno de los numeros ingresados, ejemplo si ingresa 182 la suma es 11.
Debera de pregimtar so desea continuar y al terminar el programa
*debera de presentar el numero mayor de los numeros que se ingresaron corectamente.
*Presentar el promedio de los numeros.
*/

int main()
{   int numero,mayor,menor,promedio,suma,ccifras,cifra;
    char resp;
    suma=0;

    do
    {
        cout<<"Ingrese un numero entre 1 y 200 que sea par";
        cin>>numero;
    }while ((!((numero % 2)==0)) and ((numero<0) or (numero>=200)));

     while (numero>0)
            {
            cifra= numero % 10;
            suma+=cifra;
            numero=numero /10;
            ccifras++;
            }

        cout<<"La suma de los digitos es:"<<suma<<"\n";
    return 0;
}
