#include <iostream>

using namespace std;
//punto 4
int main ()
{
	char letra1, letra2, letra3;
	
	cout << "Ingrese por favor tres letras, empiece por la primera letra: " <<endl;
	cin >> letra1;
	
	cout << "Ahora por la segunda letra: " <<endl;
	cin >> letra2;
	
	cout << "Ahora por la tercera letra: " <<endl;
	cin >> letra3;

	if (letra1==letra2 && letra1==letra3){
		cout << "Las tres letras son iguales." <<endl;
	}
	else{
	if (letra1==letra2){
		cout << "La letra {" <<letra1<<"} (primera letra), es igual a la letra {" << letra2 <<"} (segunda letra)" <<endl;
	}
	if (letra1==letra3){
		cout << "La letra {" <<letra1<<"} (primera letra), es igual a la letra {" << letra3 <<"} (tercera letra)" <<endl;
	}
	if (letra2==letra3){
		cout << "La letra {" <<letra2<<"} (segunda letra), es igual a la letra {" << letra3 <<"} (tercera letra)" <<endl;
	}

}

}
