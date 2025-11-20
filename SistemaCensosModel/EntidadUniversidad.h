#pragma once

#include "Entidad.h"

using namespace System;

namespace SistemaCensosModel {
	[Serializable]
	public ref class EntidadUniversidad: public Entidad {
		/*atributos*/
		public:
		
			String^ tipoGestion;
			String^ paginaWeb;
			String^ licenciaSunedu;
			String^ programaEstudio;
			String^ nivelPrograma;
			int tiempoPrograma;
			
			/*List<PersonaxEntidad^>^ objPersonaxEntidad;*/

		/*metodos*/
		public:
			EntidadUniversidad();
			/*EntidadUniversidad(String^ tipoGestion, String^ programaEstudio,
				String^ nivelPrograma, int tiempoPrograma, String^ paginaWeb, String^ licenciaSunedu);*/
			EntidadUniversidad(String^ nombre,String^ direccion, String^ telefono, String^ tipoGestion, String^ paginaWeb, String^ licenciaSunedu);
	};


}