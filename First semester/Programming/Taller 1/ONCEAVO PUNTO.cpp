#include<iostream>
#include<math.h>

//Programa onceavo punto

using namespace std;

int main() {
	
float precionormal, descuento, preciodescuento;

cout<<"Ingrese el precio del producto: "; cin>>precionormal;

cout<<"Ingrese el valor del descuento (ejemplo si es 30%, ponga 30): "; cin>>descuento;

preciodescuento=precionormal-(precionormal*(descuento/100));

cout<<"El valor del producto con descuento es de: "; 
cout<<preciodescuento;

return 0;	
	
}
