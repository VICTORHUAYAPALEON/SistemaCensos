#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaCensosModel;

namespace SistemaCensosController {

	[Serializable]
	public ref class GestorAlternativa{
		/*atributos*/
	public:
		List<Alternativa^>^ listaAlternativas;
		List<Alternativa^>^ listaAlternativasxPregunta;

		/*metodos*/
	public:
		/*casi todos estos funcionan con un cpdigo pregunta*/
		GestorAlternativa();
		int ObtenerCantAlternativas();
		Alternativa^ ObtenerAlternativaLista(int indice);
		Alternativa^ ObtenerAlternativaxCodigo(int codigo);
		void AgregarAlternativaLista(Alternativa^ objAlternativa);

		void EliminarAlternativaxCodigo(int codigo);

		
	};


}