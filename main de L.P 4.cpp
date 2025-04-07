#include <iostream>;
using namespace std;
int main ()
{
	float numero1, numero2, valortotal, division;
	cout << "Este programa calcula el area de un triangulo" << endl;
	cout << "Ingrese base del triangulo" << endl;
	cin >> numero1;
	cout << "Ingrese altura del triangulo" << endl;
	cin >> numero2;
	valortotal= numero1 * numero2;
	division= valortotal / 2;
	cout << "El area del triangulo es:" << division << endl;
	return 0;
}
