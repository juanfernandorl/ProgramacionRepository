#include <iostream>

using namespace std;
/*
Los parametros de variable son necesarios cuando necesitamos hacer cambios.

Los parametros de valor no reflejan los camios que tienen en un
procedimiento en el main, pero los de variable si reflejan todos los que
que hayan sufrido en el programa principal.
*/
void calcular(int &sueldo, int &ihss)
{
    if(sueldo>7000)
    ihss=245;
    else
    ihss=0.035 * sueldo;

    sueldo= sueldo * 1.20;
}
int main()
{   int sueldo;
    int ihss=0;


    cout<<"ingrese un sueldo..:";
    cin>>sueldo;

    calcular(sueldo, ihss);

    cout<<"Sueldo...:"<<sueldo<<"\n";
    cout<<"Ihss.....:"<<ihss<<"\n";

    return 0;
}
