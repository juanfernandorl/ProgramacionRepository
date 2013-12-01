#include <iostream>

using namespace std;
/* Estructuras de repetición
ingresar 5 números y presentar al final del ciclo la suma de los numeros ingresados.
*/
int main()
{ int numero, contador, suma;
    contador=0;
    suma=0;
    while(contador<5)
    {
        cout<<"ingresar un numero ...>";
        cin>> numero;

        contador ++; //Contador = contador +1

        suma+= numero; //sumar= suma + numero;
    }
    cout <<"Suma de los numeros es..>"<<suma<<"\n";
    return 0;
}
