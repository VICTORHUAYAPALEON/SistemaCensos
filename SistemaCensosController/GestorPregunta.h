#pragma once
#include "GestorAlternativa.h"

using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	public ref class GestorPregunta {
	public:
		List<Pregunta^>^ listaPreguntas;

	public:
		GestorPregunta();
		int ObtenerCantPreguntas();
		Pregunta^ ObtenerPreguntasDeLista(int indice);
		Pregunta^ ObtenerPreguntaxCodigo(int codigo);
		void AgregarPreguntaLista(Pregunta^ objPregunta);

		void EliminarPreguntaxCodigoSalvaAlternativa(int codigoPregunta, GestorAlternativa^ objGestorAlternativa);
		void DevolverListaAlternativaPregunta(Pregunta^ objPregunta, GestorAlternativa^ objGestorAlternativa);
		void GenerarGestorAlternativas(Pregunta^ objPregunta, GestorAlternativa^ objGestorAlternativa);
		void EliminarPreguntaxCodigo(int codigo);
	};

}