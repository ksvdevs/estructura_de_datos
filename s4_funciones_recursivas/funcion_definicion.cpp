/*
Funcion Sintaxis: 
	tipo_de_dato nombre_funcion(parametros){
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
// Prototipo de función
int suma(int a, int b);

// Prototipo del procedimiento
void imprimeResultado(double resultado);

int main(int argc, char *argv[]) {
	
	int resultado = suma(4, 9);
	imprimeResultado(resultado); 
	return 0;
}

int suma(int a, int b) {
	return a + b;
}

void imprimeResultado(double resultado) {
	cout<<"El resultado es: "<<resultado<<endl;
}
