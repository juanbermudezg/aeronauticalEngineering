#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

//Programa que lea 10 numeros y los muestre

int main()

{

	int opcion;	
	
	do
	
	{
		int A[10];
		
		cout <<"Bienvenido al futuro, ingrese por favor 10 numeros enteros, thank you :3"<<endl;
		
		for (int i=0; i<=9; i++){
			
			cout <<"Ingrese el valor N°"<<i+1<<endl;
			
			cin >> A[i];
			
		}
		
		cout <<"Gracias por colabrorar con la causa XD, ahora aquí están sus valores: "<<endl;
		
		for (int i=0; i<=9; i++){
			
			cout<<"["<<A[i]<<"]"<<endl;
			
		}
		
		cout <<"¿Desea continuar con el programa? \nPresione 1 si es afirmativo, otro caracter si es negativo."<<endl;
		
		cin >>opcion;
		
	}
	
	while (opcion==1);
	
	return 0;
}
