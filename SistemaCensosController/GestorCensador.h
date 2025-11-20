#pragma once
using namespace System::Collections::Generic;
using namespace SistemaCensosModel;
using namespace System;

namespace SistemaCensosController {

	public ref class GestorCensador {

	private:
		List<Censador^>^ listaCensador;

	public:
		GestorCensador();
		void LeerCensadorDesdeArchivo();
		void EscribirArchivo();
		int ObtenerCantidadCensador();
		Censador^ ObtenerCensadorLista(int indice);
		Censador^ ObtenerCensadorxDNI(String^ DNI);
		Censador^ ObtenerContactoxCodigo(int Codigo);
		void AgregarCensador(Censador^ objCensador);
		void EliminarCensador(int codigoEliminar);
	};
}

