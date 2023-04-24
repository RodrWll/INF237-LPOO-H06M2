#pragma once
#include "Carrera.h"

using namespace System;

namespace SistemaPlanificacionMatriculaModel {

	public ref class Curso {
		private:
			int codigo;
			String^ nombre;
			String^ identificador;
			double creditos;
			Carrera^ objCarrera;

		public:
			Curso();
			Curso(int codigo, String^ nombre, String^ identificador, double creditos, Carrera^ objCarrera);
	};

}