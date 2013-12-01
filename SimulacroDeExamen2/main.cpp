#include <iostream>

using namespace std;
const int tam=8;
int arreglo[8];
int promedio;
int cont35;
int t;


void ingresar(int arreglo[])
{
    for (int i=1;i<=tam;i++)
    {
        cout<<"Ingresar numero..:";
        cin>>arreglo[i];
    }
}

int promedioC(int arreglo[])
{
    int suma=0;
    for (int i=1;i<=tam; i++)
    {
        suma=suma + arreglo[i];

    }

    return suma/tam;
}

void  Numeros35 (int arreglo[])
{
    for (int i=1; i<=tam; i++)
    {
        if  (arreglo[i]>35)
        {
           cont35++;
        }
    }
}

int maxima(int arreglo[])
{   int maxi=arreglo[0];
    for(int i=0;i<=tam;i++)
    {
        if(arreglo[i]>maxi)
        {
            maxi=arreglo[i];
        }
    }
    return maxi;
}

int main()
{ int t;
    ingresar(arreglo);
    promedio=promedioC(arreglo);
    Numeros35(arreglo);
    t=maxima;


    cout<<"El promedio  es:"<<promedio<<"\n";
    cout<<"El numero de temperaturas mayores a 35 es:"<<cont35<<"\n";
    cout<<"La temperatura mas alta es:"<<t<<"\n";
    return 0;
}
