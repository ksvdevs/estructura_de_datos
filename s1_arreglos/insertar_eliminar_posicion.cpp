#include <iostream>
using namespace std;
#define TAM 100 //Tamaño maxixmo del arreglo

int main(int argc, char *argv[]) {
	
	int num_notas, notas[TAM];
	int posInsert, valor;
	int posBorrar;
	
	// Ingresar datos en el arreglo
	cout << "Ingrese el número de notas: ";
	cin >> num_notas;
	
	// Asegurar que el número de notas no exceda el tamaño del arreglo
	if (num_notas > TAM) {
		cout << "El número de notas excede el tamaño máximo permitido de " << TAM << endl;
		return 1;  // Terminar el programa con un código de error
	}
	
	for (int i = 0; i < num_notas; i++) {
		cout << "Ingrese el valor para la nota " << i + 1 << ": ";
		cin >> notas[i];
	}
	
	cout << "\nLas notas ingresadas fueron:" << endl;
	for (int i = 0; i < num_notas; i++) {
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}
	
	// Insertar un valor en una posición determinada
	cout << "Ingrese en qué posición desea agregar una nota: ";
	cin >> posInsert;
	
	cout << "Ingrese nuevo valor para la nota: ";
	cin >> valor;
	
	// Mover elementos para hacer espacio para el nuevo
	for (int i = num_notas; i > posInsert; i--) {
		notas[i] = notas[i - 1];
	}
	notas[posInsert] = valor;
	num_notas++;
	
	cout << "\nLas notas después de la inserción:" << endl;
	for (int i = 0; i < num_notas; i++) {
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}
	
	// Eliminar un elemento en una posición dada
	cout << "Ingrese la posición a eliminar: ";
	cin >> posBorrar;
	
	for (int i = posBorrar; i < num_notas - 1; i++) {
		notas[i] = notas[i + 1];
	}
	num_notas--;
	
	cout << "\nLas notas después de eliminar:" << endl;
	for (int i = 0; i < num_notas; i++) {
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}
	
	return 0;
}
