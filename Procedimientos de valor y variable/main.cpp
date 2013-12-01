#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/* Existen dos tipos de procedimientos con el comando "void number", los cuales son de valor y de variable */

/*
Ingresar el nombre, notaa, notae usando un procedimiento
luego determinar la nota final, y la observacion usando un
procedimiento, presentar los datos usando otro procedimiento,
*/

// Variables globales: Se declaran al inicio del programa, antes de la main.
// TODOS LOS ARREGLOS SON PARAMETROS DE VARIABLE y SE PASA COMO VARIABLE AUTOMATICAMENTE. NO SE USA EL AMPER &
// CUANDO LOS DATOS NO CAMBIAN NO SE USA AMPER.
// PARA ASIGNARLE VALOR A UNA CADENA SE TIENE QUE USAR strcpy..

char nombre [30];
char obs[15];
int na,ne,nf;

void ingreso (char nombre [], int &na,int &ne)
{
    cout << "Ingresar el nombre del alumno...:";
    cin.getline(nombre,30);
    cout<<"Ingresar la nota Examen..:";
    cin>>ne;
    cout<<"Ingresar la nota Final..:";
    cin>>na;
}

void calcular(int na, int ne, int &nf, char obs[])
{
    nf= na + ne;
    if (nf>60)
        strcpy (obs,"Aprobado");
        else
        strcpy (obs,"Reprobado");
}

void presentar (int nf, char obs [])
{
    cout<<"Nota final de alumno:"<<nf<<"\n";
    cout<<"Observacion: "<<obs<<"\n";
}
int main()
{   ingreso(nombre,na,ne);
    calcular(na,ne,nf,obs);
    presentar (nf,obs);
    return 0;
}
