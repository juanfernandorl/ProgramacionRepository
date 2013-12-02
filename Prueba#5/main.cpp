#include <iostream>
#include <iostream>
#include <stdlib.h>
 #include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
int porcomision,segurok;
struct empleado
{
    char nombre [30];
    int ventas,turno,porcomision,comision,ihss,tp;
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
    cout<<"Ingrese turno [1,2,3]";
    cin>>empleadox.turno;
    } while ((empleadox.turno<1) || (empleadox.turno>3));
    _flushall();
}

int tablacomision(empleado empleadox)
{
    if (empleadox.turno==1)
    {
        return empleadox.porcomision=0.03;
    }
    else if (empleadox.turno==2)
    {
        return empleadox.porcomision=0.05;
    }
    else if (empleadox.turno==3)
    {
        return empleadox.porcomision=0.06;
    }
    else
    {
        return  0;
    }
}

int seguro(empleado empleadox)
{
    if (empleadox.ventas>7000)
                    return empleadox.ihss=245;
    else
        return empleadox.ihss=0.035 * empleadox.ventas;
}

void calcular(empleado empleadox)
{
    empleadox.comision= empleadox.ventas * empleadox.porcomision;
    empleadox.tp= empleadox.comision - empleadox.ihss;
}

void presentar(empleado empleadox)
{
    cout<<"El porcentaje por comision es:"<<empleadox.porcomision<<"\n";
    cout<<"La comision por ventas es....:"<<empleadox.comision<<"\n";
    cout<<"El ihss cobra................:"<<empleadox.ihss<<"\n";
    cout<<"El total a pagar es..........:"<<empleadox.tp<<"\n";
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
