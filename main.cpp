#include <iostream>


//directiva de preprocesador que se utiliza para incluir
//la biblioteca de cadenas de caracteres de C++. String es una biblioteca estandar de c++
#include <string>

//declaración de espacio de nombres que indica que el programa utilizará
//los nombres definidos en el espacio de nombres "std"
using namespace std;

int main() {
    // Ejemplo de tipos de datos en C++

    // Tipos numéricos
    int entero = 10;
    float flotante = 3.14;
    double doble = 2.71828;

    // Tipo booleano
    bool booleano = true;

    // Tipo caracter
    char caracter = 'a';

    // Tipo cadena de caracteres
    string cadena = "Hola mundo!";

    // Mostramos los valores en consola
    cout << "Valor entero: " << entero << endl;
    cout << "Valor flotante: " << flotante << endl;
    cout << "Valor doble: " << doble << endl;
    cout << "Valor booleano: " << booleano << endl;
    cout << "Valor caracter: " << caracter << endl;
    cout << "Valor cadena: " << cadena << endl;

    return 0;
}
