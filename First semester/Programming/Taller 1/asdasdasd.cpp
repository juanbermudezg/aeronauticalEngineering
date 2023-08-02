#include<iostream>

//Programa piloto SWITCH

using namespace std;

int main() {

//Ingresa un numero del 1 al 5 y que cada numero muestre un nombre diferente

int nombre;

cout<<"Ingrese un numero del 1 al 5: "; cin>>nombre;

switch (nombre){
	
	case 1 : cout<<"El nombre es Juan"; break;
	case 2 : cout<<"El nombre es Kevin"; break;
	case 3 : cout<<"El nombre es Andres"; break;
	case 4 : cout<<"El nombre es Bermudez"; break;
	case 5 : cout<<"El nombre es Gomez"; break;
	
	default : cout<<"DIJE QUE DE 1 AL 5 >:V"; break;	
	
	
}
	
return 0;	
	
}
