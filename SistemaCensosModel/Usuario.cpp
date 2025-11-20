#include "Usuario.h"

using namespace SistemaCensosModel;

Usuario::Usuario(int codigo, String^ Nombre, String^ Correo, String^ UserName, String^ Password, String^ Telefono) {
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Correo = Correo;
	this->UserName = UserName;
	this->Password = Password;
	this->Telefono = Telefono;

}