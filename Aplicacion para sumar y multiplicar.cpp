#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	int numero1; // Varible Numero 2
	int numero2; // Variable Numero 2
	cout << "Este programa suma y mutiplica 2 numeros enteros. " << endl; //salida de datos (<<)
	cout << endl; // Separacion
	cout << "Ingrese el primer numeros entero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	cout << "Ingrese el segundo numero entero:" << endl; // Entrada del segundo numero
	cin >> numero2; // Datos guardado de numero
	int resultado = numero1 + numero2; // Resultado en variable
	int resultado1 = numero1 * numero2; // Resultado en variable
	cout << endl; // Separacion
	cout << "Procedimiento de la suma: " << numero1 << " + " << numero2 << " = " << resultado << endl; // Procedimiento
	cout << "El resultado de la suma es " << resultado << endl; // Resultado
	cout << endl; // Separacion
	cout << "Procedimiento de la multiplicacion: " << numero1 << " + " << numero2 << " = " << resultado1 << endl; // Procedimiento
	cout << "El resultado de la multiplicacion es " << resultado1; // Resultado
	return 0;
}
