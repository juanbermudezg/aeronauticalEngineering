#include<iostream>

//Programa piloto 

using namespace std;

int main() {

//Programa app if, else, if else. Pedirá tres numeros y mostrará el mayor

int number1, number2, number3;

cout<<"Escribe tres numeros enteros separados con un espacio para saber cual es mayor: "; cin>>number1>>number2>>number3;

if (number1==number2&&number2==number3){
	
	cout<<"\nLos numeros son iguales" <<number1;
}
else if (number1>number2&&number1>number3){
	
	cout<<"\nEl numero mayor es: " <<number1;
}
else if (number2>number1&&number2>number3){
	cout<<"\nEl numero mayor es: " <<number2;
}
else  {

	cout<<"\nEl numero mayor es: " <<number3;	

}
return 0;
}



