/*
	Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
	nota1, nota2, nota3 y otra estructura llamada Alumno que tendra los siguientes
	campos: nombre, sexo, edad, hacer que la estructura promedio este anidada en
	la estructura Alumno, luego pedir todos los datos para un Alumno,Calcular
	su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/
#include <iostream>
using namespace std;

struct Promedio
{
	int nota1;
	int nota2;
	int nota3;
};

struct Alumno
{
	char nombre[40];
	char sexo[10];
	int edad;
	struct Promedio prom;
};

int main()
{
	struct Alumno alumno1;
	float promedio = 0.0;

	cout << "Ingrese su nombre: ";
	cin.getline(alumno1.nombre, 20, '\n');
	cout << "Ingrese su sexo: ";
	cin.getline(alumno1.sexo, 10, '\n');
	cout << "Ingrese su edad: ";
	cin >> alumno1.edad;
	cout << "Ingrese la primera nota: ";
	cin >> alumno1.prom.nota1;
	cout << "Ingrese la segunda nota: ";
	cin >> alumno1.prom.nota2;
	cout << "Ingrese la tercera nota: ";
	cin >> alumno1.prom.nota3;

	promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3.0;

	cout << "\nDatos del Alumno" << endl;
	cout << "Nombre: " << alumno1.nombre << endl;
	cout << "Sexo: " << alumno1.sexo << endl;
	cout << "Edad: " << alumno1.edad << endl;
	cout << "Promedio: " << promedio << endl;

	return 0;
}
