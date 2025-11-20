#include "CensoxEntidadxPregunta.h"

using namespace SistemaCensosModel;

CensoxEntidadxPregunta::CensoxEntidadxPregunta(int codigoPregunta, String^ Descripcion) {
	this->codigoPregunta = codigoPregunta;
	this->Descripcion = Descripcion;
	this->ListaRespuesta = gcnew List<Respuesta^>();
}
CensoxEntidadxPregunta::CensoxEntidadxPregunta() {
	this->ListaRespuesta = gcnew List<Respuesta^>();
}
CensoxEntidadxPregunta::CensoxEntidadxPregunta(int codigoPregunta, String^ Descripcion, List<Respuesta^>^ ListaRespuesta) {
	this->codigoPregunta = codigoPregunta;
	this->Descripcion = Descripcion;
	this->ListaRespuesta = ListaRespuesta;
}