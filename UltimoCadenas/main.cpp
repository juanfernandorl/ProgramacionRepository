#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingrese 5 cadenas de tipo char a un arreglo usanda un procedimiento, luego elavorar una funcion
que cuente cuantas consonantes tiene cada uno de los nombres.
elaborar un procedimiento para agregar al final de la cadena un asterisco. Presentar la cadena modificada con el
asterisco y a la par el numero de consonantes que tiene.
*/
const int n=5;
char cadena [n][30];
int consonante[n];
int mayor;

int contarc (char cadena[])
{
    int i,consonantes,nl;
    nl=strlen(cadena);
    consonantes=0;
            for (i=0;i<nl;i++)
            {
                switch(cadena[i])
                {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    break;
                default :
                    consonantes++;
                    break;
                }
            }
        return consonantes;
}

void contarConsonantes (char cadena[n][30],int consonante[], int &mayor)
{
    mayor=0;
    int i;
   for (i=0;i<n;i++)
    {
        consonante[i]=contarc(cadena[i]);

        if (consonante[i]>mayor)
            mayor=consonante[i];
    }
}



void ingresar (char cadena [n][30])
{
    int i;
    for (i=0;i<n;i++)
    {
       cout<<"Ingrese la Cadena["<<i<<"]...";
       cin.getline(cadena[i],30);
    }

}

void cambias (char cadena [n][30])
{
    int i;
    int fin;
    for (i=0;i<n;i++)
    {
        fin = strlen(cadena[i]);
        cadena[i][fin]='*';
    }
}

void presentar (char cadena[n][30],int consonante[])
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"cadena["<<i<<"]..."<<cadena[i]<<"Tiene "
        <<consonante[i]<<"\n";
    }
}

void presentarMayor (char cadena[n][30],int consonante[])
{
    int i,pos,mayor;
    mayor=0;
    for (i=0;i<n;i++)
    {
    if (mayor<consonante[i])
    {
        mayor=consonante[i];
        pos=i;
    }
    }
    cout<<"Mayor es"<<cadena[pos]<<"con"<<mayor<<"\n";
}
int main()
{
    ingresar(cadena);
    contarConsonantes(cadena,consonante,mayor);
    cambias(cadena);
    presentar(cadena,consonante);
    presentarMayor(cadena,consonante);
    return 0;
}
