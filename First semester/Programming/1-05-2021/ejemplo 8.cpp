//Llenar un arreglo tipo entero de tamaño 9, unicamente con numeros impares y mostrarlo.

#include<iostream>

using namespace std;

int main(){
	
	int xd;
	
	do{
		
		int A[9], error=0;
		
		cout << "Oe amigo, digite solo numeros impares, 9 numeros pls"<<endl;
		
		for (int i=0; i<=8; i++){
			
			cout<<"Usuario, ingrese un valor impar N°"<<i+1<<endl;
			
			cin>>A[i];
			
			if (A[i]%2==0){
				
				error=error+1;
				
				cout <<"Senior pendejo, ingrese solo impares."<<endl;
				
				i--;
				
				if (error==3){
					
					cout<<"Devuelvase a primaria porque usted es muy pendejo, se cerró el programa."<<endl;
					
					return 0;
					
				}
				
			}
			
			else {
				
				error=0;
			}
		}
		
		cout <<"Gracias por ingresar bien los datos, ahora los verá: "<<endl;
		
		for (int i=0; i<=8; i++){
			
			cout<<"["<<A[i]<<"]"<<endl;
		}
		
	cout <<"Señor usuario, ¿quiere volver a ingresar numeros impares? Si es asi presione 1, de lo contrario presione 0"	<<endl;
	
	cin >> xd;
		
	}while(xd==1);
	
	cout << "Gracias por confiar en nosotros, hasta pronto."<<endl;
	
	return 0;
}
