#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   int num,Nummayor,prom,suma,Ccifras,cifra,contador,sumaDig;
    char resp;
    sumaDig=0;
    contador=0;
    Nummayor=0;

    do
    {


    do
    {
        cout<<"Ingrese un numero para entre 1-200 ...>";
        cin>>num;
    }while (!(((num % 2)==0) and (num>=1) and (num<=200)));
    _flushall();

    if (num>0)
        {
            Nummayor=num;
        }
        sumaDig+=num;

        suma=0;
     while (num>0)
            {
            cifra= num % 10;
            suma+=cifra;
            num=num /10;
            Ccifras++;
            }
            cout<<"la suma del numero es..:"<<suma<<"\n";


            sumaDig+=num;
            contador++;

                do
                {
                    cout<<"Desea continuar...?";
                    cin.get(resp);
                    _flushall();
                } while ((resp !='S') and  (resp !='N'));
                _flushall();

    } while (resp!='N');

    prom= sumaDig /contador ;
    cout<<"El promedio de los numeros es..:"<<prom<<"\n";
    cout<<"El numero mayor fue..:"<<Nummayor<<"\n";

    return 0;
}
