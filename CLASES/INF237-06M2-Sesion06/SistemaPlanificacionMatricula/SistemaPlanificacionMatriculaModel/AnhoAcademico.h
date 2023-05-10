#pragma once
#include "SemestreAcademico.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaPlanificacionMatriculaModel {
	
	public ref class AnhoAcademico {
	private:
		int codigo;
		int anho;
		String^ fechaInicio;
		String^ fechaFin;
		String^ estado;
		List<SemestreAcademico^>^ listaSemestres;

	public:
		AnhoAcademico();
		AnhoAcademico(int codigo, int anho, String^ fechaInicio, String^ fechaFin, String^ estado, List<SemestreAcademico^>^ listaSemestres);
	};
}