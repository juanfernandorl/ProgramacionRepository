#include <iostream>

using namespace std;
/*Determinar si un numero es positivo o negativo
*/

int main()
{ int numero;
  cout<< "Ingresar un numero...";
  cin>> numero;

  if (numero>0)
{
  cout<<"El numero es positivo"<<"\n";
}
else if (numero<0)
{
    cout<<"El numero es negativo"<<"\n";
}
else
{
    cout<<"el numero es cero"<<"\n";
}
    return 0;
}
