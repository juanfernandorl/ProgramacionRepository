#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int dia,mes;

void ingresar (int &dia,int &mes)
{
 do
    {
    cout<<"mes..:";
    cin>>mes;
    } while (!((mes>=1) and (mes<=12)));

    do
    {
    cout<<"dia..:";
    cin>>dia;
    } while (!((dia>=1) and (dia<=31)));
}


void presentar (int dia, int mes, int &acuario, int &piscis, int &aries, int &tauro, int &geminis, int &cancer, int &leo, int &virgo, int &libra, int &escorpion, int &sagitario, int &capricornio)
{
 if (((mes==1) and (dia>=21)) or ((mes==2) and (dia<=18)))
   {cout<<"Signo zodiacal...................:Acuario"<<"\n"; acuario++;}
 else if (((mes==2) and (dia>=19)) or ((mes==3) and (dia<=20)))
    {cout<<"Signo zodiacal...................:Piscis"<<"\n"; piscis++;}
 else if (((mes==3) and (dia>=21)) or ((mes==4) and (dia<=20)))
    {cout<<"Signo zodiacal...................:Aries"<<"\n"; aries++;}
 else if (((mes==4) and (dia>=21)) or ((mes==5) and (dia<=21)))
    {cout<<"Signo zodiacal...................:Tauro"<<"\n"; tauro++;}
 else if (((mes==5) and (dia>=22)) or ((mes==6) and (dia<=21)))
    {cout<<"Signo zodiacal...................:Geminis"<<"\n"; geminis++;}
 else if (((mes==6) and (dia>=22)) or ((mes==7) and (dia<=22)))
    {cout<<"Signo zodiacal...................:Cancer"<<"\n"; cancer++;}
 else if (((mes==7) and (dia>=23)) or ((mes==8) and (dia<=23)))
    {cout<<"Signo zodiacal...................:Leo"<<"\n"; leo++;}
 else if (((mes==8) and (dia>=24)) or ((mes==9) and (dia<=23)))
    {cout<<"Signo zodiacal...................:Virgo"<<"\n"; virgo++;}
 else if (((mes==9) and (dia>=24)) or ((mes==10) and (dia<=23)))
    {cout<<"Signo zodiacal...................:Libra"<<"\n"; libra++;}
 else if (((mes==10) and (dia>=24)) or ((mes==11) and (dia<=22)))
    {cout<<"Signo zodiacal...................:Escorpion"<<"\n"; escorpion++;}
 else if (((mes==11) and (dia>=23)) or ((mes==12) and (dia<=21)))
    {cout<<"Signo zodiacal...................:Sagitario"<<"\n"; sagitario++;}
 else if (((mes==12) and (dia>=22)) or ((mes==1) and (dia<=20)))
    {cout<<"Signo zodiacal...................:Capricornio"<<"\n"; capricornio++;}
 else
    cout<<"Revise la fecha posiblemente este incorrecta"<<"\n";
}


int main()
{ char resp; int contador=0;
  int acuario,piscis,aries,tauro,geminis,cancer,leo,virgo,libra,escorpion,sagitario,capricornio;
  acuario=0; piscis=0; aries=0; tauro=0; geminis=0; cancer=0; leo=0; virgo=0; libra=0; escorpion=0; sagitario=0; capricornio=0;

    do
    {
    ingresar(dia,mes);
    presentar(dia,mes,acuario,piscis,aries,tauro,geminis,cancer,leo,virgo,libra,escorpion,sagitario,capricornio);
    contador++;

    _flushall();
   do
   {    cout<<"Desea continuar ...:";
        cin.get(resp);
        _flushall();

   } while ((resp !='S') and  (resp !='N'));
    _flushall();


    } while (resp !='N');

    cout<<"El numero de personas que son acuario......:"<<acuario<<"\n";
    cout<<"El numero de personas que son piscis.......:"<<piscis<<"\n";
    cout<<"El numero de personas que son aries........:"<<aries<<"\n";
    cout<<"El numero de personas que son tauro........:"<<tauro<<"\n";
    cout<<"El numero de personas que son geminis......:"<<geminis<<"\n";
    cout<<"El numero de personas que son cancer.......:"<<cancer<<"\n";
    cout<<"El numero de personas que son leo..........:"<<leo<<"\n";
    cout<<"El numero de personas que son virgo........:"<<virgo<<"\n";
    cout<<"El numero de personas que son libra........:"<<libra<<"\n";
    cout<<"El numero de personas que son escorpion....:"<<escorpion<<"\n";
    cout<<"El numero de personas que son sagitario....:"<<sagitario<<"\n";
    cout<<"El numero de personas que son capricornio..:"<<capricornio<<"\n";
    cout<<"El numero de signos zodiacales total es....:"<<contador<<"\n";
    return 0;
}
