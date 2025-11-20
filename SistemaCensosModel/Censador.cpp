#include "Censador.h"

using namespace SistemaCensosModel;

Censador::Censador(int Codigo, String^ Nombres, String^ Apellido_Paterno, String^ Apellido_Materno, String^ DNI, String^ Username, String^ Password) {
	this->Codigo = Codigo;
	this->Nombres = Nombres;
	this->Apellido_Paterno = Apellido_Paterno;
	this->Apellido_Materno = Apellido_Materno;
	this->DNI = DNI;
	this->Username = Username;
	this->Password = Password;
}
Censador::Censador() {

}