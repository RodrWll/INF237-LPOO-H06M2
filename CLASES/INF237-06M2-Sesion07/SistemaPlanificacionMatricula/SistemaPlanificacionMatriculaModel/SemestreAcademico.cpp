#include "SemestreAcademico.h"

using namespace SistemaPlanificacionMatriculaModel;

SemestreAcademico::SemestreAcademico() {

}

SemestreAcademico::SemestreAcademico(int codigo, int periodo, String^ fechaInicio, String^ fechaFin, String^ estado, List<Curso^>^ listaCursos) {
	this->codigo = codigo;
	this->periodo = periodo;
	this->fechaFin = fechaFin;
	this->fechaInicio = fechaInicio;
	this->estado = estado;
	this->listaCursos = listaCursos;
}