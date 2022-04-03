/*Escriba un programa que calcule las soluciones de una ecuación de segundo
grado de la forma ax^2 + bx + c = 0*/

#include <iostream>
#include <cmath>
using namespace std;

float pos_sec_grade_form(float a, float b, float c){
    return (-b + sqrt(pow(b, 2) -4 * a * c))/(2 * a);
}

float neg_sec_grade_form(float a, float b, float c){
    return (-b - sqrt(pow(b, 2) -4 * a * c))/(2 * a);
}

int main(){

    float a, b, c;

    cout << "Introduzca el valor de a: "; cin >> a;
    cout << "Introduzca el valor de b: "; cin >> b;
    cout << "Introduzca el valor de c: "; cin >> c;


    cout << "El resultado es: " << pos_sec_grade_form(a, b, c) << " o " << neg_sec_grade_form(a, b, c);


    return 0;
}
