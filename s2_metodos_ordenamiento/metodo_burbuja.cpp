// Bubble Sort (Método Burbuja)
// Este algoritmo de ordenamiento es conceptualmente simple pero ineficiente para grandes conjuntos de datos.
// Presenta una complejidad temporal de O(n^2) en el peor y el caso medio, lo que lo hace lento comparado con algoritmos más avanzados.
// Realiza múltiples pasadas sobre el arreglo completo para ordenar los elementos, lo que resulta en un alto número de comparaciones y operaciones de intercambio (swaps).
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	int arreglo[] = {64, 34, 25, 12, 22, 11, 90};
	int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
	int i, j, aux;
	
	// Metodo burbuja mejorado
	for(i = 0; i < tamano; i++) {
		for(j = 0; j < tamano; j++) { 
			if (arreglo[j] > arreglo[j + 1]) { 
				aux = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = aux;
			}
		}
	}
	
	// Imprimir el arreglo ordenado en orden ascendente
	cout << "Ordenado Ascendente: ";
	for (i = 0; i < tamano; i++) {
		cout << arreglo[i] << " ";
	}
	cout << endl;
	
	return 0;
}