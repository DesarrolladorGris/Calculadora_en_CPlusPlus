#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    cout << "Ingrese la operaci�n a realizar (+, -, *, /): ";
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
            cout << "Operaci�n no v�lida";
            return 0;
    }

    cout << "El resultado de la operaci�n es: " << resultado;

    return 0;
}

