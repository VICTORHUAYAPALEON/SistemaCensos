#pragma once
#include "TipoEntidad.h"


using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosModel {
	[Serializable]
	public ref class Entidad {
		/*atributos*/
	public:
		String^ nombre;
		String^ direccion;
		String^ telefono;
		TipoEntidad^ objTipoEntidad;
		/*String^ descripcion*/
		//List<CensoxEntidad^>^ ListaCensoxEntidad;

		/*metodos*/
	public:
		Entidad();
		Entidad(String^ nombre, String^ direccion, String^ telefono, TipoEntidad^ objTipoEntidad);

	};


}


