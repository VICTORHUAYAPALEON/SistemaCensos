#include "GestorUsuario.h"


using namespace SistemaCensosModel;
using namespace SistemaCensosController;
using namespace System::IO;

GestorUsuario::GestorUsuario() {
	this->listaUsuarios = gcnew List<Usuario^>();
}

void GestorUsuario::LeerUsuarioDesdeArchivo() {
	this->listaUsuarios->Clear();//vacío la lista construída
	array<String^>^ lineas = File::ReadAllLines("Data/Usuarios.txt");//Guardo cada línea del .txt en Strings

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());//cada dato separado por un ";" se vuelve su propio String
		int codigo = Convert::ToInt32(palabras[0]);//cuando debes transformar a int
		String^ Nombre = palabras[1];
		String^ Correo = palabras[2];
		String^ UserName = palabras[3];
		String^ Password = palabras[4];
		String^ Telefono = palabras[5];
		Usuario^ objUsuario = gcnew Usuario(codigo, Nombre, Correo, UserName, Password, Telefono);//Creo mi objeto
		this->listaUsuarios->Add(objUsuario);//Añado el objeto a la lista
	}

}

int GestorUsuario::validarUsuario(String^ UserName, String^ Password) {
	int es_valido = 0;
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->UserName == UserName && this->listaUsuarios[i]->Password == Password) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

int GestorUsuario::ObtenerCantidadUsuarios() {
	return this->listaUsuarios->Count;
}

Usuario^ GestorUsuario::ObtenerUsuarioLista(int indice) {
	return this->listaUsuarios[indice];
}

Usuario^ GestorUsuario::ObtenerUsuarioxUserName(String^ UserName) {
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < this->listaUsuarios->Count; i++)
	{
		if (this->listaUsuarios[i]->UserName == UserName) {//el primer dato1 es el atributo, el segundo es el valor que intento hallar
			objUsuarioBuscado = this->listaUsuarios[i];
			break;
		}
	}
	return objUsuarioBuscado;
}

Usuario^ GestorUsuario::ObtenerUsuarioxcodigo(int codigo) {
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < this->listaUsuarios->Count; i++)
	{
		if (this->listaUsuarios[i]->codigo == codigo) {
			objUsuarioBuscado = this->listaUsuarios[i];
			break;
		}
	}
	return objUsuarioBuscado;
}

void GestorUsuario::AgregarUsuario(Usuario^ objUsuario) {
	this->listaUsuarios->Add(objUsuario);
}

void GestorUsuario::EliminarUsuario(int codigo) {
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		if (this->listaUsuarios[i]->codigo == codigo) {
			/*Encontre al que debo eliminar*/
			this->listaUsuarios->RemoveAt(i);
			break;
		}
	}
}

void GestorUsuario::EscribirArchivo() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaUsuarios->Count);
	for (int i = 0; i < this->listaUsuarios->Count; i++) {
		Usuario^ objUsuario = this->listaUsuarios[i];
		lineasArchivo[i] = objUsuario->codigo + ";" + objUsuario->Nombre + ";" + objUsuario->Correo + ";" + objUsuario->UserName + ";" + objUsuario->Password + ";" + objUsuario->Telefono;
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}