#pragma once
#include "GestorFormularioCenso.h"
#include "GestorCensoxEntidad.h"
using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	[Serializable]
	public ref class GestorCenso {
	public:
		List<Censo^>^ listaCensos;

	public:
		GestorCenso();
		void  Serializar();
		void  Deserializar();
		int ObtenerCantCensos();
		Censo^ ObtenerCensosDeLista(int indice);
		Censo^ ObtenerCensoxNombre(String^ nombre);
		Censo^ ObtenerCensoxCodigo(int codigo);

		void EliminarCensoxCodigoSalvaFormularios(int codigo, GestorFormulario^ objGestorFormulario);
		void DevolverListaFormulariosaCenso(Censo^ objCenso, GestorFormulario^ objGestorFormulario);

		void GenerarGestorFormularios(Censo^ objCenso, GestorFormulario^ objGestorFormulario);


		void AgregarCensoLista(Censo^ objCenso);
		void EliminarCensoxCodigo(int codigo);

		Formulario^ ObtenerFormularioXNombre_EnCenso(Censo^ objCenso, String^ Titulo);


		void GenerarGestorCensoxEntidad(Censo^ objCenso, String^ nombreFormulario, GestorCensoxEntidad^ objGestorCensoxEntidad);
	};

}