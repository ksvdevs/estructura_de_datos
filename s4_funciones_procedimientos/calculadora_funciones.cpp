#include <iostream>
using namespace std;

// Declaración de las funciones para las operaciones matemáticas
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main() {
	char operador;
	float num1, num2;
	
	cout << "Ingrese el primer número: ";
	cin >> num1;
	
	cout << "Ingrese el operador (+, -, *, /): ";
	cin >> operador;
	
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	switch (operador) {
	case '+':
		cout << "Resultado: " << suma(num1, num2) << endl;
		break;
	case '-':
		cout << "Resultado: " << resta(num1, num2) << endl;
		break;
	case '*':
		cout << "Resultado: " << multiplicacion(num1, num2) << endl;
		break;
	case '/':
		cout << "Resultado: " << division(num1, num2) << endl;
		break;
	default:
		cout << "Operador no válido." << endl;
		break;
	}
	
	return 0;
}

// Definición de las funciones para las operaciones matemáticas
float suma(float a, float b) {
	return a + b;
}

float resta(float a, float b) {
	return a - b;
}

float multiplicacion(float a, float b) {
	return a * b;
}

float division(float a, float b) {
	if (b != 0) {
		return a / b;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
		return 0;
	}
}

