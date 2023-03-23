// MyFirstConsoleApplication.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* 
    Comentarios en varias líneas
*/
//#include "stdio.h"
#include <iostream>

//#define MAX_NAME_LEN 20
const int MAX_NAME_LEN = 20;
//using namespace std;

int main()
{
    char var1[MAX_NAME_LEN];
    int age1, users_num;
    bool var2; // Posibles valores de var2 son true o false
    std::cout << "Ingrese la cantidad de usuarios:\n";
    std::cin >> users_num;
    for (int i = 0; i < users_num; i++) {
        std::cout << "Ingrese el nombre " << i+1 << ":\n";
        //std::cin >> var1;
        std::cin.getline(var1, MAX_NAME_LEN); //Toma el caracter vacío como entrada
        std::cin.getline(var1, MAX_NAME_LEN);
        std::cout << "Ingrese la edad:\n";
        std::cin >> age1;

        std::cout << "Bienvenido Sr. " << var1 << ", que facil es LPOO.\n";

        if (age1 >= 18) {
            std::cout << var1 << " tiene acceso a los codigos prohibidos de C++.\n";
        }
        else {
            std::cout << var1 << " solo puede usar los algoritmos de FunPro en C++.\n";
        }
    }


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
