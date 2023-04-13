#include "Alumno.h"

Alumno::Alumno() {

}

Alumno::Alumno(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, int escala, double craest) {
	this->codigo = codigo;
	this->nombres = nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->escala = escala;
	this->craest = craest;
}