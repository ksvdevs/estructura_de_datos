/*Recursividad
	Factorial de un numero: 4! = 4*3*2*1 = 4*3!
	0! = 1
	factorial(n) = 1
	n*factorial(n-1)

*/
#include <iostream>
using namespace std;
//Declaramos el prototipo de la funcion
int factorial(int);

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Ingresa un numero:";
	cin>>numero;
	cout<<factorial(5);
	
	return 0;
}

int factorial(int n){
	if(n==0){ //caso base
		n=1;
	}else { 
		n=n*factorial(n-1); //caso general
	}
	return n;
}