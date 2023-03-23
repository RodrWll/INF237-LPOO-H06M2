/*Inclusion de librerias*/
#include <iostream>

/*Inclusion de espacios de nombres*/
using namespace std;

/*Prototipos de funciones*/


/*Funcion main*/
void main() {
	int numero, resultado, numero2;
	/*Escritura de datos o mensajes*/
	cout << "Ingrese un numero: ";
	/*Lectura de datos*/
	cin >> numero;  /*El valor de numero es 0*/
	cin >> numero2;  /*El valor de numero2 es 5*/
	resultado = (numero2 > 10) || ++numero;

	cout << "Numero: " << numero << endl; /*1*/
	cout << "Numero2: " << numero2 << endl; /*5*/
	cout << "Resultado: " << resultado; /*1*/
}