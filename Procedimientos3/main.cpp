#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*+INgresar el nombre del empleado, las horas y el turno
usando un procedimiento.

Luego determinar pch usando el turno, el pago de horas, ihss
y total a pagar usando un procedimiento.
turno       pxh
1           100
2           150
3           180

Presentar los datos usando un procedimiento.
*/

char nombre[30]; int turno,horas,pb,ihss,tp,pxh;
void ingreso (char nombre [],int &turno, int &horas)
{
    cout<<"Ingresar el nombre del empleado..:";
    cin.getline(nombre,30);
    cout<<"horas trabajadas...:";
    cin>>horas;

    do
    {
        cout<<"Ingreso el turno 1,2,3..:";
        cin>>turno;
    } while((turno<1) and (turno>3));
    _flushall();
}

void calcular(int turno, int horas, int &pb, int &ihss,int pxh, int&tp)
{
   switch (turno)
   {
       case1:
           pxh=100;
           break;
       case2:
           pxh=150;
           break;
    default:
        pxh=180;
        break;
   }

        pb=pxh * horas;

        if(pb>7000)
            ihss=245;
        else
            ihss=0.035*pb;

        tp= pb- ihss;

}

void presentar(int pxh, int pb, int ihss, int tp)
{
    cout<<"Pago por hora"<<pxh<<"\n";
    cout<<"Pago bruto"<<pb<<"\n";
    cout<<"Seguro Social"<<ihss<<"\n";
    cout<<"Total a pagar"<<tp<<"\n";
}

int main()
{   for(int i=0; i<3; i++)
    ingreso (nombre,turno,horas);
    calcular(turno,horas,pb,ihss,pxh,tp);
    presentar(pxh,pb,ihss,tp);
    return 0;
}
