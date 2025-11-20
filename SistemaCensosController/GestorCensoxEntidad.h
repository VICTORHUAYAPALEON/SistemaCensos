#pragma once

using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	[Serializable]
	public ref class GestorCensoxEntidad {
	public:
		List<CensoxEntidad^>^ listaCensosxEntidad;

	public:
		GestorCensoxEntidad();
		void Serializar();
		void Deserializar();
		CensoxEntidad^ ObtenerCensoxEntidadxcodigo(int codigo);
		void AgregarCensoxEntidadALista(CensoxEntidad^ objCensoxEntidad);
		int ObtenerCantCensoxEntidad();
		CensoxEntidad^ ObtenerCensoxEntidadDeLista(int indice);
		
		/*List<CensoxEntidad^>^ ObtenerListadeCensoxEntidad(Censo^ objCenso);*/

	};
}