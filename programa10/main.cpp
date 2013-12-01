#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y contar cuantos son positivos, negativos  y ceros.
*/
int main()
{ int numero,cpositivo,cnegativo,cceros,contador;
   cpositivo=0; cnegativo=0; cceros=0;
   contador=0;
   while (contador<5)
    {
        cout<<"ingresar un numero..>";
        cin>>numero;

        if (numero>0)
        {
            cpositivo++;
        }
        else if (numero<0)
        {
            cnegativo++;
        }
        else
        {
            cceros++;
        }
        contador++;
    }

    cout<<"Contador de positivos..:"<<cpositivo<<"\n";
    cout<<"Contador de negativos..:"<<cnegativo<<"\n";
    cout<<"Contador de ceros..:"<<cceros<<"\n";
    return 0;
}
