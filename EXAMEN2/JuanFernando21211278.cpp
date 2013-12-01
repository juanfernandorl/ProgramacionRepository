#include <iostream>

using namespace std;
const int tam=5;
int arreglo[tam];
int suma;

void ingreso(int arreglo[])
{
    for(int i=0;i<tam;i++)
    {
        do
        {
        cout<<"Ingresar un numero["<<i<<"]...:";
        cin>>arreglo[i];
        } while (!(arreglo[i]%2==0));
    }
}

int suma100 (int arreglo [])
{   int suma=0;
    for(int i=0; i<=tam; i++)
    {
        if (arreglo[i]>100)
        {
            suma=suma + arreglo[i];
        }
        else
        {
            suma=suma + 0;
        }
    }
    return suma;
}

int nmayor(int arreglo[])
{   int maxi=arreglo[0];
    for(int i=0;i<=tam;i++)
    {
        if((arreglo[i]>maxi) and (arreglo[i]%2==0))
        {
            maxi=arreglo[i];
        }
    }
    return maxi;
}

void calcudoble (int arreglo[])
{
    for (int b=0; b<=tam; b++)
    {
        for (int i=0; i<=tam; i++)
        {
            arreglo[b]=arreglo[i] * 2;
            arreglo[b]=b;
        }
    }
}

int main()
{

    ingreso (arreglo);
    calcudoble(arreglo);

    cout<<"La suma de los numeros mayores a 100 es..............:"<<suma<<"\n";
    cout<<"El numero mayor de los numeros divibles entre 5 es...:"<<suma100<<"\n";
    cout<<"El numero mayor es:"<<nmayor<<"\n";

     cout<<"arreglo B..:";
    for (int b=0;b<=tam;b++)
    {
        cout<< arreglo[b] <<"..";
    }
    cout<<"\n";
}
