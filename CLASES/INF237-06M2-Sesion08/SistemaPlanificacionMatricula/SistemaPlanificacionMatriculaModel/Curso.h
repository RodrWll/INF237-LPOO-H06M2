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
			int getCodigo();
			void setCodigo(int codigo);
			String^ getNombre();
			void setNombre(String^ nombre);
			String^ getIdentificador();
			void setIdentificador(String^ identificador);
			double getCreditos();
			void setCreditos(double creditos);
			Carrera^ getCarrera();
			void setCarrera(Carrera^ objCarrera);
	};

}