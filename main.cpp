#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion a realizar (+, -, *, /): ";
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
            cout << "Operacion no valida";
            return 0;
    }

    cout << "El resultado de la operacion es: " << resultado;

    return 0;
}

