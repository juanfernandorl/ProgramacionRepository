#include <iostream>

using namespace std;
/*
Ingresar las horas trabajadas, el pago por hora y calcular el salario
de duduccion del 5% del salario y  el total a pagar que el sueldo
 restando la deducciones.
 */
int main()
{ int horas;
  double pxh,salario,deduccion,tp;

  cout << "Ingresar las horas...>";
  cin >> horas;

  cout <<"ingresar el pago por hora...>";
  cin >> pxh;

  salario= horas * pxh;
  deduccion= salario *0.05;
  tp=salario - deduccion;

  cout<< "salario"<<salario<<"\n";
  cout<< "Deducción"<<deduccion<<"\n";
  cout<< "Total a pagar"<<tp<<"\n";



    cout << "Hello world!" << endl;
    return 0;
}
