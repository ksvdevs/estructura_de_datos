#include <iostream>
using namespace std;
//prototipo de la funcion
int suma(int a, int b);

int main(int argc, char *argv[]) {
	
	int resultado = suma(4, 9);
	cout<<"La suma es: "<<resultado;
	return 0;
}

int suma(int a, int b) {
	return a + b;
}
