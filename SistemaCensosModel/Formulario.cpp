#include "Formulario.h"

using namespace SistemaCensosModel;

Formulario::Formulario(){
	/*Invoco al constructor de la clase para garantizar que se creen las listas de preguntas*/
	/*Tiene memoria*/
	this->listaPreguntas = gcnew List<Pregunta^>();
}


Formulario::Formulario (int codigoFormulario,String^ Titulo,String^ Seccion, int NroSecciones, String^ PersonaResponsable) {
	/*Invoco al constructor de la clase para garantizar que se creen las listas de preguntas*/
	/*Tiene memoria*/
	this->codigoFormulario = codigoFormulario;
	this->Titulo = Titulo;
	this->Seccion= Seccion;
	this->NroSecciones = NroSecciones;
	this->PersonaResponsable = PersonaResponsable;
	this->listaPreguntas = gcnew List<Pregunta^>();

}
