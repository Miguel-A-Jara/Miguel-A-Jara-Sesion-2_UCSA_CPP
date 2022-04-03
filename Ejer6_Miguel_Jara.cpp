/*
1. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>
using namespace std;

int main(){

int edad = 0;
char sexo[10];
double altura_en_metros = 0;

cout << "Programa para imprimir datos de una persona en pantalla." << endl;
cout << "Ingrese su edad: " << endl;
cin >> edad;

cout << "Ingrese su sexo M (masculino) o F (femenino): " << endl;
cin >> sexo;

cout << "Ingrese su altura en metros: " << endl;
cin >> altura_en_metros;

cout << "Los datos ingresados son: " << "Edad: " << edad << " Sexo: " << sexo << " Altura en metros: " << altura_en_metros << endl;

    return 0;
}
