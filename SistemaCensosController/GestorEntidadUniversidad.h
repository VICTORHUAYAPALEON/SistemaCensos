#pragma once

using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	public ref class GestorEntidadUniversidad{
		public:
			List<EntidadUniversidad^>^ ListaUniversidades;

		public:
			GestorEntidadUniversidad();
			void LeerUniversidadDesdeArchivo();
			int ObtenerCantUniversidades();
			EntidadUniversidad^ ObtenerUniversidadDeLista(int indice);
			EntidadUniversidad^ ObtenerUniversidadxNombre(String^ nombre);
			void AgregarUniversidadALista(EntidadUniversidad^ objUniversidad);
			void EscribirEnArchivo();
			void EliminarUniversidad(String^ nombreEliminar);
	};
}
