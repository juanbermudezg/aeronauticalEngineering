//Hacer un programa que llene en un arreglo los datos del 1-50 y otro arreglo del 51 al 100.

#include <iostream>

using namespace std;

int main (){
	
	int opcion;
	
	do
	
	{
		
		int NYC[50], MEX[50];
		
		cout << "Bienvenido al grandioso programa creado el 2 de mayo d... Por favor espere."<<endl;
		
		for (int i=0; i<=49; i++){
			
			NYC[i]=1+i;
			
		}
		
		for (int j=0; j<=49; j++){
			
			MEX[j]=51+j;
			
		}
		
		cout << "Ahora le mostraré dos arreglos con numeros del 1 al 50 y del 51 al 100"<<endl;
		
		for (int k=0; k<=49; k++){
			
			cout<<"["<<NYC[k]<<"]"<<endl;
			
		}
		
		for (int l=0; l<=49; l++){
			
			cout<<"{"<<MEX[l]<<"}"<<endl;
		
		}
		
		cout<<"Eso es todo amigos, bep, bep. Si desea ver el programa de nuevo, digite la raiz de 144:"<<endl;
		
		cin>>opcion;
		
	}
	
	while (opcion==12);	
	
	cout << "Gracias por usar nuestros servicios, adios y toma awua"<<endl;
	
	return 0;
	
}
