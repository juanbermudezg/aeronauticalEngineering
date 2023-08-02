//Escuela de Aviación del Ejército - Ingeniería Aeronáutica.
//Materia: Programación.
//Nombre del estudiante: Juan Andrés Bermúdez Gómez.
//Identificación: T.I. 1.077.842.342
//Fecha: 29/03/2021
//Correo electrónico: juanbermudezgomez@cedoc.edu.co
//Programa número: 1

#include <iostream>											//Libreria a usar
#include <stdlib.h>											//Segunda libreria a usar por si acaso
	
using namespace std;										//Para poder usar las funciones básicas

int main (){												//Definimos la función principal
	
	int numero=0, nt, sm, sm1, sm2, sm3, sm4, smtotal, identificacion, nt2, nt3, nt4, numerotemporal1=0, numerotemporal2, numerotemporal3, numerotemporal4, id, id2, id3, id4, idtemp, idtemp2, idtemp3, idtemp4;													//Aqui declaramos las variables
	
	cout << "Por favor, señor usuario, ingrese un número de 6 cifras sin puntos, ni comas: " << endl;			//Aquí pedimos al usuario el número
	
	cin >> numero;																				//Aqui guardamos el numero en a variable

if (numero >= 100000 && numero < 1000000){			//esto es para verificar que solo sean de 6 cifras

	nt = (numero/10)*10;							//aqui lo que hacemos es aprovechar que se usan enteros para
	numerotemporal1 = numero - nt;					//eliminar los digitos, usando resta y para posterior averiguar
													//como hackear la NASA o ROSCOSMOS profe, jajaja, mentiras
	nt2 = (numero/100)*100;							//se hizo igual con el numero de identificacion
	numerotemporal2 = (numero - nt2)/10;
	
	nt3 = (numero/1000)*1000;
	numerotemporal3 = (numero - nt3)/100;
	
	nt4= (numero/10000)*10000;
	numerotemporal4 = (numero - nt4)/1000;
	
	cout << "Ingrese por favor su identificación sin puntos, ni comas, por favor: " << endl;
	cin >> identificacion;
	
	if (identificacion >= 100000){
	
	id = (identificacion/10)*10;
	idtemp = identificacion - id;
	
	id2 = (identificacion/100)*100;
	idtemp2 = (identificacion - id2)/10;
	
	id3 = (identificacion/1000)*1000;
	idtemp3 = (identificacion - id3)/100;
	
	id4= (identificacion/10000)*10000;
	idtemp4 = (identificacion - id4)/1000;
	
	sm = numerotemporal1 + idtemp;						//aqui se suman los numeros para luego una gran suma dando el resultado
	sm2 = numerotemporal2 + idtemp2;
	sm3 = numerotemporal3 + idtemp3;
	sm4 = numerotemporal4 + idtemp4;
	
	smtotal = sm + sm2 + sm3 + sm4;
	
	cout <<"El numero total siguiendo las indicaciones del profesor es de: " << smtotal << endl;
	}
	else {
	cout <<"La identificacion debe tener por lo menos 6 digitos o error en la digitación; por favor intentar otra vez." << endl;
	}
	}
else {
	cout <<"Error en la digitación. Por favor intentar nuevamente." << endl;
	}
return 0;	
}

