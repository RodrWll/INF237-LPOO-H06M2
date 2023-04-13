#pragma once
#include "Profesor.h"
#include "DiaDictado.h"
#include "Alumno.h"

using namespace System;
using namespace System::Collections::Generic; /*Aqui esta la clase List*/

public ref class Horario {
	private:
		int codigo;
		String^ nombre;
		int vacantes;
		List<Profesor^>^ listaProfesores;
		List<DiaDictado^>^ listaDiaDictados;
		List<Alumno^>^ listaAlumnos;

};