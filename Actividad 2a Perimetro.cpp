/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion prioritaria
{
    float lado; // Variable para guardar el valor del lado
    cout << "Programa para calcular perimetro de un cuadrado" << endl; // Titulo
    cout << "Ingrese el valor de un lado del cuadrado:" << endl; // Pedirle al usuario que ponga el valor del lado
    cout << endl; // Separacion
    cin >> lado; // Valor del lado guardado en la variable
    float perimero = lado * 4; // Operacion para calcular el perimetro
    cout << endl; // Separacion
    cout << "El resultado del perimetro es de: " << perimero << endl; // Resultado expresado en pantalla
    cout << "Su procedimiento es: " << lado << " * " << "4 "; // Procedimiento expresado en pantalla
    return 0;
}