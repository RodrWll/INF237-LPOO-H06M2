#pragma once

namespace SistemaPlanificacionMatriculaController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaPlanificacionMatriculaModel;

	public ref class CarreraController {

		public:
			CarreraController();
			List<Carrera^>^ buscarTodas();
			List<Carrera^>^ buscarCarreras(String^ nombreCarrera);
			void eliminarCarrera(int codigoEliminar);
			void escribirArchivo(List<Carrera^>^ listaCarreras);
	};
}