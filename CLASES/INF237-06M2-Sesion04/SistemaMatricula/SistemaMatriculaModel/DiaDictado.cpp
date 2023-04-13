#include "DiaDictado.h" /*Aqui es como si hiciera Ctrl C + Ctrl V del archivo DiaDictado.h*/

/*Ahora si voy a implementar los métodos*/
/*tipoDato NombreClase::NombreMetodo(parametros){
	instrucciones;
}*/

DiaDictado::DiaDictado() {

}

DiaDictado::DiaDictado(int codigo, String^ dia, String^ aula, int nroHoras, int horaInicio, int horaFin, String^ tipo) {
	this->codigo = codigo;
	this->dia = dia;
	this->aula = aula;
	this->nroHoras = nroHoras;
	this->horaInicio = horaInicio;
	this->horaFin = horaFin;
	this->tipo = tipo;
}
