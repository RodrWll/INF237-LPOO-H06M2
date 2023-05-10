#include "Carrera.h"

using namespace SistemaPlanificacionMatriculaModel;

Carrera::Carrera() {

}

Carrera::Carrera(int codigo, String^ nombre, String^ fechaCreacion) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->fechaCreacion = fechaCreacion;
}

int Carrera::getCodigo() {
	return this->codigo;
}

void Carrera::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Carrera::getNombre() {
	return this->nombre;
}

void Carrera::setNombre(String^ nombre) {
	this->nombre = nombre;
}

String^ Carrera::getFechaCreacion() {
	return this->fechaCreacion;
}

void Carrera::setCodigo(String^ fechaCreacion) {
	this->fechaCreacion = fechaCreacion;
}