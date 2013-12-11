#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

/* Ingresar 5 nombres a un arreglo, luego sustituir sus vocales por letras x. */


char nombre[5][30];

void Ingreso(char cadena[5][30])
{

    for (int i=0;i<5;i++)
    {
        cout << "Ingresar el nombre...: ";
        cin.getline(nombre[i], 30);
    }
}

void Comparar(char cadena[5][30])
{ char cadcompa[30];
 cout << "Ingresar cadena a comparar...: ";
        cin.getline(cadcompa, 30);

    for(int i=0;i<5;i++)
    {
     if (strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
       {
           cout << "Comparacion correecta con:"<<nombre[i]<<"\n";
       }

    }
}

void Comparar2(char nombre[5][30])
{
    char cadcompa[30];
 cout << "Ingresar cadena a comparar...: ";
        cin.getline(cadcompa, 30);

    for(int i=0;i<5;i++)
    {
     if (strcmp(nombre[i],cadcompa)==0)
       {
           cout << "Comparacion correecta con:"<<nombre[i]<<"\n";
       }

    }
}



int main()
{
    Ingreso(nombre);
    Comparar(nombre);
    Comparar2(nombre);
}
