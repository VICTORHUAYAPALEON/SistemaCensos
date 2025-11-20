#include "GestorPregunta.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;

GestorPregunta::GestorPregunta() {
	listaPreguntas = gcnew  List<Pregunta^>();
}


int GestorPregunta::ObtenerCantPreguntas() {
	return this->listaPreguntas->Count;
}
Pregunta^ GestorPregunta::ObtenerPreguntasDeLista(int indice) {
	return this->listaPreguntas[indice];
}


void GestorPregunta::AgregarPreguntaLista(Pregunta^ objPregunta) {
	this->listaPreguntas->Add(objPregunta);
}



void GestorPregunta::EliminarPreguntaxCodigoSalvaAlternativa(int codigoPregunta, GestorAlternativa^ objGestorAlternativa) {
	for (int i = 0; i < this->listaPreguntas->Count; i++) {
		if (codigoPregunta == this->listaPreguntas[i]->codigoPregunta) {
			for (int j = 0; j < this->listaPreguntas[i]->listaAlternativas->Count; j++) {
				Alternativa^ objAlternativaSalvar = this->listaPreguntas[i]->listaAlternativas[j];
				objGestorAlternativa->AgregarAlternativaLista(objAlternativaSalvar);
			}
			this->listaPreguntas->RemoveAt(i);
			break;
		}
	}
}

Pregunta^ GestorPregunta::ObtenerPreguntaxCodigo(int codigo) {
	Pregunta^ objPregunta = nullptr;
	for (int i = 0; i < this->listaPreguntas->Count; i++) {
		if (this->listaPreguntas[i]->codigoPregunta == codigo) {
			objPregunta = this->listaPreguntas[i];
		}
	}
	return objPregunta;
}


void GestorPregunta::DevolverListaAlternativaPregunta(Pregunta^ objPregunta, GestorAlternativa^ objGestorAlternativa) {
	int nroAlternativas = objPregunta->listaAlternativas->Count; //asi se borra, es por el funcionamiento de la computadora
	for (int i = 0; i < nroAlternativas; i++) {
		objPregunta->listaAlternativas->RemoveAt(0);
	}
	for (int j = 0; j < objGestorAlternativa->ObtenerCantAlternativas(); j++) {
		objPregunta->listaAlternativas->Add(objGestorAlternativa->listaAlternativas[j]);
	}

}



void GestorPregunta::EliminarPreguntaxCodigo(int codigo) {
	for (int i = 0; i < this->listaPreguntas->Count; i++) {
		if (codigo == this->listaPreguntas[i]->codigoPregunta) {

			this->listaPreguntas->RemoveAt(i);
			break;
		}
	}

}

void GestorPregunta::GenerarGestorAlternativas(Pregunta^ objPregunta, GestorAlternativa^ objGestorAlternativa) {

	for (int i = 0; i < objPregunta->listaAlternativas->Count; i++) {
		objGestorAlternativa->listaAlternativas->Add( objPregunta->listaAlternativas[i] );
	}

}

