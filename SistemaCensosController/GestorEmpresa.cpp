#include "GestorEmpresa.h"

using namespace SistemaCensosController;
using namespace System;
using namespace System::IO;//Clase FILE, para manejar .txt´s

GestorEmpresa::GestorEmpresa() {
	listaEmpresa = gcnew List<Empresa^>();//Construye la lista
}

void GestorEmpresa::LeerEmpresaDesdeArchivo() {
	this->listaEmpresa->Clear();//vacío la lista construída
	array<String^>^ lineas = File::ReadAllLines("Data/Empresas.txt");//Guardo cada línea del .txt en Strings

	String^ separadores = ";";
	for each (String ^ lineaEmpresa in lineas) {
		array<String^>^ palabras = lineaEmpresa->Split(separadores->ToCharArray());//cada dato separado por un ";" se vuelve su propio String
		int codigo = Convert::ToInt32(palabras[0]);//cuando debes transformar a int
		String^ RazonSocial = palabras[1];
		String^ URL = palabras[2];
		String^ RUC = palabras[3];
		String^ Direccion = palabras[4];
		String^ AreaLaboral = palabras[5];
		Empresa^ objEmpresa = gcnew Empresa(codigo, RazonSocial, URL, RUC, Direccion, AreaLaboral);//Creo mi objeto
		this->listaEmpresa->Add(objEmpresa);//Añado el objeto a la lista
	}

}

int GestorEmpresa::ObtenerCantidadEmpresas() {
	return this->listaEmpresa->Count;
}

Empresa^ GestorEmpresa::ObtenerEmpresaLista(int indice) {
	return this->listaEmpresa[indice];
}

Empresa^ GestorEmpresa::ObtenerEmpresaxRazonSocial(String^ RazonSocial) {
	Empresa^ objEmpresaBuscada = nullptr;
	for (int i = 0; i < this->listaEmpresa->Count; i++)
	{
		if (this->listaEmpresa[i]->RazonSocial == RazonSocial) {//el primer dato1 es el atributo, el segundo es el valor que intento hallar
			objEmpresaBuscada = this->listaEmpresa[i];
			break;
		}
	}
	return objEmpresaBuscada;
}

Empresa^ GestorEmpresa::ObtenerEmpresaxcodigo(int codigo) {
	Empresa^ objEmpresaBuscada = nullptr;
	for (int i = 0; i < this->listaEmpresa->Count; i++)
	{	
		if (this->listaEmpresa[i]->codigo == codigo) {
			objEmpresaBuscada = this->listaEmpresa[i];
			break;
		}
	}
	return objEmpresaBuscada;
}

void GestorEmpresa::AgregarEmpresa(Empresa^ objEmpresa) {
	this->listaEmpresa->Add(objEmpresa);
}

void GestorEmpresa::EliminarEmpresa(int codigo) {
	for (int i = 0; i < this->listaEmpresa->Count; i++) {
		if (this->listaEmpresa[i]->codigo == codigo) {
			/*Encontre al que debo eliminar*/
			this->listaEmpresa->RemoveAt(i);
			break;
		}
	}
}

void GestorEmpresa::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaEmpresa->Count);
	for (int i = 0; i < this->listaEmpresa->Count; i++) {
		Empresa^ objEmpresa = this->listaEmpresa[i];
		lineasArchivo[i] = objEmpresa->codigo + ";" + objEmpresa->RazonSocial + ";" + objEmpresa->URL + ";" + objEmpresa->RUC + ";" + objEmpresa->Direccion +";"+ objEmpresa->AreaLaboral;
	}
	File::WriteAllLines("Empresas.txt", lineasArchivo);
}


