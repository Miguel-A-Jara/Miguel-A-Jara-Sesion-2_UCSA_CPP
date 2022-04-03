/*Escriba un programa que lea la nota final
de cuatro alumnos y calcule la nota final media
de los cuatros alumnos*/

#include <iostream>
using namespace std;

int main(){
    int not1, not2, not3, not4, media_nota;

    cout << "Ingrese la nota del prim alumno: "; cin >> not1;
    cout << "Ingrese la nota del segu alumno: "; cin >> not2;
    cout << "Ingrese la nota del terc alumno: "; cin >> not3;
    cout << "Ingrese la nota del cuar alumno: "; cin >> not4;

    media_nota = ((not1 + not2 + not3 + not4) / 4);

    cout << "La nota final es: " << media_nota;

    return 0;
}
