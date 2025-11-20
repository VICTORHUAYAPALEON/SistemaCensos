#include "Pregunta.h"

using namespace SistemaCensosModel;
using namespace System;

Pregunta::Pregunta() {
	listaAlternativas = gcnew List<Alternativa^>();

}

Pregunta::Pregunta(int codigoPregunta, String^ Descripcion, String^ ModalidadRespuesta) {
	/*Invoco al constructor de la clase para garantizar que se creen las listas de alternativas*/
	/*Tiene memoria*/
	/*this hace referencia a un metodo o atributo de la misma clase*/
	this->codigoPregunta = codigoPregunta;
	this->Descripcion = Descripcion;
	this->ModalidadRespuesta = ModalidadRespuesta;
	listaAlternativas = gcnew List<Alternativa^>();

}