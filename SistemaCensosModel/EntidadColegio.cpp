#include "EntidadColegio.h"

using namespace SistemaCensosModel;
using namespace System;

/*EntidadColegio::EntidadColegio(String^ nombreUgel, String^ codigoModular, String^ nivelEducativo, String^ tipoGestion,
	String^ Turno, String^ generoAlumnado) {
	/*this->objPersonaxEntidad = gcnew List<PersonaxEntidad^>();*/
	/*this->nombreUgel = nombreUgel;
	this->codigoModular = codigoModular;
	this->nivelEducativo = nivelEducativo;
	this->tipoGestion = tipoGestion;
	this->Turno = Turno;
	this->generoAlumnado = generoAlumnado;
}*/
EntidadColegio::EntidadColegio() {


}
EntidadColegio::EntidadColegio(String^ nombre, String^ direccion, String^ telefono, String^ nombreUgel, String^ codigoModular, String^ nivelEducativo, String^ tipoGestion, String^ Turno) {
	this->nombre = nombre;
	this->direccion = direccion;
	this->telefono = telefono;
	this->nombreUgel = nombreUgel;
	this->codigoModular = codigoModular;
	this->nivelEducativo = nivelEducativo;
	this->tipoGestion = tipoGestion;
	this->Turno = Turno;
}
/*Tener cuidado con los datos propios de entidad*/