#include <iostream>
using namespace std;

int main() {
	// Declaración de un arreglo
	int a[5];
	
	cout << "----------- Ingrese datos en el arreglo -----------" << endl;
	
	// Ingresar datos en el arreglo
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el valor para el elemento " << i + 1 << ": ";
		cin >> a[i];
	}
	
	cout << "Los datos ingresados fueron:" << endl;
	
	// Mostrar los datos del arreglo
	for (int i = 0; i < 5; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	
	return 0;
}

