#pragma once
#include "Pregunta.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosModel {
	[Serializable]
	public ref class Formulario {
		public:
			int codigoFormulario;
			String^ Titulo;
			String^ Seccion;
			int NroSecciones;
			List<Pregunta^>^ listaPreguntas; /*ListaPregunta es un objeto de una lista de preguntas*/
			String^ PersonaResponsable;

		public:
			Formulario();
			Formulario(int codigoFormulario,String^ Titulo, String^ Seccion, int NroSecciones, String^ PersonaResponsable);
			/*NuevoFormulario*/

	};
}

