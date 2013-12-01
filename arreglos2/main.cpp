#include <iostream>
/*
Ingresar 5 numeros a un arreglos.
Los numeros deberan de estar entre 50-100.

Usando una funcion debera de obtener la suma de los numeros divisibles entre 5.

crear una funcion para determinar el promedio de los numeros pares.

crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros que son pares.
crear un procedimiento para presentar el arreglo.

*/
using namespace std;
const int tam=4;
int arreglo[4];
int sumaA,promedioP;
void ingreso(int arreglo[])
{
    for (int i=0;i<=tam; i++)
    {
        do
        {
            cout<<"Ingresar numero:";
            cin>>arreglo[i];
        } while (!((arreglo[i]>=50) and (arreglo[i]<=100)));
    }
}
int numerodivisible5(int arreglo[])
{
    int suma=0;
    for (int i=0;i<tam;i++)
    {
        if (arreglo[i] % 5==0)
            suma += arreglo[i];
    }
    return suma;
}

int promedioNpares (int arreglo[])
{
    int suma2=0;
    int cpares=0;
    for (int i=0;i<tam;i++)
    {
        if (arreglo[i] % 2==0)
            suma2 += arreglo[i];

            cpares++;
    }
    return suma2/cpares;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
