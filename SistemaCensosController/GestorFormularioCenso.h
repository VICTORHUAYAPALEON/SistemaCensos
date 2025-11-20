#pragma once
#include "GestorPregunta.h"

using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	
	public ref class GestorFormulario {
	public:
		List<Formulario^>^ listaFormularios;

	public:
		GestorFormulario();
		int ObtenerCantFormularios();
		void AgregarFormularioLista(Formulario^ objFormulario);
		
		Formulario^ ObtenerFormularioDeLista(int indice);
		Formulario^ ObtenerFormularioxCodigo(int codigo);
		void EliminarFormularioxCodigoSalvaPreguntas(int codigo, GestorPregunta^ objGestorPregunta);
		void DevolverListaPreguntasFormulario(Formulario^ objFormulario, GestorPregunta^ objGestorPregunta);
		void EliminarFormularioxCodigo(int codigo);
		void GenerarGestorPreguntas(Formulario^ objFormulario, GestorPregunta^ objGestorPregunta);
		

	};

}