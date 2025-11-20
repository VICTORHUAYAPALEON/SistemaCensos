#pragma once
using namespace System;
#include "Entidad.h"
/*podria faltar el include*/

namespace SistemaCensosModel {
	[Serializable]
	public ref class EntidadPersona : public Entidad {
		/*atributos*/
	public:
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ edad;
		String^ sexo;

		/*metodos*/
	public:
		EntidadPersona();
		EntidadPersona(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ edad, String^ sexo, String^ telefono);
	};


}