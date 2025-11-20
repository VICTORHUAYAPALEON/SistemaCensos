#pragma once
#include "Censador.h"
#include "CensoxEntidadxPregunta.h"
#include "EntidadColegio.h"
#include "EntidadPersona.h"
#include "EntidadUniversidad.h"

using namespace System; //si uso String
using namespace System::Collections::Generic; //si uso Lists

namespace SistemaCensosModel {
	[Serializable]
	public ref class CensoxEntidad {
		public://Atributos
			int codigoCensoxEntidad;
			String^ formularioAsociado;
			String^ Fecha;
			String^ Hora;
			String^ Descripcion;
			Censador^ objCensador;
			List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta;
			EntidadColegio^ objColegio;
			EntidadPersona^ objPersona;
			EntidadUniversidad^ objUniversidad;

		public://Métodos
			CensoxEntidad();
			CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado,String^ Fecha,String^ Hora, String^Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta);
			CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado,String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador);
			/*CensoxEntidad(int codigoCensoxEntidad, EntidadColegio^ objColegio, Censador^ objCensador);
			CensoxEntidad(int codigoCensoxEntidad, EntidadPersona^ objPersona, Censador^ objCensador);
			CensoxEntidad(int codigoCensoxEntidad, EntidadUniversidad^ objUniversidad, Censador^ objCensador);*/
			CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadColegio^ objColegio);
			CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadPersona^ objPersona);
			CensoxEntidad(int codigoCensoxEntidad, String^ formularioAsociado, String^ Fecha, String^ Hora, String^ Descripcion, Censador^ objCensador, List<CensoxEntidadxPregunta^>^ ListaCensoxEntidadxPregunta, EntidadUniversidad^ objUniversidad);
			
	};
}
