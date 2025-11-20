#include "Censo.h"
using namespace SistemaCensosModel;
 Censo::Censo() {
	 listaFormularios = gcnew List <Formulario^>();
	 objEmpresa = gcnew Empresa();
	 objTipoEntidad = gcnew TipoEntidad();
	 listaCensosxEntidad = gcnew List <CensoxEntidad^>();

}

 Censo::Censo(int codigo, String^ NombreCenso, String^ RegionInteres, String^ FechaInicio, String^ FechaFin, Empresa^ objEmpresa, TipoEntidad^ objTipoEntidad) {
	 this->codigo = codigo;
	 this->NombreCenso = NombreCenso;
	 this->RegionInteres = RegionInteres;
	 this->FechaInicio = FechaInicio;
	 this->FechaFin = FechaFin;
	 listaFormularios = gcnew List <Formulario^>();
	 this->objEmpresa = objEmpresa;
	 this->objTipoEntidad = objTipoEntidad;
	 listaCensosxEntidad = gcnew List <CensoxEntidad^>();
 }