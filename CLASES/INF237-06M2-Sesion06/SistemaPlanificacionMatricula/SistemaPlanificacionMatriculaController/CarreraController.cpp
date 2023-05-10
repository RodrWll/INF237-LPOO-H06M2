#include "CarreraController.h"

using namespace SistemaPlanificacionMatriculaController;
using namespace System::IO; /*Contiene la definicion de la clase File*/

CarreraController::CarreraController() {

}

List<Carrera^>^ CarreraController::buscarCarreras(String^ nombreCarrera) {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Carrera^>^ listaCarrerasEncontradas = gcnew List<Carrera^>();
	array<String^>^ lineas = File::ReadAllLines("Carreras.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoCarrera = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ fechaCreacion = datos[2];
		if (nombre->Contains(nombreCarrera)) {
			Carrera^ objCarrera = gcnew Carrera(codigoCarrera, nombre, fechaCreacion);
			listaCarrerasEncontradas->Add(objCarrera);
		}
	}
	return listaCarrerasEncontradas;
}

List<Carrera^>^ CarreraController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Carrera^>^ listaCarrerasEncontradas = gcnew List<Carrera^>();
	array<String^>^ lineas = File::ReadAllLines("Carreras.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoCarrera = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ fechaCreacion = datos[2];
		Carrera^ objCarrera = gcnew Carrera(codigoCarrera, nombre, fechaCreacion);
		listaCarrerasEncontradas->Add(objCarrera);
	}
	return listaCarrerasEncontradas;
}

void CarreraController::eliminarCarrera(int codigoEliminar) {
	List<Carrera^>^ listaCarreras = buscarTodas();
	for (int i = 0; i < listaCarreras->Count; i++) {
		Carrera^ objCarrera = listaCarreras[i];
		if (objCarrera->getCodigo() == codigoEliminar) {
			listaCarreras->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCarreras);
}

void CarreraController::escribirArchivo(List<Carrera^>^ listaCarreras) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCarreras->Count);
	for (int i = 0; i < listaCarreras->Count; i++) {
		Carrera^ objCarrera = listaCarreras[i];
		lineasArchivo[i] = objCarrera->getCodigo() + ";" + objCarrera->getNombre() + ";" + objCarrera->getFechaCreacion();
	}
	File::WriteAllLines("Carreras.txt", lineasArchivo);
}