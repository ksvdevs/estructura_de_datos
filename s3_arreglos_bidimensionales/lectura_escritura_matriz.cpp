//Rellenar una matriz de 3x3 elementos
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int m[3][2];
	
	cout<<"Ingrese datos en la matriz de 3x2"<<endl;
	
	//Ingresar datos en la matriz
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout << "Digite un numero[" << i << "]["<<j<<"] = ";
			cin >> m[i][j];
		}
	}
	
	cout << "Los datos ingresados fueron:" << endl;
	// Mostrar los datos de la matriz
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout << m[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}

