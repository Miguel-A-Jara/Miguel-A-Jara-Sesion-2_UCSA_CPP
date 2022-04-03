/*
1. Escribe un programa que lea de la entrada estándar dos números
y muestre en la salida estándar su suma, resta, multiplicación y división.
*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, sum = 0, rest = 0, mult = 0, div = 0;


	cout<<"Digite un numero: "; 	cin>>n1;
	cout<<"Digite otro numero: ";	cin>>n2;

	sum  = n1 + n2;
	rest = n1 - n2;
	mult = n1 * n2;
	div  = n1 / n2;

	cout<<"\nLa suma es: "			<<sum <<endl;
	cout<<"\nLa resta es: "			<<rest<<endl;
	cout<<"\nLa multiplicacion es: "<<mult<<endl;
	cout<<"\nLa division es: "		<<div <<endl;

	return 0;
}

//Miguel A. Jara
