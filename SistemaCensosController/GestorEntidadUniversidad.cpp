#include "GestorEntidadUniversidad.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;

GestorEntidadUniversidad::GestorEntidadUniversidad() {
	ListaUniversidades = gcnew  List<EntidadUniversidad^>();
}

void GestorEntidadUniversidad::LeerUniversidadDesdeArchivo() {
	this->ListaUniversidades->Clear();
	array<String^>^ lineas = File::ReadAllLines("Data/Universidades.txt");
	String^ separadores = ";";
	for each (String ^ lineaUniversidades in lineas) {
		array<String^>^ palabras = lineaUniversidades->Split(separadores->ToCharArray());
		String^ nombre = palabras[0];
		String^ direccion = palabras[1];
		String^ telefono = palabras[2];
		String^ tipoGestion = palabras[3];
		String^ paginaWeb = palabras[4];
		String^ licenciaSunedu = palabras[5];
		EntidadUniversidad^ objUniversidad = gcnew EntidadUniversidad(nombre, direccion, telefono, tipoGestion, paginaWeb, licenciaSunedu);
		this->ListaUniversidades->Add(objUniversidad);
	}
}

int GestorEntidadUniversidad::ObtenerCantUniversidades() {
	return this -> ListaUniversidades->Count;
}

EntidadUniversidad^ GestorEntidadUniversidad::ObtenerUniversidadDeLista(int indice) {
	return this->ListaUniversidades[indice];
}

EntidadUniversidad^ GestorEntidadUniversidad::ObtenerUniversidadxNombre(String^ nombre) {
	EntidadUniversidad^ objUniversidadObtenido = nullptr;
	for (int i = 0; i < this->ListaUniversidades->Count; i++) {
		if (nombre == this->ListaUniversidades[i]->nombre) {
			objUniversidadObtenido = this->ListaUniversidades[i];
		}
	}
	return objUniversidadObtenido;
}


void GestorEntidadUniversidad::AgregarUniversidadALista(EntidadUniversidad^ objUniversidad) {
	this->ListaUniversidades->Add(objUniversidad);
}

void GestorEntidadUniversidad::EscribirEnArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->ListaUniversidades->Count);
	for (int i = 0; i < this->ListaUniversidades->Count; i++) {
		EntidadUniversidad^ objUniversidad = this->ListaUniversidades[i];
		lineasArchivo[i] = objUniversidad->nombre + ";" + objUniversidad->direccion + ";" + objUniversidad->telefono + ";" + objUniversidad->tipoGestion + ";" + objUniversidad->paginaWeb + ";" + objUniversidad->licenciaSunedu;
	}
	File::WriteAllLines("Universidades.txt", lineasArchivo);
}

void GestorEntidadUniversidad::EliminarUniversidad(String^ nombreEliminar) {
	for (int i = 0; i < this->ListaUniversidades->Count; i++) {
		if (nombreEliminar == this->ListaUniversidades[i]->nombre) {
			this->ListaUniversidades->RemoveAt(i);
			break;
		}
	}

}
