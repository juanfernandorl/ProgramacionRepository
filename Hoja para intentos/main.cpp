#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   const int tam=5;
    int k;
    int arreglo[5];
    int asc;


    for (int i=1;i<=tam; i++)
    {
            cout<<"Ingresar numero..["<<i<<"]..:";
            cin>>arreglo[i];
    }

    for(int i=1;i<=tam;i++)
    {
     for(int k=1;k<=tam-1;k++)
     {
      if (arreglo[k]>arreglo[k+1])
      {
          asc=arreglo[k];
          arreglo[k]=arreglo[k+1];
          arreglo[k+1]=asc;
      }
     }
    }

    cout << "ascendente: ";
    for(int i=1;i<=tam;i++)
    {
    cout<<","<<arreglo[i];
    }

    return 0;
}
