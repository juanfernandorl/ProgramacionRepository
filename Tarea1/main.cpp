#include <iostream>

using namespace std;
/* Ingresar el mes , el día , el año y determinar si la fecha esta correcta.
se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.*/



int main()
{ int mes,dia,an;

  cout<< "Ingresar el mes...>";
  cin>>mes;

  cout<< "Ingresar el dia...>";
  cin>>dia;

  cout<< "año...>";
  cin>>an;

  if ((mes>=1)and(mes<=12))
  {
      cout<<"El mes que usted ingreso es valido."<<"\n";
  }
  else
  {
      cout<<"El mes que usted ingreso es incorrecto."<<"\n";
  }
  if ((dia>=1)and (dia<=31))
  {
      cout<<"El dia que usted ingreso es valido."<<"\n";
  }
  else
  {
    cout<<"El dia que usted ingreso es incorrecto."<<"\n";
  }
  if ((an>0))
  {
      cout<<"El año que usted ingreso es valido."<<"\n";
  }
  else
  {
      cout<<"El año que usted ingreso es incorrecto."<<"\n";
  }

  if ((an>=1) and ((mes>=1) and (mes<=12)))
    {
      if((mes==1) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==2) and ((dia>=1) and (dia<=29)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==3) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==4) and ((dia>=1) and (dia<=30)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==5) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==6) and ((dia>=1) and (dia<=30)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==7) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==8) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==9) and ((dia>=1) and (dia<=30)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==10) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==11) and ((dia>=1) and (dia<=30)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else if((mes==12) and ((dia>=1) and (dia<=31)))
      {
        cout<<"Fecha Correcta"<<"\n";
      }
      else
      {
        cout<<"Fecha Incorrecta.. <<REVISE EL DIA>>"<<"\n";
      }
      }

    else
    {
        cout<<"Fecha Incorrecta... <<REVISE EL MES Y EL AÑO>>"<<"\n";
    }

    return 0;
}
