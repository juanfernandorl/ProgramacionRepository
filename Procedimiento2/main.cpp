#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del empleado, el turno y las ventas.
Validar que el turno solo sea 1,2,3. (usar un procedimiento)

Calcular usando un procedimiento, la comision ganada, el ihss
y total a pagar. 1=%,1=3%,3=&%.

Presentar los datos calculados usando un procedimiento.
*/
 // VALOR NO CAMBIA
 // VARIABLE SI CAMBIA Y SE USA AMPER &

char nombre[30];
int ventas,turno,ihss,comision,tp;

void ingreso(char nombre[], int &turno, int &ventas)
{
    cout<<"Ingresar el nombre del empleado..:";
    cin.getline(nombre,30);

    do
    {
        cout<<"Ingreso el turno 1,2,3..:";
        cin>>turno;
    } while((turno<1) and (turno>3));

    cout<<"Ingresar las ventas..:";
    cin>>ventas;
}

void calcular (int ventas, int turno, int &ihss, int &comision, int&tp)
{
    if (turno==1)
    {
        comision= ventas *0.05 ;
    }

    if (turno==2)
    {
        comision= ventas *0.03;
    }

    if (turno==3)
    {
        comision= ventas * 0.06;
    }

    if (comision>7000)
    {
        ihss=245;
    }
    else
    {
        ihss= comision *0.03;
    }

    tp= comision - ihss;
}

void presentar(int comision, int ihss, int tp)
{
    cout<<"La comision:"<<comision<<"\n";
    cout<<"El ihss:"<<ihss<<"\n";
    cout<<"El total a pagar:"<<tp<<"\n";
}
int main()
{
    ingreso (nombre,turno,ventas);
    calcular (ventas,turno,ihss,comision,tp);
    presentar (comision,ihss,tp);
    return 0;
}
