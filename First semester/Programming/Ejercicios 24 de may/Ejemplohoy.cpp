//Juan Andrés Bermúdez Gómez

#include<iostream>
#include"funcionEjemplo.h"

using namespace std;

int main(){
	
int final;

do{
	
	char letra1, letra2, bletra, cletra;
	int desicion;
	
	
	cout <<"Bienvenido, ingrese 1 si quiere pasar de mayuscula a minuscula o 0 de minuscula a mayuscula: "<<endl;
	
	cin >>desicion;
	
	if (desicion==0){
		
		cout <<"Ingrese la letra que quiera pasar a mayuscula: "<<endl;
			
		cin>>letra1;
		
		bletra = funcionMinMay(letra1);
		
		cout <<bletra<<endl;
		
	}
	
	else if (desicion==1){
		
		cout <<"Ingrese la letra que quiera pasar a minuscula: "<<endl;
			
		cin>>letra2;
		
		bletra = funcionMayMin (letra2);
		
		cout<<bletra<<endl;
		
	}
	
	else {
		
		cout <<"Error al digitar."<<endl;
	}
	
	cout <<"Ingrese el numero 5 si quiere volver a usar el programa, de lo contrario presione 2: "<<endl;
	
	cin>>final;
	
	}while(final==5);

	cout<<"Gracias por usar el programa."<<endl;
	
}
