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
			/*Propiedades - GET y SET*/
			int getCodigo(); /*Obtiene el valor*/
			void setCodigo(int codigo); /*Actualiza el valor*/
			String^ getNombre(); /*Obtiene el valor*/
			void setNombre(String^ nombre); /*Actualiza el valor*/
			String^ getFechaCreacion(); /*Obtiene el valor*/
			void setFechaCreacion(String^ fechaCreacion); /*Actualiza el valor*/
	};


}

	