#include <iostream>
#include <iostream>
#include <stdlib.h>
 #include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15];
};
alumno alumnx;
void ingreso(alumno &alumx)
{
    cout<<"Ingresar el nombre del alumno..:";
    cin.getline(alumx.nombre,30);
    cout<<"Nota acumulada..:";
    cin>>alumx.na;
    cout<<"Nota examen..:";
    cin>>alumx.ne;
}


void calcular(alumno &alumx)
{
    alumx.nf=alumx.na + alumx.ne;
    if (alumx.nf>60)
    {
        strcpy(alumx.obs,"AprobadO");
    }
    else
    {
        strcpy(alumx.obs,"ReprobadO");
    }
}
void presentar(alumno alumx)
{
    cout<<"El alumno "<<alumx.nombre<<" tiene de promedio"
    <<alumx.nf<<" y esta "<<alumx.obs<<"\n";
}


int main()
{
   ingreso(alumnx);
   calcular (alumnx);
   presentar (alumnx);
    return 0;
}
