#include <iostream>

using namespace std;

int main ()
{
int numero;

cout << "Digite un numero entero para hackear la NASA :v" <<endl;
cin >> numero;

if (numero % 2==0){
	cout <<"El numero es par."<<endl;
}
else {
	cout << "El numero es impar." <<endl;
}
if (numero>0){
	cout<<"El numero es mayor que 0."<<endl;
}
else {
	cout<<"El numero no es mayor que 0."<<endl;
}
if (numero % 3==0){
	cout<<"El numero es divisible entre 3"<<endl;
}
else {
	cout <<"El numero no es divisible entre tres"<<endl;
}
if (numero % 3==0 || numero % 5==0){
	cout <<"El numero es divisible entre 3 o 5."<<endl;
}
else {
	cout <<"El numero no es divisible entre 3 o 5."<<endl;
}
if (numero % 3==0 && numero % 5==0){
	cout <<"El numero es divisible entre 3 y 5."<<endl;
}
else {
	cout <<"El numero no es divisible entre 3 y 5."<<endl;
}
}
