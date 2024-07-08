/*
	2.Realizar un programa que lea en un arreglo de estructuras los datos de N
	empleados de la empresa y que imprima los datos del empleado con mayor y
	menor salario.
*/

#include <iostream>
using namespace std;

struct Empleado
{
	char nombre[20];
	float salario;
};

int main(int argc, char *argv[])
{

	struct Empleado empleados[50];
	int cantidad_empleados;
	float salario_menor = 0.0;
	float salario_mayor = 0.0;
	int indice_mayor = -1;
	int indice_menor = -1;

	cout << "Ingrese la cantidad de empleados: ";
	cin >> cantidad_empleados;
	for (int i = 0; i < cantidad_empleados; i++)
	{
		fflush(stdin); // Limpiar el buffer de entrada -> cin.ignore() cumple la misma funcion que fflush(stdin);
		cout << "Ingrese los datos para el empleado " << i + 1 << endl;
		cout << "Nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Salario: ";
		cin >> empleados[i].salario;

		if (empleados[i].salario > salario_mayor)
		{
			salario_mayor = empleados[i].salario;
			indice_mayor = i;
		}
		if (empleados[i].salario <= empleados[0].salario)
		{
			salario_menor = empleados[i].salario;
			indice_menor = i;
		}
	}
	// Imprimir datos de empleados con mayor y menor salario
	cout << "\nDatos del empleado con mayor salario" << endl;
	if (indice_mayor != -1)
	{
		cout << "Nombre: " << empleados[indice_mayor].nombre << endl;
		cout << "Salario: " << empleados[indice_mayor].salario << endl;
	}
	cout << "\nDatos del empleado con menor salario" << endl;
	if (indice_menor != -1)
	{
		cout << "Nombre: " << empleados[indice_menor].nombre << endl;
		cout << "Salario: " << empleados[indice_menor].salario;
	}
	return 0;
}
