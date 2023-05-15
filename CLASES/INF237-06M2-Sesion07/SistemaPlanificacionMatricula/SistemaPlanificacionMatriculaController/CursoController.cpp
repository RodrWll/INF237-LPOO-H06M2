#include "CursoController.h"
#include "CarreraController.h"

using namespace SistemaPlanificacionMatriculaController;
using namespace System::IO;

CursoController::CursoController() {

}

List<Curso^>^ CursoController::buscarCursoxCarrera(String^ nombreCarrera) {
	List<Curso^>^ listaCursosEncontrados = gcnew List<Curso^>();
	array<String^>^ lineas = File::ReadAllLines("Cursos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ datos = lineaCurso->Split(separadores->ToCharArray());
		int codigoCurso = Convert::ToInt32(datos[0]);
		String^ nombreCurso = datos[1];
		String^ identificador = datos[2];
		double creditos = Convert::ToDouble(datos[3]);
		int codigoCarrera = Convert::ToInt32(datos[4]);
		CarreraController^ objCarreraController = gcnew CarreraController();
		Carrera^ objCarrera = objCarreraController->buscarCarrera(codigoCarrera);
		if (objCarrera->getNombre()->Contains(nombreCarrera)) {
			Curso^ objCurso = gcnew Curso(codigoCurso, nombreCurso, identificador, creditos, objCarrera);
			listaCursosEncontrados->Add(objCurso);
		}
	}
	return listaCursosEncontrados;
}
List<Curso^>^ CursoController::buscarAll() {
	List<Curso^>^ listaCursosEncontrados = gcnew List<Curso^>();
	array<String^>^ lineas = File::ReadAllLines("Cursos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ datos = lineaCurso->Split(separadores->ToCharArray());
		int codigoCurso = Convert::ToInt32(datos[0]);
		String^ nombreCurso = datos[1];
		String^ identificador = datos[2];
		double creditos = Convert::ToDouble(datos[3]);
		int codigoCarrera = Convert::ToInt32(datos[4]);
		CarreraController^ objCarreraController = gcnew CarreraController();
		Carrera^ objCarrera = objCarreraController->buscarCarrera(codigoCarrera);
	}
	return listaCursosEncontrados;
};


Curso^ CursoController::buscarxId(int Id)
{
	//Curso^ objCurso = nullptr;
	List<Curso^>^ listaCursos = buscarAll();
	for (int i=0; i< listaCursos->Count; i++)
	{
		if (listaCursos[i]->getCodigo() == Id)
		{
			return listaCursos[i];
		}
	}
}

void CursoController::escribirArchivo(List<Curso^>^ listaCursos)
{
	StreamWriter^ sw = gcnew StreamWriter("Cursos.txt");
	for (int i = 0; i < listaCursos->Count; i++)
	{
		sw->WriteLine(listaCursos[i]->getCodigo() + ";" + listaCursos[i]->getNombre() + ";" + listaCursos[i]->getIdentificador() + ";" + listaCursos[i]->getCreditos() + ";" + listaCursos[i]->getCarrera()->getCodigo());
	}
	sw->Close();
}


void CursoController::eliminarCurso(int idCurso)
{
	List<Curso^>^ listaCursos = buscarAll();
	for (int i = 0; i < listaCursos->Count; i++)
	{
		if (listaCursos[i]->getCodigo() == idCurso)
		{
			listaCursos->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCursos);
}
