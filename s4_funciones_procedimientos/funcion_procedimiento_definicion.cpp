/*
Funcion Sintaxis: 
	tipo_de_dato nombre_funcion(parametro){
		procesos
		return valor;
	}
Procedimiento Sintaxis: 
	void nombre_procedimiento(parametro){
		procesos
	}
*/
#include <iostream>
using namespace std;

//definimos los prototipos
int suma(int a, int b);
void imprimeResultado(double resultado);

int main(int argc, char *argv[]) {
	int  numero1, numero2, resultado;
	cout<<"Ingrese el valor del primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>numero2;
	resultado=numero1+numero2;
	cout<<"La suma es: "<<resultado;
	
	return 0;
}

int suma(int a, int b) {
	return a + b;
}

void imprimeResultado(double resultado) {
	cout<<"El resultado es: "<<resultado<<endl;
}
