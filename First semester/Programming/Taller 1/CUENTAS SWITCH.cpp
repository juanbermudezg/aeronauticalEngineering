#include<iostream>

//Programa piloto SWITCH

using namespace std;

int main() {

//Ingresa un numero del 1 al 5 y que cada numero muestre un nombre diferente solo se pone break aqui

int nombre;

cout<<"El numero de cuenta de Kevin es 1; el numero de cuenta de Juan es 2 y el numero de cuenta de Andres es 3,";
cout<<"\ningrese el numero de cuenta que desea ingresar: "; cin>>nombre;

switch (nombre){
	
	case 1 : cout<<"\nBienvenido a tu cuenta Kevin, haz hackeado la NASA"; break;
	case 2 : cout<<"\nBienvenido a tu cuenta Juan, haz hackeado ROSCOSMOS"; break;
	case 3 : cout<<"\nBienvenido a tu cuenta Andres, haz hackeado AEC"; break;

	
	default : cout<<"\nIntruso, cuenta no autorizada, vete a hackear Dragon City"; break;	
	
	
}
	
return 0;	
	
}
