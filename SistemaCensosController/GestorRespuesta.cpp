#include "GestorRespuesta.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;
/*Agregar este espacio de nombres para la serializacion*/
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorRespuesta::GestorRespuesta() {
	listaRespuestas = gcnew  List<Respuesta^>();
}

int GestorRespuesta::ObtenerCantidadRespuestas() {
	return this->listaRespuestas->Count;
}
Respuesta^ GestorRespuesta::ObtenerRespuestaxIndice(int indice) {
	return this->listaRespuestas[indice];
}

void GestorRespuesta::AgregarRespuesta(Respuesta^ objRespuesta) {
	this->listaRespuestas->Add(objRespuesta);
}

