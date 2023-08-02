#include<iostream>
using namespace std;

int main ()
{
	int A[8], i, posicion, cp=0, ci=0, j=0;
	
for (i=0; i<=7; i++)
	{
		posicion = i+1;
		cout << "Ingrese el dato No." << posicion << ": " <<endl;
		cin >> A[i];
	}
for (j=0; j<=7; j++)
	{
		if (A[j]%2==0){		
		cp = cp+1;
	}
		else
	{
		ci = ci+1;
	}
}
for (i=0; i<=7; i++)
	{
	cout <<A[i];
}
cout <<" Esto es los numeros ingresados" << endl;

cout <<cp<<" Esta es la cantidad de pares" << endl;

cout << ci << " Esta es la cantidad de impares" << endl;

}
