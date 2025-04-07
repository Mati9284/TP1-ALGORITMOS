#include <iostream>
using namespace std;
int main ()
{
	float precio, cantidad, abonar;
	cout << "Este programa muestra el precio la cantidad y en base a eso lo que debe abonar" << endl;
	cout << "Ingrese precio del articulo" << endl;
	cin >> precio;
	cout << "Ingrese cantidad del articulo" << endl;
	cin >> cantidad;
	abonar=precio * cantidad;
	cout << "Debera abonar $" << abonar << " pesos" << endl;
	return 0;
}
