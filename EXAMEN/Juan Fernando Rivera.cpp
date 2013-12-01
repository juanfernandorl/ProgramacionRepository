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
{   int numero, suma,cifra,mayor,ccifras,promedio;
    char resp;
    suma=0;

    do
    {
        do
        {

            do
            {
            cout<<"Ingresar un numero entre 1 y 200...>";
            cin>>numero;
            }

            while (numero>0)
            {
            cifra= numero % 10;
            suma+=cifra;
            numero=numero /10;
            ccifras++;
            }
            cout<<"El numero es correcto.."<<"\n";
            cout<<"la suma de los numeros es..>"<<suma<<"\n"<<"\n";
            promedio= suma/ccifras;
            cout<<"El promedio de las cifras es...>"<<promedio<<"\n";

        } while ((!((numero % 2)==0)) and ((numero<0) or (numero>=200)));



         do
        {    cout<<"Desea continuar.. <<Presione S o N >>..:";
             cin.get(resp);
             _flushall();

        } while ((resp !='S') and  (resp !='N'));


    } while (resp!='N');



    return 0;
}
