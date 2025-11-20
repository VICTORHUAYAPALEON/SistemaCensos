#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaCensosModel;

namespace SistemaCensosController {

	[Serializable]
	public ref class GestorRespuesta {
		/*atributos*/
	public:
		List<Respuesta^>^ listaRespuestas;

		/*metodos*/
	public:
		/*casi todos estos funcionan con un cpdigo pregunta*/
		GestorRespuesta();
		Respuesta^ ObtenerRespuestaxIndice(int indice);
		int ObtenerCantidadRespuestas();
		void AgregarRespuesta(Respuesta^ objRespuesta);
	};
}