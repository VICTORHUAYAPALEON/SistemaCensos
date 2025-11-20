#include "Entidad.h"


using namespace SistemaCensosModel;

Entidad::Entidad() {
	objTipoEntidad = gcnew TipoEntidad();
}

Entidad::Entidad(String^ nombre, String^ direccion, String^ telefono, TipoEntidad^ objTipoEntidad){
	this->nombre = nombre;
	this->direccion = direccion;
	this->telefono = telefono;
	this->objTipoEntidad = objTipoEntidad;
}