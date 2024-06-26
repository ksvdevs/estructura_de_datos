//Desarrollar un programa que cree una matriz segun las dimensiones (filas y columnas) que indique el usuario. 
//El programa pedira los valores para llenar la matriz y, una vez completada imprimira la matriz en pantalla.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero[100][100], filas, columnas;
	
	cout<<"Ingrese el numeros de filas = ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas = ";
	cin>>columnas;
	//Ingresar datos en la matriz
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]= ";
			cin>>numero[i][j];
		}
	}
	cout<<"Los datos ingresados en la matriz fueron: "<<endl;
	//Imprimir matriz
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numero[i][j] <<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

