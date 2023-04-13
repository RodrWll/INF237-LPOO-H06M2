#pragma once

using namespace System; /*Aqui se encuentra la definicion e implementacion de la clase String*/

public ref class DiaDictado {
	/*Atributos*/
	private: /*En todas las clases, los atributos deben ser siempre privados*/
		int codigo;
		String^ dia;
		String^ aula;
		int nroHoras;
		int horaInicio;
		int horaFin;
		String^ tipo;

	/*Métodos*/
	public:
		/*Constructor - BOB*/
		/*1. Reservar memoria válida para el objeto que estamos creando - Obligatorio*/
		/*2. Permite darle un valor inicial a los atributos - Opcional*/
		DiaDictado();
		DiaDictado(int codigo, String^ dia, String^ aula, int nroHoras, int horaInicio, int horaFin, String^ tipo);
};