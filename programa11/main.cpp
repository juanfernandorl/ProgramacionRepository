#include <iostream>

using namespace std;
/*
Ingresar la cantidad de numeros que necesitamos pedir.
luego ingresar el numero y determinar si es par o impar.
al final presentar cuantos fueron pares o impares.
*/
int main()
{ int numero,cpar,cimpar,contador,nveces;
  contador=0;
  cimpar=0;
  cpar=0;

  cout<<"¿Cuantos numeros desea ingresar?";
  cin>>nveces;


  while (contador<nveces)
        {

    cout << "Ingresar un numero >";
    cin>> numero;

    if (numero % 2==0)
        {
            cout<<"El numero es par"<<"\n";
            cpar++;
        }
        else
        {
            cout<<"El numero es Impar"<<"\n";
            cimpar++;
        }
        contador ++;
        }
   cout<<"numero de pares es:"<<cpar<<"\n";
   cout<<"numero de imares es:"<<cimpar<<"\n";
    return 0;
}
