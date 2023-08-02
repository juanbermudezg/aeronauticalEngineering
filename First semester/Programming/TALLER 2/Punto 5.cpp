#include <iostream>
//punto 5
using namespace std;

int main ()
{
	float numero1, numero2, numero3, numero4, numero5, promedio;
	cout << "Ingrese 5 numeros reales, empiece por el primero: " << endl;
	cin >> numero1;
	cout << "Ahora el segundo: " << endl;
	cin >> numero2;	
	cout << "Ahora el tercero: " << endl;
	cin >> numero3;	
	cout << "Ahora el cuarto: " << endl;
	cin >> numero4;
	cout << "Ahora el quinto: " << endl;
	cin >> numero5;	
promedio= (numero1+numero2+numero3+numero4+numero5)/5;
	cout << "El promedio de los numeros es: " << endl;
	cout << promedio;
}
