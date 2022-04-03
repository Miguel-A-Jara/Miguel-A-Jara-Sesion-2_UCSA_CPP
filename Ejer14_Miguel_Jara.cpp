/*
Realizar un programa que resuelva la ecuacion de tipo sqrt(pow(cat1, 2) + pow(cat2, 2))
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float cat1, cat2, hip = 0;
    cout << "Ingrese el cateto numero 1: "; cin >> cat1;
    cout << "Ingrese el cateto numero 2: "; cin >> cat2;

    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout << "La hipotenusa es: " << hip;

    return 0;
}
