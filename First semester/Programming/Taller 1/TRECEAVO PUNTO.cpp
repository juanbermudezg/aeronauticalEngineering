#include<iostream>
#include<math.h>

//Programa treceavo punto

using namespace std;

int main() {
	
float dolares, pesos, conversion=2500;

cout<<"Ingrese la cantidad de dolares "; cin>>dolares;

pesos=dolares/conversion;

cout<<"El valor en pesos es de: "; 
cout<<pesos;

return 0;	
	
}
