#include "Curso.h"

using namespace SistemaPlanificacionMatriculaModel;

Curso::Curso() {

}

Curso::Curso(int codigo, String^ nombre, String^ identificador, double creditos, Carrera^ objCarrera) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->identificador = identificador;
	this->creditos = creditos;
	this->objCarrera = objCarrera;
}

int Curso::getCodigo() {
	return this->codigo;
}

void Curso::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Curso::getNombre() {
	return this->nombre;
}

void Curso::setNombre(String^ nombre) {
	this->nombre = nombre;
}

String^ Curso::getIdentificador() {
	return this->identificador;
}

void Curso::setIdentificador(String^ identificador) {
	this->identificador = identificador;
}

double Curso::getCreditos() {
	return this->creditos;
}

void Curso::setCreditos(double creditos) {
	this->creditos = creditos;
}

Carrera^ Curso::getCarrera() {
	return this->objCarrera;
}

void Curso::setCarrera(Carrera^ objCarrera) {
	this->objCarrera = objCarrera;
}