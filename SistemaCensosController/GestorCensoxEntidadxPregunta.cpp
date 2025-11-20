#include "GestorCensoxEntidadxPregunta.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;
/*Agregar este espacio de nombres para la serializacion*/
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorCensoxEntidadxPregunta::GestorCensoxEntidadxPregunta() {
	listaPreguntas = gcnew  List<CensoxEntidadxPregunta^>();
}

int GestorCensoxEntidadxPregunta::ObtenerCantPreguntas() {
	return this->listaPreguntas->Count;
}

CensoxEntidadxPregunta^ GestorCensoxEntidadxPregunta::ObtenerPreguntaxEntidadxCensoDeLista(int indice) {
	return this->listaPreguntas[indice];
}

CensoxEntidadxPregunta^ GestorCensoxEntidadxPregunta::ObtenerPreguntaxEntidadxCenso_PorDescripcion(String^ descripcion) {
	CensoxEntidadxPregunta^ objPreguntaxEntidadxCenso = nullptr;
	for (int i = 0; i < this->listaPreguntas->Count; i++) {
		if (this->listaPreguntas[i]->Descripcion == descripcion) {  /*como se van a añadir los contenido dentro de este*/
			objPreguntaxEntidadxCenso = this->listaPreguntas[i];
		}
	}
	return objPreguntaxEntidadxCenso;
}

CensoxEntidadxPregunta^ GestorCensoxEntidadxPregunta::ObtenerPreguntaxEntidadxCenso_PorCodigo(int codigo) {
	CensoxEntidadxPregunta^ objPreguntaxEntidadxCenso = nullptr;
	for (int i = 0; i < this->listaPreguntas->Count; i++) {
		if (this->listaPreguntas[i]->codigoPregunta == codigo) {  /*como se van a añadir los contenido dentro de este*/
			objPreguntaxEntidadxCenso = this->listaPreguntas[i];
		}
	}
	return objPreguntaxEntidadxCenso;
}

void GestorCensoxEntidadxPregunta::AgregarCensoxEntidadxPregunta(CensoxEntidadxPregunta^ objCensoxEntidadxPregunta) {
	this->listaPreguntas->Add(objCensoxEntidadxPregunta);
}

List<CensoxEntidadxPregunta^>^ GestorCensoxEntidadxPregunta::DevolverListaCompletaCensoxEntidadxPregunta() {
	
	return this->listaPreguntas;
}

