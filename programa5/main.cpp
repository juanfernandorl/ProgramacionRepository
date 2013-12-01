#include <iostream>

using namespace std;
/* se tiene que ingresar la nota del alumno y el programa debera de presentar la observacion
usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 Muy bueno
91-100 sobresaliente
*/

int main()
{ int nota;

    cout << "ingresar la nota del alumno..>";
    cin >> nota;

    if (nota<60)
    {
        cout<<"Reprobado"<<"\n";
    }
    else if (nota<81)
    {
        cout<<"Bueno"<<"\n";
    }
    else if (nota<91)
    {
        cout<<"Muy bueno"<<"\n";
    }
    else
    {
        cout<<"Sobresaliente"<<"\n";
    }
    return 0;
}
