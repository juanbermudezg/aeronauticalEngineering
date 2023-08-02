#include <iostream>
using namespace std;

//punto 3

int main()
{
		int numero1, numero2, numero3, numero4, numero5;
    cout << "Ingrese 5 numeros por favor. Empiece por el primero: " << endl;
    cin >> numero1;
    cout << "Ahora el segundo numero" << endl;
    cin >> numero2;
    cout << "Ahora el tercer numero" << endl;
    cin >> numero3;
    cout << "Ahora el cuarto numero" << endl;
    cin >> numero4;
    cout << "Ahora el quinto numero" << endl;
    cin >> numero5;
   if (numero1>numero2 && numero1>numero3 && numero1>numero4 && numero1>numero5)
   {
      cout << "\nEl numero mayor es es el:"<<numero1;
      if (numero2<numero1 && numero2<numero3 && numero2<numero4 && numero2<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero2;
      }
      if (numero3<numero1 && numero3<numero2 && numero3<numero4 && numero3<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero3;
      }
      if (numero4<numero1 && numero4<numero2 && numero4<numero3 && numero4<numero5)
	  
      {
        cout << "\nEl numero menor es el:";
        cout << numero4;
      }
     if (numero5<numero1 && numero5<numero2 && numero5<numero4 && numero5<numero3)
      {
        cout << "\nEl numero menor es el:";
        cout << numero5;
      }
   }
   else if (numero2>numero1 && numero2>numero3 && numero2>numero4 && numero2>numero5)
   {
      cout << "\nEl numero mayor es es el:";
      cout << numero2;
      if (numero1<numero2 && numero1<numero3 && numero1<numero4 && numero1<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero1;
      }
      if (numero3<numero1 && numero3<numero2 && numero3<numero4 && numero3<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero3;
      }
      if (numero4<numero1 && numero4<numero2 && numero4<numero3 && numero4<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero4;
      }
     if (numero5<numero1 && numero5<numero2 && numero5<numero4 && numero5<numero3)
      {
        cout << "\nEl numero menor es el:";
        cout << numero5;
      }
   }
   else if (numero3>numero2 && numero3>numero1 && numero3>numero4 && numero3>numero5)
   {
      cout << "\nEl numero mayor es es el:";
      cout << numero3;
      if (numero2<numero1 && numero2<numero3 && numero2<numero4 && numero2<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero2;
      }
      if (numero1<numero3 && numero1<numero2 && numero1<numero4 && numero1<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero1;
      }
      if (numero4<numero1 && numero4<numero2 && numero4<numero3 && numero4<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero4;
      }
     if (numero5<numero1 && numero5<numero2 && numero5<numero4 && numero5<numero3)
      {
        cout << "\nEl numero menor es el:";
        cout << numero5;
      }
   }
   else if (numero4>numero2 && numero4>numero3 && numero4>numero1 && numero4>numero5)
   {
      cout << "\nEl numero mayor es es el:";
      cout << numero4;
      if (numero2<numero1 && numero2<numero3 && numero2<numero4 && numero2<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero2;
      }
      if (numero3<numero1 && numero3<numero2 && numero3<numero4 && numero3<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero3;
      }
      if (numero1<numero4 && numero1<numero2 && numero1<numero3 && numero1<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero1;
      }
     if (numero5<numero1 && numero5<numero2 && numero5<numero4 && numero5<numero3)
      {
        cout << "\nEl numero menor es el:";
        cout << numero5;
      }
   }
   else if (numero5>numero2 && numero5>numero3 && numero5>numero4 && numero5>numero1)
   {
      cout << "\nEl numero mayor es es el:";
      cout << numero5;
      if (numero2<numero1 && numero2<numero3 && numero2<numero4 && numero2<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero2;
      }
      if (numero3<numero1 && numero3<numero2 && numero3<numero4 && numero3<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero3;
      }
      if (numero4<numero1 && numero4<numero2 && numero4<numero3 && numero4<numero5)
      {
        cout << "\nEl numero menor es el:";
        cout << numero4;
      }
     if (numero1<numero5 && numero1<numero2 && numero1<numero4 && numero1<numero3)
      {
        cout << "\nEl numero menor es el:";
        cout << numero1;
      }
   }
   if (numero1==numero2 && numero1==numero3 && numero1==numero4 &&numero1==5)
	  {
   cout << "Todos los numeros son iguales"<<endl;
	  }

}
