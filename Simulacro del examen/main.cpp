#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Se tiene que ingresar un numero, el cual tiene que validarse que solo sea par o divisible entre 5
Debera de contar cuantos son pares y cuantos son divisibles entre 5.
Tiene que preguntar si desea continuar, validar que la respuesta solo sea S o N.
Obtener el numero mayor de los numeros que se ingresaron correctamente.
Obtener el promedio de los numeros que fueron mayores a 100.
Desarrollar  el programa usando ciclo while, estructuras  de condicion.
Se tomara en cuenta  el orden, identado, el nombre de las variables y la eficiencia del programa.
Subir del proyecto solo el main.
*/

int main()
{   int numero,residuo,n5,npar,c5,cpar;
    char resp;

    do
    {
        do
        {
            cout<<"ingrese un numero que sea para o divisible entre 5...>";
            cin>>numero;

            npar= numero % 2;
            n5= numero%5;

        } while ((npar==0) or (n5==1));

        cout<<"El numero que usted ingreso fue correcto"<<"\n";
    } while (resp!='N');
    return 0;
}
