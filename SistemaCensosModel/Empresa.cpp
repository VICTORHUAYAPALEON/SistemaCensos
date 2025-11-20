#include "Empresa.h"

using namespace SistemaCensosModel;

Empresa::Empresa() {

}


Empresa::Empresa(int codigo, String^ RazonSocial, String^ URL, String^ RUC, String^ Direccion, String^ AreaLaboral) {
	this->codigo = codigo;
	this->RazonSocial = RazonSocial;
	this->URL= URL;
	this->RUC= RUC;
	this->Direccion = Direccion;
	this->AreaLaboral = AreaLaboral;
}
