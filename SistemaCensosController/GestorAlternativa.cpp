
#include "GestorAlternativa.h"

using namespace SistemaCensosController;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System;

GestorAlternativa::GestorAlternativa() {

	listaAlternativas = gcnew List<Alternativa^>();
}




int GestorAlternativa::ObtenerCantAlternativas() {
	return this->listaAlternativas->Count;
}

Alternativa^ GestorAlternativa::ObtenerAlternativaLista(int indice) {
	return this->listaAlternativas[indice];
}


Alternativa^ GestorAlternativa::ObtenerAlternativaxCodigo(int codigo) {
	Alternativa^ objAlternativaBuscada = nullptr;
	for (int i = 0; i < this->listaAlternativas->Count; i++) {
		if (this->listaAlternativas[i]->codigoAlternativa == codigo) {
			objAlternativaBuscada = this->listaAlternativas[i];
			break;

		}
	}
	return objAlternativaBuscada;
}


void GestorAlternativa::AgregarAlternativaLista(Alternativa^ objAlternativa) {
	this->listaAlternativas->Add(objAlternativa);


}

void GestorAlternativa::EliminarAlternativaxCodigo(int codigo) {
	for (int i = 0; i < this->listaAlternativas->Count; i++) {
		if (codigo == this->listaAlternativas[i]->codigoAlternativa) {

			this->listaAlternativas->RemoveAt(i);
			break;
		}
	}

}