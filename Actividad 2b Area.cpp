/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion prioritaria
{
    float base; // Variable para guardar el valor de la base
    float altura; // Variable para guardar el valor de la altura
    cout << "Programa para calcular el area de un triangulo" << endl; // Titulo
    cout << "Ingrese el valor de la base del triangulo:" << endl; // Pedirle al usuario que ponga el valor de la base
    cout << endl; // Separacion
    cin >> base; // Valor de la base guardado en la variable
    cout << endl;
    cout << "Ahora ingrese la altura del triangulo: " << endl;
    cout << endl;
    cin >> altura;
    float perimetro = base * altura / 2; // Operacion para calcular el area
    cout << endl; // Separacion
    cout << "El resultado del area es de: " << perimetro << endl; // Resultado expresado en pantalla
    cout << "Su procedimiento es: " << base << " * " << altura << " / " << "2"; // Procedimiento expresado en pantalla
    return 0;
}