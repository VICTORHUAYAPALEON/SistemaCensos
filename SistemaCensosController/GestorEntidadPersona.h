#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaCensosModel;

namespace SistemaCensosController {

	public ref class GestorEntidadPersona {
		/*atributos*/
	public:
		List<EntidadPersona^>^ listaEntidadPersona;

		/*metodos*/
	public:
		GestorEntidadPersona();
		void LeerEntidadPersonaDesdeArchivo();
		void EscribirArchivo();
		int ObtenerCantidadEntidadPersonas();
		EntidadPersona^ ObtenerEntidadPersonaLista(int indice);
		EntidadPersona^ ObtenerEntidadPersonaxDni(String^ dni);
		void AgregarEntidadPersona(EntidadPersona^ objPersona);
		void EliminarEntidadPersona(String^ dniEliminar);
	};


}