#pragma once

#include "GestorRespuesta.h"
using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	[Serializable]
	public ref class GestorCensoxEntidadxPregunta {
	public:
		List<CensoxEntidadxPregunta^>^ listaPreguntas;

	public:
		GestorCensoxEntidadxPregunta();
		int ObtenerCantPreguntas();
		CensoxEntidadxPregunta^ ObtenerPreguntaxEntidadxCensoDeLista(int indice);
		CensoxEntidadxPregunta^ ObtenerPreguntaxEntidadxCenso_PorDescripcion(String^ descripcion);
		CensoxEntidadxPregunta^ ObtenerPreguntaxEntidadxCenso_PorCodigo(int codigo);
		void AgregarCensoxEntidadxPregunta(CensoxEntidadxPregunta^ objCensoxEntidadxPregunta);
		List<CensoxEntidadxPregunta^>^ DevolverListaCompletaCensoxEntidadxPregunta();
		
	};
}