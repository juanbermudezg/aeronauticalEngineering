//Escuela de Aviación del Ejército - Ingeniería Aeronáutica.
//Materia: Programación I.
//Nombre del estudiante: Juan Andrés Bermúdez Gómez.
//Identificación: T.I. 1.077.842.342
//Fecha: 29/03/2021
//Correo electrónico: juanbermudezgomez@cedoc.edu.co
//Programa número: 3

#include <iostream>											//Libreria a usar
#include <math.h>											//Segunda libreria a usar por si acaso
	
using namespace std;										//Para poder usar las funciones básicas

int main (){												//para declarar la funcion principal

float nota1, nota2, nota3, nota4, notafinal, fnota1, fnota2, fnota3, fnota4, tresprimerasnotas, notahab, notafinaltemp;

cout <<"Bienvenido al programa para calcular sus notas en Progamación I, por favor digite la primera nota, use decimales: " << endl;
cin >> nota1;
cout <<"Ahora la segunda nota: " << endl;
cin >> nota2;
cout <<"Ahora la tercera nota: " << endl;
cin >> nota3;
cout <<"Ahora la cuarta nota: " << endl;
cin >> nota4;

fnota1 = nota1 * 0.2;
fnota2 = nota2 * 0.2;
fnota3 = nota3 * 0.5;
fnota4 = nota4 * 0.1;
tresprimerasnotas = fnota1+fnota2+fnota3;
notafinaltemp = fnota1+fnota2+fnota3+fnota4;
if (tresprimerasnotas >3 && tresprimerasnotas < 3.4){						//esto es la primera condicion, para saber si saca su nota normal
	notafinal = fnota1+fnota2+fnota3+fnota4;
	cout << "Su nota final es de: "<< notafinal << endl;
	
	}	
else if (tresprimerasnotas > 3.5 && tresprimerasnotas < 3.9){			//esta condicion si se cumple es para saber si se saca 4.5
	notafinal = 4.5;
	cout << "Su nota final es de: " << notafinal << endl;
	}
else if (tresprimerasnotas > 4 && tresprimerasnotas < 5){				//esta condicion es para saber si saca 5
	notafinal = 5;
	cout << "Su nota final es de: " << notafinal << endl;
	}
else if (tresprimerasnotas >= 0 && tresprimerasnotas < 3){				//esta para ver si pierde la materia
	notafinal = notafinaltemp;
	cout << "Su nota final es de: " << notafinal << endl;
}
else if (notafinal > 2 && notafinal < 3){								//esta para ver si lo pasa raspando con nota de habilitacion
		cout <<"¿Cual es su nota de habilitación?: " << endl;
		cin >> notahab;
		if (notahab > 3.5){
			notafinal = 3;
			cout <<"Su nota final es de: " << notafinal << endl; 
		}
		else if (notahab <= 3.5){
			cout <<"Su nota final es de: " << notafinal << endl;
		}
		else{
			cout <<"Error en la digitación, por favor volver a intentar." << endl;
		}
	}
else{
	cout << "Error en la digitación, por favor revisar." << endl;
}
return 0;
}
