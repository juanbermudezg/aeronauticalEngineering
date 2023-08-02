#include<iostream>
using namespace std;

int main ()
{
	int A[8], i, posicion;
	
	for (i=0; i<=7; i++)
	{
		posicion = i+1;
		cout << "Ingrese el dato No." << posicion << ": " <<endl;
		cin >> A[i];
	}
	cout << "[";
/*	for (i=0; i<=7; i++)
	{
	cout <<A[i]<<" ";
*/

}
	cout << "]";
}

