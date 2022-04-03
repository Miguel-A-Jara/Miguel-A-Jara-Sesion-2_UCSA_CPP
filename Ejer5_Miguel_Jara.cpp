/*
2.Escribe un programa que lea de la entrada estándar el
precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.
*/

#include <iostream>
using namespace std;

int main(){
    float product_price = 0, final_price = 0;


    cout << "Programa para calcular el precio de un producto al aplicar el IVA" << endl;
    cout << "Ingrese el valor de un producto: Gs. "; cin >> product_price;

    final_price = product_price + product_price * 0.05;

    cout << "El precio del producto con IVA es: \n Gs." << final_price;

    return 0;
}
