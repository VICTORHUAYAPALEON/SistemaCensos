#pragma once

#include "Formulario.h"
#include "Empresa.h"
#include "TipoEntidad.h"
#include "CensoxEntidad.h"


using namespace System::IO;
using namespace System;

namespace SistemaCensosModel {
	[Serializable]
	public ref class Censo {
	public:
		int codigo;
		String^ NombreCenso;
		String^ RegionInteres;
		String^ FechaInicio;
		String^ FechaFin;
		List <Formulario^>^ listaFormularios;
		Empresa^ objEmpresa;
		TipoEntidad^ objTipoEntidad;
		List <CensoxEntidad^>^ listaCensosxEntidad;
		
	public:
		Censo();
		Censo(int codigo,String^ NombreCenso, String^ RegionInteres, String^ FechaInicio, String^ FechaFin,Empresa^ objEmpresa,TipoEntidad^ objTipoEntidad);
		
	};
}
