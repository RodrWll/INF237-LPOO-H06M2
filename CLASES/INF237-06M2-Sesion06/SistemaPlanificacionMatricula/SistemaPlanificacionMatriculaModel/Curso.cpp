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