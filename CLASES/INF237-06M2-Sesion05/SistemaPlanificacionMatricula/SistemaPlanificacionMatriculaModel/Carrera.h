#pragma once

using namespace System;

namespace SistemaPlanificacionMatriculaModel {
	
	public ref class Carrera {
		private:
			int codigo;
			String^ nombre;
			String^ fechaCreacion;

		public:
			Carrera();
			Carrera(int codigo, String^ nombre, String^ fechaCreacion);
	};


}

	