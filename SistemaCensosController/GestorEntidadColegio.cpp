#include "GestorEntidadColegio.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;

GestorEntidadColegio::GestorEntidadColegio() {
	ListaColegios = gcnew  List<EntidadColegio^>();
}


void GestorEntidadColegio::LeerColegioDesdeArchivo() {
	this->ListaColegios->Clear();
	array<String^>^ lineas = File::ReadAllLines("Data/Colegios.txt");
	String^ separadores = ";";
	for each (String ^ lineaColegios in lineas) {
		array<String^>^ palabras = lineaColegios->Split(separadores->ToCharArray());
		String^ nombre = palabras[0];
		String^ direccion = palabras[1];
		String^ telefono = palabras[2];
		String^ nombreUgel = palabras[3];
		String^ codigoModular = palabras[4];
		String^ nivelEducativo = palabras[5];
		String^ tipoGestion = palabras[6];
		String^ Turno = palabras[7];
		EntidadColegio^ objColegio = gcnew EntidadColegio(nombre, direccion, telefono, nombreUgel, codigoModular, nivelEducativo, tipoGestion, Turno);
		this->ListaColegios->Add(objColegio);
	}
}

int GestorEntidadColegio::ObtenerCantColegios() {
	return this->ListaColegios->Count;
}

EntidadColegio^ GestorEntidadColegio::ObtenerColegioDeLista(int indice) {
	return this->ListaColegios[indice];
}

EntidadColegio^ GestorEntidadColegio::ObtenerColegioxNombre(String^ nombre) {
	EntidadColegio^ Colegio = nullptr;
	for (int i = 0; i < this->ListaColegios->Count; i++) {
		if (nombre == this->ListaColegios[i]->nombre) {
			Colegio = this->ListaColegios[i];
		}
	}
	return Colegio;
}

void GestorEntidadColegio::AgregarColegioLista(EntidadColegio^ objColegio) {
	this->ListaColegios->Add(objColegio);
}

void GestorEntidadColegio::EscribirEnArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->ListaColegios->Count);
	for (int i = 0; i < this->ListaColegios->Count; i++) {
		EntidadColegio^ objColegio = this->ListaColegios[i];
		lineasArchivo[i] = objColegio->nombre + ";" + objColegio->direccion + ";" + objColegio->telefono + ";" + objColegio->nombreUgel + ";" + objColegio->codigoModular + ";" + objColegio->nivelEducativo + ";" + objColegio->tipoGestion + ";" + objColegio->Turno;
	}
	File::WriteAllLines("Colegios.txt", lineasArchivo);
}

void GestorEntidadColegio::EliminarColegio(String^ nombreEliminar) {
	for (int i = 0; i < this->ListaColegios->Count; i++) {
		if (nombreEliminar == this->ListaColegios[i]->nombre) {
			this->ListaColegios->RemoveAt(i);
			break;
		}
	}

}



