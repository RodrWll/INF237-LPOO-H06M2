#include <iostream>

#define MAX 20

using namespace std;

void main() {
	int numeros[MAX], n, menor, posMenor, aux, numero1, numero2, numFibonacci;
	int cantFibonacci, indice;
	char palabra[MAX], auxLetra;

	cout << "Ingrese la cantidad de numeros de fibonacci a leer: ";
	cin >> n;

	/*Aqui leemos los numeros*/
	for (int i = 0; i < n; i++) {
		cin >> numeros[i];
	}

	/*Aqui leemos la palabra*/
	cin >> palabra;

	/*Ordenar el archivo de numeros y palabra*/
	/*Metodo de ordenamiento por seleccion*/
	for (int j = 0; j < n; j++) {
		menor = numeros[j];
		posMenor = j;
		for (int i = j+1; i < n; i++) {
			if (numeros[i] < menor) {
				posMenor = i;
				menor = numeros[i];
			}
		}
		/*Esto es para cambiar el arreglo de numeros*/
		aux = numeros[j];
		numeros[j] = numeros[posMenor];
		numeros[posMenor] = aux;
		/*Esto es para cambiar el arreglo de letras*/
		auxLetra = palabra[j];
		palabra[j] = palabra[posMenor];
		palabra[posMenor] = auxLetra;
	}
	/*Imprimir el arreglo de numeros*/
	for (int i = 0; i < n; i++) {
		cout << numeros[i] << " ";
	}
	cout << endl;
	/*Imprimir el arreglo de letras*/
	for (int i = 0; i < n; i++) {
		cout << palabra[i] << " ";
	}
	cout << endl;
	/*Vamos a imprimir de acuerdo a Fibonacci*/
	numero1 = 1;
	numero2 = 1; /*Este es el primero fibonacci*/
	numFibonacci = 1;
	cantFibonacci = 1;
	indice = 0;
	while (1) {
		if (numFibonacci == numeros[indice]) {
			cout << palabra[indice];
			indice++;
		}
		else {
			cout << " ";
		}
		numFibonacci = numero1 + numero2;
		numero1 = numero2;
		numero2 = numFibonacci;
		if (indice >= n) {
			break;
		}
	}
}