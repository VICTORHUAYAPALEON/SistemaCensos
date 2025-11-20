#pragma once

#include "Entidad.h"

using namespace System;
using namespace System::Collections::Generic; /*Listas*/


namespace SistemaCensosModel {
	[Serializable]
	public ref class EntidadColegio: public Entidad {
		/*atributos*/
		public:
			String^ nombreUgel;
			String^ codigoModular;
			String^ nivelEducativo;
			String^ tipoGestion;
			String^ Turno;
			String^ nombre;
			String^ direccion;
			String^ telefono;


			/*metodos*/
		public:
			/*EntidadColegio(String^ nombreUgel, String^ codigoModular, String^ nivelEducativo, String^ tipoGestion,
			String^ Turno, String^ generoAlumnado);*/
			EntidadColegio();
			EntidadColegio(String^ nombre, String^ direccion, String^ telefono, String^ nombreUgel, String^ codigoModular, 
			String^ nivelEducativo,String^ tipoGestion,String^ Turno);
	};
}