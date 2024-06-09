/*
Arreglos:Secuencia de elementos del mismo tipo.
Los elementos del array se numeran consecutivamente 0, 1, 2, 3 ...
Declaracion de un array:  tipo nombreArray[numeroDeElementos];
Primer elemento de un arreglo tiene indice 0
Ultimo elemento de un arreglo tiene indice n-1
*/

#include <iostream>
using namespace std;
#define TAM 10

int main(int argc, char *argv[]) {

	//declaracion de un arreglo
	int numeros[10];
	int notas[TAM];
	float promedios[3];
	bool estados[3];
	char letras[4];
	
	//declaracion e inicialización de un arreglo
	int edades[]= {11,12,13,14,15};
	
	//accedemos a valores individuales de nuestro arreglo edades
	cout<<"El valor del primer elemento es : "<<edades[0]<<endl;
	cout<<"El valor del tercer elemento es: "<<edades[4]<<endl;
	
	return 0;
}
