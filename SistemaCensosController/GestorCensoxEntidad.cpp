#include "GestorCensoxEntidad.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;
/*Agregar este espacio de nombres para la serializacion*/
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorCensoxEntidad::GestorCensoxEntidad() {
	listaCensosxEntidad = gcnew  List<CensoxEntidad^>();
}

void GestorCensoxEntidad::Serializar() {
	Stream^ objStream = File::Open("CensoxEntidad.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->listaCensosxEntidad);
	objStream->Close();
}

void GestorCensoxEntidad::Deserializar() {
	Stream^ objStream = File::Open("CensoxEntidad.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->listaCensosxEntidad = dynamic_cast<List<CensoxEntidad^>^> (objFormateador->Deserialize(objStream));
	objStream->Close();
}

CensoxEntidad^ GestorCensoxEntidad::ObtenerCensoxEntidadxcodigo(int codigo) {
	CensoxEntidad^ objCensoxEntidad = nullptr;
	for (int i = 0; i < this->listaCensosxEntidad->Count; i++) {
		if (this->listaCensosxEntidad[i]->codigoCensoxEntidad == codigo) {  /*como se van a añadir los contenido dentro de este*/
			objCensoxEntidad = this->listaCensosxEntidad[i];
		}
	}
	return objCensoxEntidad;
}
void GestorCensoxEntidad::AgregarCensoxEntidadALista(CensoxEntidad^ objCensoxEntidad) {
	this->listaCensosxEntidad->Add(objCensoxEntidad);
}

int GestorCensoxEntidad::ObtenerCantCensoxEntidad() {
	return this->listaCensosxEntidad->Count;
}

CensoxEntidad^ GestorCensoxEntidad::ObtenerCensoxEntidadDeLista(int indice) {
	return this->listaCensosxEntidad[indice];
}

/*List<CensoxEntidad^>^ ObtenerListadeCensoxEntidad(Censo^ objCenso) {

}*/

