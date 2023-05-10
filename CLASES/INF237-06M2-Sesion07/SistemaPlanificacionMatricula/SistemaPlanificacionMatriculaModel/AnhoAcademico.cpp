#include "AnhoAcademico.h"

using namespace SistemaPlanificacionMatriculaModel;

AnhoAcademico::AnhoAcademico() {

}

AnhoAcademico::AnhoAcademico(int codigo, int anho, String^ fechaInicio, String^ fechaFin, String^ estado, List<SemestreAcademico^>^ listaSemestres) {
	this->codigo = codigo;
	this->anho = anho;
	this->fechaFin = fechaFin;
	this->fechaInicio = fechaInicio;
	this->estado = estado;
	this->listaSemestres = listaSemestres;
}