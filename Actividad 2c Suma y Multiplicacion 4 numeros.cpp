/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion prioritaria
{
    float numero1; // Variable para guardar el valor del 1er numero
    float numero2; // Variable para guardar el valor del 2do numero
    float numero3; // Variable para guardar el valor del 3er numero
    float numero4; // Variable para guardar el valor del 4to numero
    cout << "Calculadora medio rara que suma 2 numeros y multiplica otros 2" << endl; // Titulo
    cout << "Ingrese el primer numero:" << endl; // Pedirle el valor del primer numero
    cin >> numero1; // Valor del 1er numero guardado en la variable
    cout << endl; // Separacion
    cout << "Ahora ingrese el segundo numero: " << endl; // Pedirle el valor del segundo numero
    cin >> numero2; // Valor del 2do numero guardado en la variable
    cout << endl; // Separacion
    cout << "Ahora el tercer numero: " << endl; // Pedirle el valor del tercer numero
    cin >> numero3; // Valor del 3er numero guardado en variable
    cout << endl; // Separacion
    cout << "Y por ultimo el cuarto numero: " << endl; // Pedirle el valor del cuarto numero
    cin >> numero4; // Valor del 4to numero guardado en variable
    cout << endl; // Separacion
    float suma = numero1 + numero2; // Operacion para calcular la suma de los primeros numeros
    cout << endl; // Separacion
    float multiplicacion = numero3 * numero4; // Variable de multiplicacion de valor 1 y 2
    cout << "El resultado de la suma es de: " << suma << endl; // Resultado expresado en pantalla
    cout << "Su procedimiento es: " << numero1 << " + " << numero2 << endl; // Procedimiento expresado en pantalla
    cout << endl;
    cout << "El resultado de la multiplicacion es de: " << multiplicacion << endl; // Resultado expresado en pantalla
    cout << "Su procedimiento es: " << numero3 << " * " << numero4 << endl; // Procedimiento expresado en pantalla
    return 0;
}