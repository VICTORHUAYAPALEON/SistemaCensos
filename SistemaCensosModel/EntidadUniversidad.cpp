#include "EntidadUniversidad.h"

using namespace SistemaCensosModel;
using namespace System;

/*EntidadUniversidad::EntidadUniversidad(String^ tipoGestion, String^ programaEstudio,
	String^ nivelPrograma, int tiempoPrograma, String^ paginaWeb, String^ licenciaSunedu) {
	/*this->objPersonaxEntidad = gcnew List<PersonaxEntidad^>();*/
	/*this->tipoGestion = tipoGestion;
	this->programaEstudio = programaEstudio;
	this->nivelPrograma = nivelPrograma;
	this->tiempoPrograma = tiempoPrograma;
	this->paginaWeb = paginaWeb;
	this->licenciaSunedu = licenciaSunedu;
}*/

EntidadUniversidad::EntidadUniversidad(String^ nombre, String^ direccion, String^ telefono, String^ tipoGestion, String^ paginaWeb, String^ licenciaSunedu) /*: Entidad(nombre,direccion,telefono)*/{
	this->nombre = nombre;
	this->direccion = direccion;
	this->telefono = telefono;
	this->tipoGestion = tipoGestion;
	this->paginaWeb = paginaWeb;
	this->licenciaSunedu = licenciaSunedu;
}
EntidadUniversidad::EntidadUniversidad() {

}

