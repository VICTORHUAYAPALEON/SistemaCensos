#pragma once
#include "Alternativa.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosModel {

	[Serializable]
	public ref class Pregunta {

		public:
			int codigoPregunta;
			String^ Descripcion;
			String^ ModalidadRespuesta;
			List<Alternativa^>^ listaAlternativas;
		public:
			Pregunta();
			Pregunta(int codigoPregunta, String^ Descripcion, String^ ModalidadRespuesta);
		
	};
}

