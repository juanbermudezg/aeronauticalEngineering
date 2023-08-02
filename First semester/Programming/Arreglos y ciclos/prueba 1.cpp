#include<iostream>
using namespace std;
int main(){
	
	int A[8], JFK, MIA;
	
	for(int i=0;i<=7;i++){
		
		cout<<"Ingrese el dato No. "<<i+1<<":"<<endl;
		cin>>A[i];
		
	}
	for(int i=0;i<=7;i++){
		for(JFK=i+1;JFK<=7;JFK++){
			
			if(A[i]<=A[JFK]){
				
				MIA=A[i];
				A[i]=A[JFK];
				A[JFK]=MIA;		
			}	
		}	
	}
	cout<<"Arreglo ordenado de mayor a menor: "<<endl;;
	for(int i=0;i<=7;i++){
		
		cout<<A[i]<<",";	
	}
	cout <<"\nEl numero menor es: " << A[7]<<endl;;
	cout<<"Arreglo ordenado de menor a mayor: "<<endl;
		for(int i=7;i>=0;i--){
		
		cout<<A[i]<<",";	
	}
	cout << "\nEl numero mayor es: " << A[0]<<endl;;
	return 0;
}

