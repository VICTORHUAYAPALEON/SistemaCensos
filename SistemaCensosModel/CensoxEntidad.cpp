#include "CensoxEntidad.h"

using namespace SistemaCensosModel;

CensoxEntidad::CensoxEntidad() {
	this->objCensador = gcnew Censador();
	this->ListaCensoxEntidadxPregunta = gcnew List <CensoxEntidadxPregunta^>();
	this->objColegio = gcnew EntidadColegio();
	this->objPersona = gcnew EntidadPersona();
	this->objUniversidad = gcnew EntidadUniversidad();
}

CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado,String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->formularioAsociado = formularioAsociado;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Descripcion = Descripcion;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = ListaCensoxEntidadxPregunta;
}

CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->formularioAsociado = formularioAsociado;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Descripcion = Descripcion;
	this->objCensador = objCensador;
	ListaCensoxEntidadxPregunta = gcnew List <CensoxEntidadxPregunta^>();
}


/*CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, EntidadColegio^ objColegio, Censador^ objCensador) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->objColegio = objColegio;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = gcnew List<CensoxEntidadxPregunta^>();
}

CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, EntidadPersona^ objPersona, Censador^ objCensador) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->objPersona = objPersona;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = gcnew List<CensoxEntidadxPregunta^>();
}

CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, EntidadUniversidad^ objUniversidad, Censador^ objCensador) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->objUniversidad = objUniversidad;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = gcnew List<CensoxEntidadxPregunta^>();

}*/

CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadColegio^ objColegio) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->formularioAsociado = formularioAsociado;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Descripcion = Descripcion;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = ListaCensoxEntidadxPregunta;
	this->objColegio = objColegio;
}
CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadPersona^ objPersona) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->formularioAsociado = formularioAsociado;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Descripcion = Descripcion;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = ListaCensoxEntidadxPregunta;
	this->objPersona = objPersona;
}
CensoxEntidad::CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadUniversidad^ objUniversidad) {
	this->codigoCensoxEntidad = codigoCensoxEntidad;
	this->formularioAsociado = formularioAsociado;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Descripcion = Descripcion;
	this->objCensador = objCensador;
	this->ListaCensoxEntidadxPregunta = ListaCensoxEntidadxPregunta;
	this->objUniversidad = objUniversidad;
}


