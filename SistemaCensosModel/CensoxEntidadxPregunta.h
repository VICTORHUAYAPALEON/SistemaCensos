#pragma once
#include "Respuesta.h"

using namespace System; //si uso String
using namespace System::Collections::Generic; //si uso Lists

namespace SistemaCensosModel {
	[Serializable]
	public ref class CensoxEntidadxPregunta {
		public://Atributos
			int codigoPregunta;
			String^ Descripcion;
			List<Respuesta^>^ ListaRespuesta;
		public://Métodos
			CensoxEntidadxPregunta(int codigoPregunta, String^ Descripcion);
			CensoxEntidadxPregunta();
			CensoxEntidadxPregunta(int codigoPregunta, String^ Descripcion, List<Respuesta^>^ ListaRespuesta);
	};
}

