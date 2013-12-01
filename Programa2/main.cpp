#include <iostream>

using namespace std;
/*
Ingresar la nota acumula y examen y luego calcular la nota final y la observacion de aprobado o reprobado.


*/

int main()
{ int notaA,notaE,notaF;

  cout<< "Ingresar nota Acumulada..:";
  cin>>notaA;

  cout<< "Ingresar nota Examen..:";
  cin>> notaE;

  notaF= notaA + notaE;
  if (notaF>60)
  {
cout<< "Estado: Aprobado";
  }
  else
  {
      cout<<"Estado: Reprobado";
  }
  cout<<"\n";
    cout << "Nota Final Es "<<notaF<<"\n";

    return 0;
}
