#include <iostream>

using namespace std;
  const int tam=5;
  int numero[tam],doble [tam];
  int suma100, mayordiv5;


  void ingreso(int numero[])
  {
      for (int i=0; i<=tam; i++)
      {
          do
          {
            cout<<"Ingresar un numero par...:";
            cin>>numero[i];
          }while (!(numero[i]%2==0));
      }
  }

int suma(int numero[])
{
    int sum=0;
  for (int i=0; i<=tam; i++)
  {
      if (numero[i]>100)
        sum+=numero[i];
  }
  return sum;
}

int mayor (int numero[])
{
    int maximo=0;
    for (int i=0; i<=tam; i++)
    {
        if (numero[i]%5==0)
            if (maximo<numero[i])
                maximo=numero[i];
    }
    return maximo;
}

void dobleArreglo(int numero[], int doble[])
{
    for (int i=0; i<=tam; i++)
    {
        doble[i]=numero[i]*2;
    }
}

void presentar (int numero[], int doble[])
{
    for (int i=0; i<=tam; i++)
    {
        cout<<"El doble del n+umero"<<numero[i]<<"es"<<doble[i]<<"\n";
    }
}

int main()
{
    ingreso(numero);
    suma100=suma(numero);
    cout<<"suma de todo el arreglo es"<< suma100<<"\n";
    mayordiv5=mayor(numero);
    cout<<"Numero mayor de los divisibles entre 5....:"<<mayordiv5<<"\n";
    dobleArreglo(numero,doble);
    presentar(numero,doble);

    return 0;
}
