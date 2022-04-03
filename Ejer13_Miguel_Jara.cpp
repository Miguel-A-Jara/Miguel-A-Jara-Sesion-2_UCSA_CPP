/*7. La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa
que lea de la entrada estándar las tres notas de un alumno y escriba en la salida
 estandar su nota final */

 #include <iostream>
 using namespace std;

 int main(){

    double practicas = 0.30, teorica = 0.60, participacion = 0.10;
    int nota1, nota2, nota3;
    float nota_final;

    cout << "Ingrese la nota del aspecto 'Practicas': ";     cin >> nota1;
    cout << "Ingrese la nota del aspecto 'Teorica': ";       cin >> nota2;
    cout << "Ingrese la nota del aspecto 'Participacion': "; cin >> nota3;


    nota_final = ((nota1 * practicas) + (nota2 * teorica) + (nota3 * participacion));


    cout << "La nota final es: " << nota_final;
    return 0;
 }
