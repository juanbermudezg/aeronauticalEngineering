#include<iostream>

//Programa quinceavo punto

using namespace std;

int main() {
	
int dias, horas, minutos, diass, horass, minutoss, segundos;

cout<<"\n Ingresa el numero de dias: "; cin>>dias;

cout<<"\n Ingresa el numero de horas: "; cin>>horas;

cout<<"\n Ingresa el numero de minutos: "; cin>>minutos;

diass=dias*86400;

horass=horas*3600;

minutoss=minutos*60;

segundos=diass+horass+minutoss;

cout<<"\n El numero total de segundos es:  " <<segundos;
	
	
	
	
	
	
	
	
return 0;	
	
}
