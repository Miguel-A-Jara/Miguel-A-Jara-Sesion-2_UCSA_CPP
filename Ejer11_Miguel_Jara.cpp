/*5. Escriba un fragmento de programa que intercambie
los valores de dos variables.*/

#include <iostream>
using namespace std;

int main(){
    int x, y, aux;

    cout << "Ingrese el valor de x:"; cin >> x;
    cout << "Ingrese el valor de y:"; cin >> y;

    cout << "Las variables eran: x=" << x << " e y=" << y << endl;
    aux = x;
    x = y;
    y = aux;

    cout << "Las variables son: x=" << x << " e y=" << y << endl;


    return 0;
}
