#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Operación no válida";
            return 0;
    }

    cout << "El resultado de la operación es: " << resultado;

    return 0;
}

