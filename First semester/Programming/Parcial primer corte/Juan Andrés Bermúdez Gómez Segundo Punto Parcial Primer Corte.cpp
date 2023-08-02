//Escuela de Aviación del Ejército - Ingeniería Aeronáutica.
//Materia: Programación I.
//Nombre del estudiante: Juan Andrés Bermúdez Gómez.
//Identificación: T.I. 1.077.842.342
//Fecha: 29/03/2021
//Correo electrónico: juanbermudezgomez@cedoc.edu.co
//Programa número: 2

#include <iostream>											//Libreria a usar
#include <math.h>											//Segunda libreria a usar por si acaso
	
using namespace std;										//Para poder usar las funciones básicas

int main (){												//para declarar la funcion principal

double apotema, lado3, respuesta, lado4, lado5, lado6, lado7, lado8, lado9, lado10, lado, radiomenor, radiomayor, lado2, base, altura, profundidad, radio, perimetro, area, volumen, numero, numero2, pi=3.141592653589, diagonalmayor, diagonalmenor, basemayor, basemenor;
	//las de arriba son todas las variables a usar
cout << "Eliga con entre los numeros 1, 2 ó 3 según sea el caso: " << endl;
cout << "(1) Para hallar areas." << endl;
cout << "(2) Para hallar perimetros." << endl;
cout << "(3) Para hallar volumenes." << endl;
cin >> numero;

if (numero==1){						//condicional si el usuario quiere averiguar areas
	cout << "Ahora elija entre los numeros 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 según sea el caso: " << endl;
	cout << "(1) Para los cuadrilateros." << endl;
	cout << "(2) Para los triangulos." << endl;
	cout << "(3) Para el circulo." << endl;
	cout << "(4) Para el rombo." << endl;
	cout << "(5) Para el romboide." << endl;
	cout << "(6) Para el trapecio." << endl;
	cout << "(7) Para el pentagono regular." << endl;
	cout << "(8) Para el hexagono regular." << endl;
	cout << "(9) Para el heptagono regular." << endl;
	cout << "(10) Para el octogono regular." << endl;
	cout << "(11) Para el eneagono regular." << endl;
	cout << "(12) Para el decagono regular." << endl;
	cout << "(13) Para el ovalo." << endl;
	cout << "(14) Para el semicirculo." << endl;
	cin >> numero2;
	//los condicionales que siguen abajo son para que el usuario elija la figura que quiera
	if (numero2==1){
		cout << "Ingrese el valor del primer lado: " << endl;
		cin >> lado;
		cout << "Ahora ingrese el valor del segundo lado: " << endl;
		cin >> lado2;
		area = lado*lado2;
		cout << "El area del cuadrilatero es: " << area << endl;
		}
	else if (numero2==2){
		cout <<"Ingrese el valor de la base del triangulo: " << endl;
		cin >> base;
		cout <<"Ahora ingrese el valor de la altura: " << endl;
		cin >> altura;
		area = (base*altura)/2;
		cout << "El area del triangulo es: " << area << endl;
		}
	else if (numero2==3){
		cout <<"Ingrese el valor del radio del circulo: " << endl;
		cin >> radio;
		area = pi*radio*radio;
		cout << "El area del circulo es de: " << area << endl;
		}
 	else if (numero2==4){
		cout <<"Ingrese el valor de la diagonal mayor: " << endl;
		cin >> diagonalmayor;
		cout <<"Ingrese el valor de la diagonal menor: " << endl;
		cin >> diagonalmenor;
		area = (diagonalmayor*diagonalmenor)/2;
		cout << "El area del rombo es de: " << area << endl;	
		} 
	else if (numero2==5){
		cout <<"Ingrese el valor de la base: " << endl;
		cin >> base;
		cout <<"Ingrese el valor de la altura" << endl;
		cin >> altura;
		area = base*altura;
		cout << "El area del romboide es de: " << area << endl;
		}
	else if (numero2==6){
		cout <<"Ingrese el valor la base mayor del trapecio: " << endl;
		cin >> basemayor;
		cout <<"Ingrese el valor de la base menor del trapecio: " << endl;
		cin >> basemenor;
		cout <<"Ingrese el valor de la altura del trapecio: " << endl;
		cin >> altura;
		area = ((basemayor+basemenor)*altura)/2;
		cout << "El area del trapecio es de: " << area << endl;
		}
	else if (numero2==7){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (5*lado*apotema)/2;
		cout << "El area del pentagono es de: " << area << endl;
		}
	else if (numero2==8){
		cout <<"Ingrse el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (6*lado*apotema)/2;
		cout << "El valor del area del hexagono es de: " << area << endl;
		}
	else if (numero2==9){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (7*lado*apotema)/2;
		cout << "El valor del area del heptagono es de: " << area << endl;
		}
	else if (numero2==10){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (8*lado*apotema)/2;
		cout << "El area del octogono es de: " << area << endl;
		}
	else if (numero2==11){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (9*lado*apotema)/2;
		cout << "El valor del area del enagono es de: " << area << endl;
		}
	else if (numero2==12){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		area = (10*lado*apotema)/2;
		cout << "El valor del area del decagono es de: " << area << endl;
		}
	else if (numero2==13){
		cout <<"Ingrese el valor del radio menor: " << endl;
		cin >> radiomenor;
		cout <<"Ingrese el valor del radio mayor: " << endl;
		cin >> radiomayor;
		area = radiomenor*radiomayor*pi;
		cout << "El valor del area del ovalo es de: " << area << endl;
		}
	else if (numero2==14){
		cout <<"Ingrese el valor del radio del semicirculo: " << endl;
		cin >> radio;
		area = (pi*radio*radio)/2;
		cout << "El area del semicirculo es de: " << area << endl;
		}
	else {
	cout << "Error en la digitación, por favor intentar de nuevo." << endl;
}
	}	
else if (numero==2){						//condicional si el usuario quiere averiguar perimetros
	cout << "Ahora elija entre los numeros 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 según sea el caso: " << endl;
	cout << "(1) Para los cuadrilateros." << endl;
	cout << "(2) Para los triangulos." << endl;
	cout << "(3) Para el circulo." << endl;
	cout << "(4) Para el rombo." << endl;
	cout << "(5) Para el romboide." << endl;
	cout << "(6) Para el trapecio." << endl;
	cout << "(7) Para el pentagono." << endl;
	cout << "(8) Para el hexagono." << endl;
	cout << "(9) Para el heptagono." << endl;
	cout << "(10) Para el octogono." << endl;
	cout << "(11) Para el eneagono." << endl;
	cout << "(12) Para el decagono." << endl;
	cout << "(13) Para el ovalo." << endl;
	cout << "(14) Para el semicirculo." << endl;
	cin >> numero2;
	//los condicionales de aqui abajo son para que el usuario elija la figura que quiera
	if (numero2==1){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 4*lado;
			cout << "El valor del perimetro del cuadrilatero es de: " << perimetro << endl;
						}
		else{
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			perimetro = lado+lado2+lado3+lado4;
			cout << "El perimetro del cuadrilatero es de: " << perimetro << endl;
			}
		}
	else if (numero2==2){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 3*lado;
			cout << "El valor del perimetro del triangulo es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			perimetro = lado+lado2+lado3;
			cout << "El perimetro del triangulo es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}
	else if (numero2==3){
		cout <<"Ingrese es el valor del radio: " << endl;
		cin >> radio;
		perimetro = 2*pi*radio;
		cout << "El perimetro del circulo es de: " << perimetro << endl;
		}
	else if (numero2==4){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 4*lado;
			cout << "El valor del perimetro del rombo es de: " << perimetro << endl;
			}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			perimetro = lado+lado2+lado3+lado4;
			cout << "El valor del perimetro del rombo es de: " << perimetro << endl;
			}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}
	else if (numero2==5){
		cout <<"Ingrese el valor del lado menor: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor del lado mayor: " << endl;
		cin >> lado2;
		perimetro = (lado*2)+(lado2*2);
		cout << "El perimetro del romboide es de: " << perimetro << endl;
		}
	else if (numero2==6){
		cout <<"Ingrese el valor del primer lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor del segundo lado: " << endl;
		cin >> lado2;
		cout <<"Ingrese el valor del tercer lado: " <<endl;
		cin >> lado3;
		cout <<"Ingrese el valor del cuarto lado: " <<endl;
		cin >> lado4;
		perimetro = lado+lado2+lado3+lado4;
		cout << "El perimetro del trapecio es de: " << perimetro << endl;
		}
	else if (numero2==7){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 5*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			perimetro = lado+lado2+lado3+lado4+lado5;
			cout << "El perimetro del pentagono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}	
		}
	else if (numero2==8){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 6*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			cout <<"Ingrese el valor del sexto lado: " << endl;
			cin >> lado6;
			perimetro = lado+lado2+lado3+lado4+lado5+lado6;
			cout << "El perimetro del hexagono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}	
	else if (numero2==9){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 7*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			cout <<"Ingrese el valor del sexto lado: " << endl;
			cin >> lado6;
			cout <<"Ingrese el valor del septimo lado: " << endl;
			cin >> lado7;
			perimetro = lado+lado2+lado3+lado4+lado5+lado6+lado7;
			cout << "El perimetro del heptagono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}
	else if (numero2==10){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 8*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			cout <<"Ingrese el valor del sexto lado: " << endl;
			cin >> lado6;
			cout <<"Ingrese el valor del septimo lado: " << endl;
			cin >> lado7;
			cout <<"Ingrese el valor del octavo lado: " << endl;
			cin >> lado8;
			perimetro = lado+lado2+lado3+lado4+lado5+lado6+lado7+lado8;
			cout << "El perimetro del octogono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}
	else if (numero2==11){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 9*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			cout <<"Ingrese el valor del sexto lado: " << endl;
			cin >> lado6;
			cout <<"Ingrese el valor del septimo lado: " << endl;
			cin >> lado7;
			cout <<"Ingrese el valor del octavo lado: " << endl;
			cin >> lado8;
			cout << "Ingrese el valor del noveno lado: " << endl;
			cin >> lado9;
			perimetro = lado+lado2+lado3+lado4+lado5+lado6+lado7+lado8+lado9;
			cout << "El perimetro del eneagono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
		}
	else if (numero2==12){
		cout <<"¿El valor de los lados son iguales? Responda 1 si es afirmativa, o 0 si es negativa." << endl;
		cin >> respuesta;
		if (respuesta==1){
			cout <<"Ingrese el valor del lado: " << endl;
			cin >> lado;
			perimetro = 10*lado;
			cout << "El valor del perimetro del pentagono es de: " << perimetro << endl;
					}
		else if (respuesta==0){
			cout <<"Ingrese el valor del primer lado: " << endl;
			cin >> lado;
			cout <<"Ingrese el valor del segundo lado: " << endl;
			cin >> lado2;
			cout <<"Ingrese el valor del tercer lado: " << endl;
			cin >> lado3;
			cout <<"Ingrese el valor del cuarto lado: " << endl;
			cin >> lado4;
			cout <<"Ingrese el valor del quinto lado: " << endl;
			cin >> lado5;
			cout <<"Ingrese el valor del sexto lado: " << endl;
			cin >> lado6;
			cout <<"Ingrese el valor del septimo lado: " << endl;
			cin >> lado7;
			cout <<"Ingrese el valor del octavo lado: " << endl;
			cin >> lado8;
			cout <<"Ingrese el valor del noveno lado: " << endl;
			cin >> lado9;
			cout <<"Ingrese el valor del decimo lado: " << endl;
			cin >> lado10;
			perimetro = lado+lado2+lado3+lado4+lado5+lado6+lado7+lado8+lado9+lado10;
			cout << "El perimetro del decagono es de: " << perimetro << endl;
					}
		else {
			cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}

		}
	else if (numero2==13){
		cout <<"Ingrese el valor del radio mayor: " << endl;
		cin >> radiomayor;
		cout <<"Ingrese el valor del radio menor: " << endl;
		cin >> radiomenor;
		perimetro = (2*pi)*sqrt(((radiomenor*radiomenor)+(radiomayor*radiomayor))/2);
		cout << "El perimetro del ovalo es de: " << perimetro << endl;
		}
	else if (numero2==14){
		cout <<"Ingrese es el valor del radio: " << endl;
		cin >> radio;
		perimetro = (2*pi*radio)/2;
		cout << "El perimetro del semicirculo es de: " << perimetro << endl;
		}
	else {
	cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}	
	}
else if (numero==3){						//condicional si el usuario quiere averiguar volumenes
	cout << "Ahora elija entre los numeros 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16," << endl;
	cout << "17, 18, 19, 20, 21, 22, 23 o 24 según sea el caso: " << endl;
	cout << "(1) Para los cubos." << endl;
	cout << "(2) Para los paralepidedos." << endl;
	cout << "(3) Para la piramide triangular regular." << endl;
	cout << "(4) Para la piramide rectangular regular." << endl;
	cout << "(5) Para la piramide pentagonal regular." << endl;
	cout << "(6) Para la piramide hexagonal regular." << endl;
	cout << "(7) Para la piramide heptagonal regular." << endl;
	cout << "(8) Para la piramide octogonal regular." << endl;
	cout << "(9) Para la piramide eneagonal regular." << endl;
	cout << "(10) Para la piramide decagonal regular." << endl;
	cout << "(11) Para el prisma triangular regular." << endl;
	cout << "(12) Para el prisma pentagonal regular." << endl;
	cout << "(13) Para el prisma hexagonal regular." << endl;
	cout << "(14) Para el prisma heptagonal regular." << endl;
	cout << "(15) Para el prisma octogonal regular." << endl;
	cout << "(16) Para el prisma eneagonal regular." << endl;
	cout << "(17) Para el prisma decagonal regular." << endl;
	cout << "(18) Para el esfera." << endl;
	cout << "(19) Para el cilindro." << endl;
	cout << "(20) Para el cono." << endl;
	cout << "(21) Para el tronco de cono" << endl;
	cout << "(22) Para la semiesfera." << endl;
	cin >> numero2;	
	//los condicionales de aqui abajo son para que el usuario elija la figura que quiera
	if (numero2==1){
		cout <<"Ingrese el valor de un lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		cout <<"Ingrese el valor de la profundidad: " << endl;
		cin >> profundidad;
		volumen = lado*altura*profundidad;
		cout << "El valor del volumen del cubo es de: " << volumen << endl;
		}
	else if (numero2==2){
		cout <<"Ingrese el valor del ancho: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		cout <<"Ingrese el valor de la profundidad: " << endl;
		cin >> profundidad;
		volumen = lado*altura*profundidad;
		cout << "El valor del volumen del paralepipedo es de: " << volumen << endl;
		}
	else if (numero2==3){
		cout <<"Ingrese el valor de la base: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		cout <<"Ingrese el valor de la profundidad: " << endl;
		cin >> profundidad;
		volumen = (lado*altura*profundidad)/6;
		cout << "El volumen de la piramide triangular es de: " << volumen << endl;
		}
	else if (numero2==4){
		cout <<"Ingrese el valor de la base: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la profundidad: " << endl;
		cin >> profundidad;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*profundidad*altura)/3;
		cout << "El volumen de la piramide cuadrada es de: " << volumen << endl;
		}
	else if (numero2==5){
	cout <<"Ingrese el valor del lado: " << endl;
	cin >> lado;
	cout <<"Ingrese el valor de la apotema de la base: " << endl;
	cin >> apotema;
	cout <<"Ingrese el valor de la altura: " << endl;
	cin >> altura;
	volumen = ((lado*5)*apotema*altura)/6;
	cout << "El valor de volumen de la piramide pentagonal regular es de: " << volumen << endl;
		}
	else if (numero2==6){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*6)*apotema*altura)/6;
		cout << "El valor del volumen de una piramide hexagonal regular: " << volumen << endl;
		}
	else if (numero2==7){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*7)*apotema*altura)/6;
		cout << "El valor de la piramide heptagonal regular es de: " << volumen << endl;
		}
	else if (numero2==8){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*8)*apotema*altura)/6;
		cout <<"El valor del volumen de la piramide octogonal es de: " << volumen << endl;
		}
	else if (numero2==9){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*9)*altura*apotema)/6;
		cout << "El valor del volumen de una piramide eneagonal es de: " << volumen << endl;
		}
	else if (numero2==10){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*10)*altura*apotema)/6;
		cout << "El valor del volumen de una piramide decagonal es de: " << volumen << endl;
		}
	else if (numero2==11){
		cout <<"Ingrese el valor del base: " << endl;
		cin >> lado;
		cout <<"Ingrese el lado de la altura: " << endl;
		cin >> altura;
		cout <<"Ingrese el valor de la profundidad: " << endl;
		cin >> profundidad;
		volumen = ((base*altura)/2)*profundidad;
		cout << "El valor del volumen de un prisma triangular es de: " << volumen << endl;
		}
	else if (numero2==12){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = ((lado*5)*apotema)/2;
		cout << "El valor del volumen de un prisma pentagonal es de: " << volumen << endl;
		}
	else if (numero2==13){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*6*apotema*altura)/2;
		cout << "El valor del volumen de un prisma hexagonal regular es de: " << volumen << endl;
		}
	else if (numero2==14){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*7*altura*apotema)/2;
		cout << "El valor del volumen de un prisma heptegonal regular es de: " << volumen << endl;
		}
	else if (numero2==15){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*8*altura*apotema)/2;
		cout << "El valor del volumen de un prisma octogonal regular es de: " << volumen << endl;
		}
	else if (numero2==16){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*9*altura*apotema)/2;
		cout << "El valor del volumen de un prisma eneagonal es de: " << volumen << endl;
		}
	else if (numero2==17){
		cout <<"Ingrese el valor del lado: " << endl;
		cin >> lado;
		cout <<"Ingrese el valor de la apotema: " << endl;
		cin >> apotema;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (lado*10*apotema*altura)/2;
		}
	else if (numero2==18){
		cout <<"Ingrese el valor del radio: " << endl;
		cin >> radio;
		volumen = 4/3*pi*radio*radio*radio;
		cout << "El volumen de una esfera es de: " << volumen << endl;
		}
	else if (numero2==19){
		cout <<"Ingrese el valor del radio: " << endl;
		cin >> radio;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = pi*radio*radio*altura;
		cout <<"El volumen del cilindro es de: " << volumen << endl;
		}
	else if (numero2==20){
		cout <<"Ingrese el valor del radio: " << endl;
		cin >> radio;
		cout <<"Ingrese el valor de la altura: " << endl;
		cin >> altura;
		volumen = (pi*radio*radio*altura)/3;
		cout <<"El volumen del cono es de: " << volumen << endl;
		}
	else if (numero2==21){
		cout <<"Ingrese el valor del radio mayor: " << endl;
		cin >> radiomayor;
		cout <<"Ingrese el valor del radio menor: " << endl;
		cin >> radiomenor;
		cout <<"Ingrese el valor de la altura: " << endl;
		volumen = (altura*pi)/3*((radiomayor*radiomayor)+(radiomenor*radiomenor)+(radiomayor*radiomenor));
		cout << "El valor del volumen de un tronco de cono es de: " << volumen << endl;
		}
	else if (numero2==22){
		cout <<"Ingrese el valor del radio: " << endl;
		cin >> radio;
		volumen = 4/6*pi*radio*radio*radio;
		cout << "El volumen de una semiesfera es de: " << volumen << endl;
		}	
	else {
	cout << "Error en la digitación, por favor intentar de nuevo." << endl;
		}
}
else {								//en caso de mala digitación
	cout << "Error en la digitación, por favor intentar de nuevo." << endl;
	}		
cout <<"Creado por Juan Andrés Bermúdez Gómez a las 19:30 horas del dia 29 de marzo de 2021." << endl;
return 0;							//para decir que el programa ya ha terminado
}	
