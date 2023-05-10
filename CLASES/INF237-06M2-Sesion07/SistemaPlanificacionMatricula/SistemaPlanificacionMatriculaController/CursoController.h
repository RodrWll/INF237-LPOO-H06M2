#pragma once

namespace SistemaPlanificacionMatriculaController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaPlanificacionMatriculaModel;

	public ref class CursoController {
		public:
			CursoController();
			List<Curso^>^ buscarCursoxCarrera(String^ nombreCarrera);
	};
}
