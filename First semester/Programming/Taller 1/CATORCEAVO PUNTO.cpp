#include<iostream>
#include<math.h>

//Programa cartorceavo punto

using namespace std;

int main() {
	
double pi=3.1416, radio, area, perimetro, volumen;

cout<<"Ingrese el radio de la circunferencia "; cin>>radio;

perimetro=2*pi*radio;
area=pi*radio*radio;
volumen=(4*pi*radio*radio*radio)/3;

cout<<"El valor del perimetro es: "; 
cout<<perimetro;
cout<<"\nEl valor del area es: "; 
cout<<area;
cout<<"\nEl valor del volumen es: "; 
cout<<volumen;
return 0;	
}
