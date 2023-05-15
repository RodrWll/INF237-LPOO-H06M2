#pragma once

namespace SistemaPlanificacionMatriculaController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaPlanificacionMatriculaModel;

	public ref class CursoController {
		public:
			CursoController();
			/*Si o si tener*/
			List<Curso^>^ buscarAll();
			Curso^ buscarxId(int Id);
			void escribirArchivo(List<Curso^>^ listaCursos);
			List<Curso^>^ buscarCursoxCarrera(String^ nombreCarrera);
			void eliminarCurso(int idCurso);
	};
}
