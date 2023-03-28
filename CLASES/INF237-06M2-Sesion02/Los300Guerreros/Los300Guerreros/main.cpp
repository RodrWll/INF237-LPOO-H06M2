#include <iostream>
#include <time.h>

#define N 20
#define M 20

using namespace std;

void imprimeMenu();
void crearEjercito(char tablero[N][M], int n, int m, char opcionJugador, int cantEspacios);
void imprimirEjercito(char tablero[N][M], int n, int m);
int calcularCantDisparos(char guerrero);
int verificarGano(char tablero[N][M], int n, int m, char jefe);

void main() {
	char tablero1[N][M], tablero2[N][M], guerrero;
	int n, m, opcion, cantEspacios, finJuego = 0, turno, jugador, jugar;
	int fila, columna, cantDisparos, disparoFila, disparoColumna, gano;
	char opcionJugador1, opcionJugador2, seCreoEjercitos=0;
	srand(time(NULL)); /*Esto se coloca solo una vez y sirve para generar la aleatoriedad*/
	while (1) {
		cout << "Ingrese las dimensiones del tablero que simular los ejercitos (N y M): ";
		cin >> n >> m;
		if ((n > 0 && m > 0) && (n<N && m<M)) {
			break;
		}
		else {
			cout << "Error debe volver a ingresar las dimensiones" << endl;
		}
	}
	while (!finJuego) {
		imprimeMenu();
		cout << "Ingrese opción: ";
		cin >> opcion;
		switch (opcion) {
			case 1: {
				cout << "Jugador 1 elija entre el Ejercito de Leonidas (L) o el Ejercito de Temistocles (T)." << endl;
				cout << "Ingrese su opción: ";
				cin >> opcionJugador1;
				cout << "Jugador 2 elija entre el Ejercito de Jerjes (J) o el Ejercito de Artemisa (Z)." << endl;
				cout << "Ingrese su opción: ";
				cin >> opcionJugador2;
				cantEspacios = (n * m) / 10;
				crearEjercito(tablero1, n, m, opcionJugador1, cantEspacios);
				crearEjercito(tablero2, n, m, opcionJugador2, cantEspacios);
				cout << "Los ejercitos han sido creados y cada uno tiene " << cantEspacios << " espacios vacios" << endl;
				seCreoEjercitos = 1;
				break;
			}
			case 2: {
				if (seCreoEjercitos) {
					turno = 1;
					jugar = 1;
					while (jugar) {
						jugador = turno % 2;
						if (jugador == 1) {
							cout << "Turno de Jugador 1, este es su ejercito " << endl;
							imprimirEjercito(tablero1, n, m);
						}
						else {
							cout << "Turno de Jugador 2, este es su ejercito " << endl;
							imprimirEjercito(tablero2, n, m);
						}
						cout << "Ingrese las posiciones del guerrero a seleccionar (fila, columna): ";
						cin >> fila >> columna;
						if (jugador == 1) {
							guerrero = tablero1[fila - 1][columna - 1];
						}
						else {
							guerrero = tablero2[fila - 1][columna - 1];
						}
						cantDisparos = calcularCantDisparos(guerrero);
						for (int i = 0; i < cantDisparos; i++) {
							cout << "Ingrese las posiciones del disparo a realizar (fila, columna): ";
							cin >> disparoFila >> disparoColumna;
							if (jugador == 1) {
								if (tablero2[disparoFila-1][disparoColumna-1] != ' ') {
									tablero2[disparoFila-1][disparoColumna-1] = 'X';
								}
							}
							else {
								if (tablero1[disparoFila-1][disparoColumna-1] != ' ') {
									tablero1[disparoFila-1][disparoColumna-1] = 'X';
								}
							}
						}
						if (jugador == 1) {
							gano = verificarGano(tablero2, n, m, opcionJugador2);
						}
						else {
							gano = verificarGano(tablero1, n, m, opcionJugador1);
						}
						if (gano) {
							cout << "El jefe del ejército contrario ha caído. Ud. Gana el Juego. " << endl;
							jugar = 0;
						}
						turno++;
					}
				}
				else {
					cout << "Primero debe crear los ejercitos antes de jugar" << endl;
				}
				break;
			}
			case 3: {
				finJuego = 1;
				break;
			}
			default: {
				cout << "Ingrese una opcion valida" << endl;
			}
		}
	}
}

void imprimeMenu() {
	cout << "Bienvenidos al juego de los 300 guerreros de LPOO" << endl;
	cout << "Las opciones son: " << endl;
	cout << "(1) Generar ejércitos" << endl;
	cout << "(2) Jugar" << endl;
	cout << "(3) Salir" << endl;
}

void crearEjercito(char tablero[N][M], int n, int m, char opcionJugador, int cantEspacios) {
	char guerrero1, guerrero2;
	int cantGuerreros, fila, columna, tipoGuerrero;
	/*Voy a limpiar o inicializar mi tablero para las dimensiones n y m*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tablero[i][j] = ' ';
		}
	}
	/*Voy a determinar los guerreros a utilizar en el tablero*/
	switch (opcionJugador) {
		case 'L': {
			guerrero1 = 'A';
			guerrero2 = 'B';
			break;
		}
		case 'T': {
			guerrero1 = 'C';
			guerrero2 = 'D';
			break;
		}
		case 'J': {
			guerrero1 = 'E';
			guerrero2 = 'F';
			break;
		}
		case 'Z': {
			guerrero1 = 'G';
			guerrero2 = 'H';
			break;
		}
	}
	cantGuerreros = n * m - cantEspacios - 1; /*Menos 1 por el Jefe*/
	/*Voy a colocar los guerreros y al jefe*/
	for (int i = 1; i <= cantGuerreros+1; i++) {
		/*Voy a generar las posiciones aleatorias donde voy a colocar al guerrero*/
		fila = rand() % n;
		columna = rand() % m;
		tipoGuerrero = rand() % 2;
		if (tablero[fila][columna] == ' ') {
			if (i <= cantGuerreros) {
				if (tipoGuerrero == 0) {
					tablero[fila][columna] = guerrero1;
				}
				else {
					tablero[fila][columna] = guerrero2;
				}
			}
			else {
				tablero[fila][columna] = opcionJugador;
			}
		}
		else {
			i--;
		}
	}
}

void imprimirEjercito(char tablero[N][M], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << tablero[i][j] << " ";
		}
		cout << endl;
	}
}

int calcularCantDisparos(char guerrero) {
	int cantDisparos;
	if (guerrero == 'A' || guerrero == 'C' || guerrero == 'E' || guerrero == 'G') {
		cantDisparos = 2;
	}
	else {
		cantDisparos = 1;
	}
	return cantDisparos;
}

int verificarGano(char tablero[N][M], int n, int m, char jefe) {
	int gano = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tablero[i][j] == jefe) {
				gano = 0;
			}
		}
	}
	return gano;
}