#include <iostream>

using namespace std;
/* Ingresar 5 numeros y determinar el promedio de los numeros de pares e impares y presentar el numero mayor. */

int main()
{ int  numero,cimpar,cpar,contador,mayor,menor;
  int sumap,sumai;
  double prompa,promi;

    contador=0;
    cimpar=0;
    cpar=0;
    mayor=0;
    sumap=0;
    sumai=0;
    menor=1000000;

    while(contador<5)
            {

    cout << "Ingresar un numero >"
    cin>> numero;

    if (numero % 2==0)
        {
            sumap+=numero; //suma=sumap+numero
            cpar++;
        }
        else
        {
            sumai+=numero; //sumai=suma+numero
            cimpar++;
        }
        contador ++;
        }
        if  (numero>mayor)
        {
            mayor=numero;
        }
        if  (numero<menor)
        {
            menor=numero;
        }

        //FIN DE CICLO<

        cout<<"Numero mayor es ...:"<<mayor<<"n";
        cout<<"Numero menor es ...:"<<menor<<"n";

        if (sumap!=0)
        {
          prompa=sumap/cpar;
        }
        else
        {
          prompa=0;
        }

        if (sumai!=0)
        {
          promi=sumai/cimpar;
        }
        else
        {
          promi=0;
        }




   cout<<"Promedio pares es:"<<prompa<<"\n";
   cout<<"Promedio de impares es:"<<promi<<"\n";


    return 0;
}
