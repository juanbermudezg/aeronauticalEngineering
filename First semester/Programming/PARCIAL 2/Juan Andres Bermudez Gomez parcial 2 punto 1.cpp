/*Realizar un programa que llene un arreglo del 1 al 1000 números,
 después sume del los números múltiplos de N y que terminen en N "directamente del arreglo".
  Mostrar resultado.*/

#include <iostream>

using namespace std;

int main (){
	
	int salida;
	
	do
	
	{
		
		int Z[1000], sumamultiplos=0, identificacion, ID[20], mayor=0, contador=0, M[1000], desicion2, desicion3, A[1000], desicion4, sumaterminantes=0;
		
		int sumatotal, desicion5, desicion; 
		
		//Mi tarjeta de indentidad es 1077842342, el ultimo numero mayor o igual a 4 es 4, pero vamos a hacerlo en el programa:
		
		cout << "Bienvenido al programa creado por Juan Andres Bermudez Gomez, estudiante de Ingenieria Aeronautica"<<endl<<"en la Escuela de Aviacion del Ejercito, este programa es para el parcial de"<<endl<<"Programacion I dirigido por el docente Pedro Melo. Gracias y siga las reglas."<<endl;
				
		//ahora utilizamos un for para llenar ese arreglo de identificacion
		
		int error;		
		
		do { //este es por si error cometemos un error al digitar la id
		
		cout <<"Por favor digite la cantidad de numeros que tiene su identificacion: "; //esto lo hacemos porque todas las identificaciones son diferentes en cantidad de numeros
		
		cin >> identificacion;
		 
		for (int i=0; i<identificacion; i++){
			
			cout << "Ingrese el valor No."<<i+1<<": "<<endl;
			
			cin >> ID[i];
		}
		
		//ahora usamos otro for para saber el ultimo valor mayor o igual a 4 de la identificacion
			
		for (int j=0; j<identificacion; j++){
			
			if (ID[j]>=4){
				
				mayor = ID[j]; //aqui es para llenar los numeros de la id
				
			}
			
			else {
				
				if (ID[j]>mayor){
					
					mayor=ID[j];
					
				}
				
			}

		}
					
		if (mayor < 4){
				
			cout << "Su cedula no tiene numeros mayores o iguales a 4; por lo cual se tomara el mayor numero."<<endl; //esto es porque puede llegar el caso que una id no tenga numeros mayores o iguales que 4
				
		}
		
		cout <<"Si se ha equivocado en digitar su identidad, digite 5, si no, digite cualquier otro numero"<<endl; //aqui dejamos que elija para que vuela a digitar la id
		
		cin >> error;
		
	}while (error==5);
		
		cout << "El ultimo numero mayor o igual a 4 de su identificacion es "<<mayor<<", por lo tanto lo tomaremos como numero N, ahora la computadora"<< endl <<"esta calculando numeros del 1 al 1000, ¿desea verlos? Digite 1 si es asi, del caso contrario presione cualquier otro numero: "<<endl;
		
		cin >> 	desicion; //aqui le decimos si quiere ver los numeros del 1 al 1000
		
		for (int k=0; k<=999; k++){
			
			Z[k] = k+1;
			
		}
		
		if (desicion == 1){
			
			cout << "Ok, lo lamento por la ram de su computadora, ok no, aqui estan los numeros del 1 al 1000: "<<endl;
			
			for (int l=0; l<=999; l++){
				
				cout << "["<<Z[l]<<"]"<<endl;
				
			}
		}
		
		cout << "Ok, ahora le mostrare los multiplos de "<<mayor<<" que hay entre 1 al 1000, si no quiere verlos digite cualquer numero, de lo contrario digite 2: ";
		
		cin >> desicion2; //aqui le dejamos elegir si quiere ver los multiplos entre 1 al 1000
		
		for (int m=mayor; m<=999; m=m+mayor){
			
			M[m]=m;
			
			sumamultiplos=sumamultiplos+M[m];

			}
		
		if (desicion2==2){
			
			for (int a=mayor; a<=999; a=a+mayor){
				
				cout<<"["<<M[a]<<"]"<<endl;
				
			}
		}
			
		cout << "Ahora la computadora encontrara los numeros que terminan en "<<mayor<<", si desea verlos presione 3, de lo contrario digite cualquer otro numero: ";
		
		cin >> desicion3; //aqui si quiere ver los numeros terminados en el numero mayor o igual a 4
		
		for (int p=mayor; p<=999; p=p+10){
			
		A[p]=p;	
		
		sumaterminantes=sumaterminantes+A[p];		
			
		}
		
		if (desicion3==3){
			
			for (int p=mayor; p<=999; p=p+10){
			
			A[p]=p;
			
			sumaterminantes=sumaterminantes+A[p];
			
			cout <<"["<<A[p]<<"]"<<endl;				
				
		}
			
		}
		
		cout <<"Ya casi terminamos, ahora sumare los multiplos de "<<mayor<<" y los que terminen en ese mismo numero, si quiere verlos, digite 1, de lo contrario cualquier otro numero: "<<endl;
		
		cin >> desicion4; //aqui le decirmos si quiere ver la suma de los multiplos y numeros por separado
		
		if (desicion4==1){
			
			cout<<"La suma de los multiplos es "<<sumamultiplos<<"."<<endl<<" Y la suma de los numeros terminados en "<<mayor<<" es "<<sumaterminantes<<"."<<endl<<"Si desea sumar estas dos cantidades presione 5, si no presione cualquier otro numero"<<endl;
			
			cin >> desicion5; //aqui para que vea la suma total
			
			if (desicion5==5){
				
				sumatotal=sumaterminantes+sumamultiplos;
				
				cout <<sumatotal<<endl;
				
			}
		}
		
		cout <<"Gracias por usar el programa, si desea volver a usarlo digite 1, de lo contrario digite cualquier otro numero: "; cin>>salida; //aqui damos gracias y dejamos la opcion para repetir el programa
			
} while(salida==1);

cout <<"Gracias por usar nuestros servicios, profe coloqueme 5, ok no, solo si me lo merezco XD, presione enter para salir.";//despedida ya ultima

return 0;

}



