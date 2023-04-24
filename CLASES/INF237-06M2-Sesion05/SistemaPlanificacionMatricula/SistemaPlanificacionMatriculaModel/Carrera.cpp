#include "Carrera.h"

using namespace SistemaPlanificacionMatriculaModel;

Carrera::Carrera() {

}

Carrera::Carrera(int codigo, String^ nombre, String^ fechaCreacion) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->fechaCreacion = fechaCreacion;
}