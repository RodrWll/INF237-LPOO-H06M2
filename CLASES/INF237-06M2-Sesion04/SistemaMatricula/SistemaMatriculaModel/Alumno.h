#pragma once

using namespace System;

public ref class Alumno {
	private:
		int codigo;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		int escala;
		double craest;

	public:
		Alumno();
		Alumno(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, int escala, double craest);
};