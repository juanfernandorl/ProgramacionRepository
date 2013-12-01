#include <iostream>

using namespace std;
/*
Elaborar un programa donde se declare la siguiente estructura
Nombre, Horas, hn, he, pn,pe, pb, ihss y tp.

Se tiene que elaborar un procedimiento para ingresar los datos
al registro, luego debemos de calcular las hn,he,pn,pe,ihss y tp
en un ptocedimiento. ( Horas normales son las primeras 40 ).
Se tiene que elaborar una funcion para determinar el seguro social
donde se ingrese el pago bruto que es parte de la estructura y
nos devuelva el

emplex.ihss=seguro(emplex.pb
Luego presentar los datos usando un procedimiento
*/

int seguro(int pb)
{
    if (pb>7000)
                    return 245;
    else
        return 0.035 * pb;
}

struct
{
    char nombre[30];
    int horas,hn,he,pn,pe,pb,ihss,tp;
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
