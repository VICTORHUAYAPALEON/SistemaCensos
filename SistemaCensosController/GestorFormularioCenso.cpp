#include "GestorFormularioCenso.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;

GestorFormulario::GestorFormulario() {
	listaFormularios = gcnew List<Formulario^>();
}

void GestorFormulario::AgregarFormularioLista(Formulario^ objFormulario) {
	this->listaFormularios->Add(objFormulario);
}

int GestorFormulario::ObtenerCantFormularios() {
	return this->listaFormularios->Count;
}

Formulario^ GestorFormulario::ObtenerFormularioDeLista(int indice) {
	return this->listaFormularios[indice];
}

void GestorFormulario::EliminarFormularioxCodigoSalvaPreguntas(int codigo, GestorPregunta^ objGestorPregunta) {
	for (int i = 0; i < this->listaFormularios->Count; i++) {
		if (codigo == this->listaFormularios[i]->codigoFormulario) {
			for (int j = 0; j < this->listaFormularios[i]->listaPreguntas->Count; j++) {
				Pregunta^ objPreguntaSalvar = this->listaFormularios[i]->listaPreguntas[j];
				objGestorPregunta->AgregarPreguntaLista(objPreguntaSalvar);
			}
			this->listaFormularios->RemoveAt(i);
			break;
		}
	}
}


Formulario^ GestorFormulario::ObtenerFormularioxCodigo(int codigo) {
	Formulario^ objFormulario = nullptr;
	for (int i = 0; i < this->listaFormularios->Count; i++) {
		if (this->listaFormularios[i]->codigoFormulario == codigo) {  /*como se van a añadir los contenido dentro de este*/
			objFormulario = this->listaFormularios[i];
		}
	}
	return objFormulario;

}


void GestorFormulario::DevolverListaPreguntasFormulario(Formulario^ objFormulario, GestorPregunta^ objGestorPregunta) {
	int nroPreguntas = objFormulario->listaPreguntas->Count; //asi se borra, es por el funcionamiento de la computadora
	for (int i = 0; i < nroPreguntas; i++) {
		objFormulario->listaPreguntas->RemoveAt(0);
	}
	for (int j = 0; j < objGestorPregunta->ObtenerCantPreguntas(); j++) {
		objFormulario->listaPreguntas->Add(objGestorPregunta->listaPreguntas[j]);
	}

}



void GestorFormulario::EliminarFormularioxCodigo(int codigo) {
	for (int i = 0; i < this->listaFormularios->Count; i++) {
		if (codigo == this->listaFormularios[i]->codigoFormulario) {
			this->listaFormularios->RemoveAt(i);
			break;
		}
	}

}

void GestorFormulario::GenerarGestorPreguntas(Formulario^ objFormulario, GestorPregunta^ objGestorPregunta) {

	for (int i = 0; i < objFormulario->listaPreguntas->Count; i++) {
		objGestorPregunta->listaPreguntas->Add(objFormulario->listaPreguntas[i]);
	}
}

