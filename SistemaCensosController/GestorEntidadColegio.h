#pragma once

using namespace SistemaCensosModel;
using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosController {

	public ref class GestorEntidadColegio {
		public:
			List<EntidadColegio^>^ ListaColegios;

		public:
			GestorEntidadColegio();
			void LeerColegioDesdeArchivo();
			int ObtenerCantColegios();
			EntidadColegio^ ObtenerColegioDeLista(int indice);
			EntidadColegio^ ObtenerColegioxNombre(String^ nombre);
			void AgregarColegioLista(EntidadColegio^ objColegio);
			void EscribirEnArchivo();
			void EliminarColegio(String^ nombreEliminar);
	};

}