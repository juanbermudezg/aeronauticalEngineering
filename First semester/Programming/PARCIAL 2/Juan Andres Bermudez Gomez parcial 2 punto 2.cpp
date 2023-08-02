/*Realizar un programa que llene un arreglo del 4-100 y otro arreglo del 104-250,
 muestre en pantalla la sumatoria de los números pares del primer arreglo 
 y la sumatoria de los números impares del segundo arreglo. 
 (usar el arreglo para obtener la sumatoria)*/
 
#include <iostream>

using namespace std;

int main () {
	
	int final;
	
	do{
	
	int A[97], B[147], sumapares=0, sumaimpares=0, opcion, opcion2, opcion3, sumatotal;
	
	cout << "Bienvenido a este segundo programa del parcial #2 de Programacion I"<<endl<<"Hecho por Juan Andres Bermudez Gomez"<<endl<<"Estudiante de Ingenieria Aeronautica de la Escuela de Aviacion del Ejercito"<<endl<<"Siga las reglas y pues ya."<<endl;
	
	for (int i=0; i<=96; i=i+2){
		
		A[i]=i+4;
		
	}
	
	for (int j=1; j<=146; j=j+2){
		
		B[j]=104+j;
		
	}
	
	cout <<"Le mostrare la sumatoria de los numeros pares de 4 a 100 y los impares de 104 a 250, primero la sumatoria de pares: "<<endl;
	
	for (int k=0; k<=96; k=k+2){
		
		sumapares=sumapares+A[k];
		
	}
	
	cout<<sumapares<<endl;
	
	for (int l=1; l<=146; l=l+2){
		
		sumaimpares=sumaimpares+B[l];
		
	}
	
	cout<<"Y la suma de los impares es: " <<sumaimpares<<endl;
	
	cout <<"¿Quiere ver los numeros pares del primer arreglo? Si es afirmativo ingrese 5, de lo contrario ingrese cualquier otro numero: "<<endl;
	
	cin >> opcion;
	
	if (opcion==5){
		
		for (int m=0; m<=96; m=m+2){
			
			cout <<"["<<A[m]<<"] ";
			
		}
	} 
	
	cout <<endl<<"¿Quiere ver los numeros impares del segundo arreglo? Si es afirmativo ingrese 4, de lo contrario ingrese cualquier otro numero: "<<endl;
	
	cin >> opcion2;
	
	if (opcion2==4){
		
		for(int n=1; n<=146; n=n+2){
			
			cout <<"["<<B[n]<<"] ";
			
		}
		
	}
	
	cout <<endl<<"¿Quiere sumar los pares del primer arreglo y los impares del segundo arreglo? Si es afirmativo ingrese 3, de lo contrario cualquier otro numero: "<<endl;
	
	cin >>opcion3;
	
	if (opcion3==3){
		
		sumatotal = sumapares+sumaimpares;
		
		cout <<"La suma total es "<<sumatotal<<"."<<endl;
		
	}
	cout <<"¿Quiere volver a ejecutar el programa? Si es afirmativo digite 1, si no, cualquier otro numero: ";
	
	cin >> final;
	
}while(final==1);

cout <<"Gracias por usar nuestros servicios, nos vemos luego :)";

return 0;
}
