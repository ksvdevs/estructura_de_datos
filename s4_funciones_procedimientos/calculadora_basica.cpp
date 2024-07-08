#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char operador;
	float num1, num2;

	cout << "Ingrese el primer n�mero: ";
	cin >> num1;

	cout << "Ingrese el operador (+, -, *, /): ";
	cin >> operador;

	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;

	switch (operador)
	{
	case '+':
		cout << "Resultado: " << (num1 + num2) << endl;
		break;
	case '-':
		cout << "Resultado: " << (num1 - num2) << endl;
		break;
	case '*':
		cout << "Resultado: " << (num1 * num2) << endl;
		break;
	case '/':
		if (num2 != 0)
		{
			cout << "Resultado: " << (num1 / num2) << endl;
		}
		else
		{
			cout << "Error: No se puede dividir por cero." << endl;
		}
		break;
	default:
		cout << "Operador no v�lido." << endl;
		break;
	}

	return 0;
}
