/*1.Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene un mejor promedio y posteriormente imprimir los datos del alumno.*/
#include <iostream>
using namespace std;

struct Alumno {
	string nombre;
	int edad;
	float promedio;
};
int main(int argc, char *argv[]) {
	
	Alumno alumnos[3];
	float mejorPromedio = 0.0;
	int indiceMejorPromedio = -1;
	
	// Ingresar datos para 3 alumnos
	for (int i = 0; i < 3; ++i) {
		cout << "Ingrese los datos del alumno " << i+1 << ":" << endl;
		
		cout << "Nombre: ";
		cin >> alumnos[i].nombre;
		
		cout << "Edad: ";
		cin >> alumnos[i].edad;
		
		cout << "Promedio: ";
		cin >> alumnos[i].promedio;
		
		// Comprobamos si este alumno tiene el mejor promedio hasta ahora
		if (alumnos[i].promedio > mejorPromedio) {
			mejorPromedio = alumnos[i].promedio;
			indiceMejorPromedio = i;
		}
		
		cout << endl;
	}
	// Mostrar el alumno con el mejor promedio
	if (indiceMejorPromedio != -1) {
		cout << "El alumno con el mejor promedio es:" << endl;
		cout << "Nombre: " << alumnos[indiceMejorPromedio].nombre << endl;
		cout << "Edad: " << alumnos[indiceMejorPromedio].edad << endl;
		cout << "Promedio: " << alumnos[indiceMejorPromedio].promedio << endl;
	} else {
		cout << "No se ingresaron datos de alumnos." << endl;
	}
	
	return 0;
}

