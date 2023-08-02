//Juan Andrés Bermúdez Gómez

#include<iostream>
#include"funcionEjemplo.h"

using namespace std;

int main(){
	
	int final;
	
	do{
		
		int numero, par, numerototal;
		
		cout<<"Bienvenido al programa."<<endl;
		
		cout <<"Ingrese el numero: "<<endl;
			
		cin >>numero;
			
		numerototal=funcionNumeroParImpar(numero);
		
		if (numerototal==1){
			
			cout <<"Su numero es par."<<endl;
				
		}
		else if (numerototal==2){
			
			cout <<"Su numero es impar."<<endl;
			
		}
		
		cout<<"Si quiere volver a usar el programa presione 1, de lo contrario presione 2."<<endl;
		
		cin>>final;
		
		}while(final==1);
		
		cout << "Gracias por usar el programa.";
		
	}
