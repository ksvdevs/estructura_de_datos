#include <iostream>
using namespace std;
#define TAM 100 // Tama�o maxixmo del arreglo

int main(int argc, char *argv[])
{

	int num_notas, notas[TAM];
	int posInsert, valor;
	int posBorrar;

	// Ingresar datos en el arreglo
	cout << "Ingrese el n�mero de notas: ";
	cin >> num_notas;

	// Asegurar que el n�mero de notas no exceda el tama�o del arreglo
	if (num_notas > TAM)
	{
		cout << "El n�mero de notas excede el tama�o m�ximo permitido de " << TAM << endl;
		return 1; // Terminar el programa con un c�digo de error
	}

	for (int i = 0; i < num_notas; i++)
	{
		cout << "Ingrese el valor para la nota " << i + 1 << ": ";
		cin >> notas[i];
	}

	cout << "\nLas notas ingresadas fueron:" << endl;
	for (int i = 0; i < num_notas; i++)
	{
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}

	// Insertar un valor en una posici�n determinada
	cout << "Ingrese en qu� posici�n desea agregar una nota: ";
	cin >> posInsert;

	cout << "Ingrese nuevo valor para la nota: ";
	cin >> valor;

	// Mover elementos para hacer espacio para el nuevo
	for (int i = num_notas; i > posInsert; i--)
	{
		notas[i] = notas[i - 1];
	}
	notas[posInsert] = valor;
	num_notas++;

	cout << "\nLas notas despu�s de la inserci�n:" << endl;
	for (int i = 0; i < num_notas; i++)
	{
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}

	// Eliminar un elemento en una posici�n dada
	cout << "Ingrese la posici�n a eliminar: ";
	cin >> posBorrar;

	for (int i = posBorrar; i < num_notas - 1; i++)
	{
		notas[i] = notas[i + 1];
	}
	num_notas--;

	cout << "\nLas notas despu�s de eliminar:" << endl;
	for (int i = 0; i < num_notas; i++)
	{
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}

	return 0;
}
