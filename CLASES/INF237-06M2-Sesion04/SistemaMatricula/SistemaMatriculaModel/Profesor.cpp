#include "Profesor.h"

Profesor::Profesor() {

}

Profesor::Profesor(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ gradoAcademico) {
	this->codigo = codigo;
	this->nombres = nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->gradoAcademico = gradoAcademico;
}

