#pragma once

namespace SistemaPlanificacionMatriculaController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaPlanificacionMatriculaModel;

	public ref class CursoController {
		public:
			CursoController();
			/*Metodos a tener si o si*/
			List<Curso^>^ buscarAll();
			Curso^ buscarxId(int id);
			void escribirArchivo(List<Curso^>^ listaCursos);

			List<Curso^>^ buscarCursoxCarrera(String^ nombreCarrera);
			List<Curso^>^ buscarCursoxNombrexCarrera(String^ nombre, String^ carrera);
			void eliminarCurso(int idCurso);
			void agregarCurso(Curso^ objCurso);
	};
}
