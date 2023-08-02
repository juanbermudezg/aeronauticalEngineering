#include <iostream>
using namespace std;
/*punto 2
Compiler version g++ 6.3.0
Realizar un programa que lea tres números y determine si estos números son diferentes
entre sí.*/
int main()
{
  int numero1, numero2, numero3;
    cout << "Ingrese 3 numeros por favor. Empiece por el primero: " << endl;
    cin >> numero1;
    cout << "Ahora el segundo numero" << endl;
    cin >> numero2;
    cout << "Ahora el tercer numero" << endl;
    cin >> numero3;
   
   if (numero1!=numero2 && numero1!=numero3){
     
      cout << "Los tres numeros no son iguales entre si." << endl;
  
         }
  else
  
     cout << "Los numeros son iguales entre si." << endl;
}
