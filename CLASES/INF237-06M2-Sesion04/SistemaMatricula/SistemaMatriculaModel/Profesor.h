#pragma once

using namespace System;

public ref class Profesor {
	private:
		int codigo;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ gradoAcademico;

	public:
		Profesor();
		Profesor(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ gradoAcademico);
};