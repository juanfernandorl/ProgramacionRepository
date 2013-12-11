#include <iostream>
#include <iostream>
#include <stdlib.h>
 #include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
int segurok;
double porcomision,ihss,comision,tp;
struct empleado
{
    char nombre [30];
    int ventas,turno;
    double porcomision,comision,ihss,tp;
};
empleado empleadox;
void ingresar (empleado &empleadox)
{
    do
    {
    cout<<"Ingrese nombre:";
    cin.getline(empleadox.nombre,30);
    cout<<"Ingrese las ventas:";
    cin>>empleadox.ventas;
    cout<<"Ingrese turno [1,2,3]..:";
    cin>>empleadox.turno;
    cout<<"\n";
    } while ((empleadox.turno<1) || (empleadox.turno>3));
    _flushall();
}

int tablacomision(empleado empleadox)
{
    if (empleadox.turno==1)
        porcomision=0.03 * empleadox.ventas;
    else if (empleadox.turno==2)
        porcomision=0.05 * empleadox.ventas;
    else
        porcomision=0.07 * empleadox.ventas;

    return porcomision;
}

int seguro(empleado empleadox)
{
    if (empleadox.ventas>7000)
        ihss=245;
    else
        ihss=0.035 * empleadox.ventas;

        return ihss;
}

void calcular(empleado empleadox)
{
    comision= porcomision;
    tp= comision - ihss;

}

void presentar(empleado empleadox)
{
    cout<<"Las ventas del mes fueron...........................:"<<empleadox.ventas<<"\n";
    cout<<"La comision por ventas es...........................:"<<comision<<"\n";
    cout<<"El ihss es..........................................:"<<ihss<<"\n";
    cout<<"El total a pagar del empleado "<<empleadox.nombre<<" es....:"<<"\t"<<"("<<comision<<"-"<<ihss<<")="<<tp<<"\n";

}
int main()
{
    ingresar (empleadox);
    porcomision=tablacomision(empleadox);
    segurok=seguro(empleadox);
    calcular (empleadox);
    presentar (empleadox);
    return 0;
}
