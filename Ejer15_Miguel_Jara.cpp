/*9. Realice un programa que calcule el valor que toma la siguiente funcion
para unos valores dados de x e y.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float x, y, result = 0;

    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;


    result = (sqrt(x)) / (pow(y, 2) - 1);

    cout << "El resultado es: " << result << endl;

    return 0;
}
