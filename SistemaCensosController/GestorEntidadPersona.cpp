
#include "GestorEntidadPersona.h"

using namespace SistemaCensosController;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System;

GestorEntidadPersona::GestorEntidadPersona() {

	listaEntidadPersona = gcnew List<EntidadPersona^>();
}



void GestorEntidadPersona::LeerEntidadPersonaDesdeArchivo() {
	this->listaEntidadPersona->Clear();
	array<String^>^ lineas = File::ReadAllLines("Data/EntidadPersona.txt");

	String^ separadores = ";";
	for each (String ^ lineaEntidadPersona in lineas) {
		array<String^>^ palabras = lineaEntidadPersona->Split(separadores->ToCharArray()); /*el sprint espera un arreglo de caracteres*/
		String^ nombre = palabras[0];
		String^ apellidoPaterno = palabras[1];
		String^ apellidoMaterno = palabras[2];
		String^ dni = palabras[3];
		String^ edad = palabras[4];
		String^ sexo = palabras[5];
		String^ telefono = palabras[6];

		EntidadPersona^ objPersona = gcnew EntidadPersona(nombre, apellidoPaterno, apellidoMaterno, dni, edad, sexo, telefono);
		this->listaEntidadPersona->Add(objPersona);
	}



}

void  GestorEntidadPersona::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaEntidadPersona->Count);
	for (int i = 0; i < this->listaEntidadPersona->Count; i++) {
		EntidadPersona^ objContacto = this->listaEntidadPersona[i];
		lineasArchivo[i] = objContacto->nombre + ";" + objContacto->apellidoPaterno + ";" + objContacto->apellidoMaterno + ";" + objContacto->dni + ";" + objContacto->edad + ";" + objContacto->sexo + ";"+ objContacto->telefono;
		File::WriteAllLines("EntidadPersona.txt", lineasArchivo);
	}
}


int GestorEntidadPersona::ObtenerCantidadEntidadPersonas() {
	return this->listaEntidadPersona->Count;
}

EntidadPersona^ GestorEntidadPersona::ObtenerEntidadPersonaLista(int indice) {
	return this->listaEntidadPersona[indice];
}


EntidadPersona^ GestorEntidadPersona::ObtenerEntidadPersonaxDni(String^ dni) {
	EntidadPersona^ objPersonaBuscada = nullptr;
	for (int i = 0; i < this->listaEntidadPersona->Count; i++) {
		if (this->listaEntidadPersona[i]->dni == dni) {
			objPersonaBuscada = this->listaEntidadPersona[i];
			break;

		}
	}
	return objPersonaBuscada;
}


void GestorEntidadPersona::AgregarEntidadPersona(EntidadPersona^ objPersona) {
	this->listaEntidadPersona->Add(objPersona);

}

void  GestorEntidadPersona::EliminarEntidadPersona(String^ dniEliminar) {

	for (int i = 0; i < this->listaEntidadPersona->Count; i++) {
		if (this->listaEntidadPersona[i]->dni == dniEliminar) {
			/*Encibtre*/
			this->listaEntidadPersona->RemoveAt(i);
			break;
		}

	}
}

