#include "GestorCensador.h"

using namespace SistemaCensosController;
using namespace System;
using namespace System::IO; /*Aqui esta la clase FILE, que es la que maneja la información de archivos de texto*/

GestorCensador::GestorCensador() {
	listaCensador = gcnew List<Censador^>();
}

void GestorCensador::LeerCensadorDesdeArchivo() {
	//this->listaCensador->Clear();
	array<String^>^ lineas = File::ReadAllLines("Data/Censador.txt");
	String^ separadores = ";";
	for each (String ^ lineaCensador in lineas)
	{
		array<String^>^ palabras = lineaCensador->Split(separadores->ToCharArray());
		int Codigo = Convert::ToInt32(palabras[0]);
		String^ Nombres = palabras[1];
		String^ Apellido_Paterno = palabras[2];
		String^ Apellido_Materno = palabras[3];
		String^ DNI = palabras[4];
		String^ Username = palabras[5];
		String^ Password = palabras[6];
		Censador^ objCensador = gcnew Censador(Codigo, Nombres, Apellido_Paterno, Apellido_Materno, DNI, Username,Password);
		this->listaCensador->Add(objCensador);

	}
}

int GestorCensador::ObtenerCantidadCensador() {
	return this->listaCensador->Count;
}

Censador^ GestorCensador::ObtenerCensadorLista(int indice) {
	return this->listaCensador[indice];
}

Censador^ GestorCensador::ObtenerCensadorxDNI(String^ DNI) {
	Censador^ objCensadorBuscado = nullptr;
	for (int i = 0; i < this->listaCensador->Count; i++)
	{
		if (this->listaCensador[i]->DNI == DNI) {
			objCensadorBuscado = this->listaCensador[i];
			break;
		}
	}
	return objCensadorBuscado;
}

Censador^ GestorCensador::ObtenerContactoxCodigo(int codigo) {
	Censador^ objCensadorBuscado = nullptr;
	for (int i = 0; i < this->listaCensador->Count; i++)
	{
		if (this->listaCensador[i]->Codigo == codigo) {
			objCensadorBuscado = this->listaCensador[i];
			break;
		}
	}
	return objCensadorBuscado;
}

void GestorCensador::AgregarCensador(Censador^ objCensador) {
	this->listaCensador->Add(objCensador);
}

void GestorCensador::EliminarCensador(int codigoEliminar) {
	for (int i = 0; i < this->listaCensador->Count; i++) {
		if (this->listaCensador[i]->Codigo == codigoEliminar) {
			/*Encontre al que debo eliminar*/
			this->listaCensador->RemoveAt(i);
			break;
		}
	}
}

void GestorCensador::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaCensador->Count);
	for (int i = 0; i < this->listaCensador->Count; i++) {
		Censador^ objCensador = this->listaCensador[i];
		lineasArchivo[i] = objCensador->Codigo + ";" + objCensador->Nombres + ";" + objCensador->Apellido_Paterno + ";" + objCensador->Apellido_Materno + ";" + objCensador->DNI + ";" + objCensador->Username + ";" + objCensador->Password;
	}
	File::WriteAllLines("Censador.txt", lineasArchivo);
}