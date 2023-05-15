#pragma once
#include "Curso.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaPlanificacionMatriculaModel {
	public ref class SemestreAcademico {
		private:
			int codigo;
			int periodo;
			String^ fechaInicio;
			String^ fechaFin;
			String^ estado;
			List<Curso^>^ listaCursos;

		public:
			SemestreAcademico();
			SemestreAcademico(int codigo, int periodo, String^ fechaInicio, String^ fechaFin, String^ estado, List<Curso^>^ listaCursos);
	};
}