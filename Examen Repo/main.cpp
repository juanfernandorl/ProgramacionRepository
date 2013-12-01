#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   int numero,mayor,promedio,suma,ccifras,cifra,contador,suma1;
    char resp;
    suma1=0;
    contador=0;
    mayor=0;

    do
    {


    do
    {
        cout<<"Ingrese un numero entre 0 y 200 que sea par..>";
        cin>>numero;
    }while (!(((numero % 2)==0) and (numero>=1) and (numero<=200)));
    _flushall();

    if (numero>mayor)
        {
            mayor=numero;
        }
        suma1+=numero;

        suma=0;
     while (numero>0)
            {
            cifra= numero % 10;
            suma+=cifra;
            numero=numero /10;
            ccifras++;
            }
            cout<<"la suma de los numeros..>"<<suma<<"\n";


            suma1+=numero;
            contador++;

                do
                {
                    cout<<"Desea continuar..:";
                    cin.get(resp);
                    _flushall();
                } while ((resp !='S') and  (resp !='N'));
                _flushall();

    } while (resp!='N');

    promedio= suma1 /contador ;
    cout<<"El promedio de los numeros es..:"<<promedio<<"\n";
    cout<<"El numero mayor fue..:"<<mayor<<"\n";

    return 0;
}
