// Sesion02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
const int MAX_LENGTH = 30;
const int ROW_COUNT = 2;
const int COL_COUNT = 3;

void sort(int array[MAX_LENGTH], int ini, int end);
void sort_word(char array[MAX_LENGTH], int ini, int end);

void addition(int mat1[ROW_COUNT][COL_COUNT], int mat2[ROW_COUNT][COL_COUNT], int mat_res[ROW_COUNT][COL_COUNT]);
void show_matrix(int mat_res[ROW_COUNT][COL_COUNT]);
bool is_palindrom(char word[MAX_LENGTH]);

int main()
{
    int array[MAX_LENGTH] = {7,2,9,1,4,8,3,6};
    char word[MAX_LENGTH] = {'o','s','a','b','a','b','o','s','o'};

    if (is_palindrom(word))
    {
        cout << "Es palindromo";
    }
    else {
        cout << "No es palindromo";
    }

    int matrix1[ROW_COUNT][COL_COUNT] = {   {1 , 3, 9}, 
                                            {5 , 2, 4} 
                                        };

    int matrix2[ROW_COUNT][COL_COUNT] = {   {2 , 4, 6},
                                            {3 , 7, 5}
                                        };

    int mat_res[ROW_COUNT][COL_COUNT];
    addition(matrix1, matrix2, mat_res);
    show_matrix(mat_res);

    int ini=0, end = MAX_LENGTH - 1;
    
    cout << "Ingrese el índice de inicio y el índice final:\n";
    cin >> ini;
    cin >> end;
    
    sort(array, ini, end);
    sort_word(word, ini, end);

    for (int i = ini; i <= end; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
    for (int i = ini; i <= end; i++) {
        cout << word[i] << ", ";
    }
    cout << endl;
    /*
    cout << "ini = " << ini << endl;
    cout << array[0] << endl;
    cout << array[1] << endl;
    */
}

bool is_palindrom(char word[MAX_LENGTH]) {
    int letter_count = 0;
    for (int i = 0; i < MAX_LENGTH; i++) {
        if ((word[i] >= 'A' && word[i] <= 'Z') or (word[i] >= 'a' && word[i] <= 'z'))
            letter_count++;
    }
    
    for (int i = 0; i < letter_count/2; i++) {
        if (word[i] != word[letter_count - 1 - i])
            return false;
    }

    return true;
}

void addition(int mat1[ROW_COUNT][COL_COUNT], int mat2[ROW_COUNT][COL_COUNT], int mat_res[ROW_COUNT][COL_COUNT]) {
    for (int i=0; i<ROW_COUNT; i++)
        for (int j = 0; j < COL_COUNT; j++) {
            mat_res[i][j] = mat1[i][j] + mat2[i][j];
        }
}

void show_matrix(int mat_res[ROW_COUNT][COL_COUNT]) {
    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COL_COUNT; j++) {
            cout << mat_res[i][j] << " ";
        }
        cout << endl;
    }
}

void sort_word(char arr[MAX_LENGTH], int ini, int end) {
    int aux;
    for (int i = ini; i <= end - 1; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

void sort(int arr[MAX_LENGTH], int ini, int end) {
    int aux;
    for (int i = ini; i <= end - 1; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    /*
    array[0] = 666;
    //*(array + 1) = 69;
    (array + 1)[0] = 69;
    ini = 1;
    cout << "ini copia = " << ini <<endl;
    */
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
