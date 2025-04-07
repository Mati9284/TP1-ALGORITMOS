#include <iostream>
using namespace std;
int main ()
{
	float numero1, numero2, numero3, numero4, resultado1, resultado2;
	cout << "Este programa suma 4 numeros y los promedia" << endl;
	cout << "Ingrese primer numero" << endl;
	cin >> numero1;
	cout << "Ingrese segundo numero" << endl;
	cin >> numero2;
	cout << "Ingrese tercero numero" << endl;
	cin >> numero3;
	cout << "Ingrese cuarto numero" << endl;
	cin >> numero4;
	resultado1= numero1 + numero2 + numero3 + numero4;
	resultado2= resultado1 / 4;
	cout << "El resultado de la suma es: " << resultado1 << " El resultado del promedio es:" << resultado2 << endl;
	return 0;
}
