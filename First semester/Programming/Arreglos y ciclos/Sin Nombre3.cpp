#include <iostream>

using namespace std;

int main()
{
	int A[8], i, memoria;
	
	for (i=0; i<=7; i++){
		cout << "Ingrese el dato No." << i + 1 << ": " <<endl;
		cin >> A[i];
	}
	memory=A(0);
	if (memory > A(1)){
		if (memory > (2)){
			if (memory > A(3)){
				if (memory > A(4)){
					if (memory > A(5)){
						if (memory > A(6)){
							if (memory > A(7){
								if (memory > A(8)){
									cout << "El numero mayor es: "<< memory;
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		memory = A(1)
		
	}
}
