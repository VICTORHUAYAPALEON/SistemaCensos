#include "EntidadPersona.h"

using namespace SistemaCensosModel;

EntidadPersona::EntidadPersona(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ edad, String^ sexo, String^ telefono) {
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
	this->edad = edad;
	this->sexo = sexo;
	this->telefono = telefono;
}
EntidadPersona::EntidadPersona() {

}