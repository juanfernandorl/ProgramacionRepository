#include <iostream>

using namespace std;
/*
Se tiene que ingresar un número entero, que
sea par o divisible entre 5 usando un procedimiento.

Luego determinar cuantas cifras tiene el número
usando un procedimiento, deberá de ingresar el número generado en el
procedimiento anterior y obtener el número de cifras que será un parámetro de
variable porque va a salir su valor  del procedimiento.



Presentar el número de cifras del número en
el programa principal.

Hacerlo para 5 números, deberá de usar un
ciclo for , y dentro de este colocar los procedimientos y presentar los datos.
*/
int numero,cifra,ccifras;
int contador=0;


void ingresar (int &numero)
{
    do
    {
        cout<<"Ingrese un numero:";
        cin>>numero;
    } while (!((numero%2==0) or (numero%5==0)));
}

void calcular (int numero, int cifra, int ccifras)
{   contador=0;
    while (numero>0)
    {
        cifra= numero % 10;
        numero=numero / 10;
        contador++;
    }
}

void presentar (int  &ccifras)
{
    cout<<"El numero de cifras es...>"<<contador<<"\n";
}
int main()
{
    cout<<"En el siguiente programa usted puede ingresar 5 veces un numero. El numero tiene que ser par o divisible entre de lo contario el programa no lo dejara contar el numero de cifras del numero que usted digite."<<"\n";
    for(int i=1;i<=5;i++)
    {
    ingresar (numero);
    calcular (numero,cifra,contador);
    presentar (contador);
    cout<<"i:"<<i<<"\n";
    }
    return 0;

}
