/*
Declaracion de una estructura

struct <nombre_estructura> {
<tipo_dato> <nombre_campo>;
<tipo_dato> <nombre_campo>;
<tipo_dato> <nombre_campo>;
..
<tipo_dato> <nombre_campo>;
};*/

#include <iostream>
using namespace std;

struct Estudiante {
	char nombre[20];
	int edad;
	float promedio;
};

int main(int argc, char *argv[]) {
	struct Estudiante estudiante1;
	
	cout<<"Digite su nombre: ";
	cin.getline(estudiante1.nombre,20,'\n');
	cout<<"Digite la edad: ";
	cin>>estudiante1.edad;
	cout<<"Digite su promedio: ";
	cin>>estudiante1.promedio;
	
	cout<<"\nMostrar datos del usuario"<<endl;
	cout <<"Nombre:" <<estudiante1.nombre << endl;
	cout <<"Edad:" <<estudiante1.edad << endl;
	cout <<"Promedio:" <<estudiante1.promedio << endl;
	
	return 0;
}
