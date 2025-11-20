#include "GestorCenso.h"

using namespace SistemaCensosController;
using namespace SistemaCensosModel;
using namespace System;
using namespace System::IO;
/*Agregar este espacio de nombres para la serializacion*/
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorCenso::GestorCenso() {
	listaCensos = gcnew  List<Censo^>();
}

void GestorCenso::Serializar() {
	Stream^ objStream = File::Open("Censos.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->listaCensos);
	objStream->Close();
}

void GestorCenso::Deserializar() {
	Stream^ objStream = File::Open("Censos.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->listaCensos= dynamic_cast<List<Censo^>^> (objFormateador->Deserialize(objStream) );
	objStream->Close();
}

int GestorCenso::ObtenerCantCensos() {
	return this->listaCensos->Count;
}

Censo^ GestorCenso::ObtenerCensosDeLista(int indice) {
	return this->listaCensos[indice];
}

Censo^ GestorCenso::ObtenerCensoxNombre(String^ nombre) {
	Censo^ objCenso = nullptr;
	for (int i = 0; i < this->listaCensos->Count; i++) {
		if (this->listaCensos[i]->NombreCenso == nombre){  /*como se van a añadir los contenido dentro de este*/
			objCenso = this->listaCensos[i];
		}
	}
	return objCenso;
}

void GestorCenso::AgregarCensoLista(Censo^ objCenso) {
	this->listaCensos->Add(objCenso);
}

void GestorCenso::EliminarCensoxCodigo(int codigo) {
	for (int i = 0; i < this->listaCensos->Count; i++) {
		if (codigo == this->listaCensos[i]->codigo) {

			this->listaCensos->RemoveAt(i);
			break;
		}
	}

}
void GestorCenso::EliminarCensoxCodigoSalvaFormularios(int codigo,GestorFormulario^ objGestorFormulario) {
	for (int i = 0; i < this->listaCensos->Count; i++) {
		if (codigo == this->listaCensos[i]->codigo) {
			for (int j = 0; j < this->listaCensos[i]->listaFormularios->Count; j++) {
				Formulario^ objFormularioSalvar = this->listaCensos[i]->listaFormularios[j];
				objGestorFormulario->AgregarFormularioLista(objFormularioSalvar);
			}
			this->listaCensos->RemoveAt(i);
			break;
		}
	}
}


Censo^ GestorCenso::ObtenerCensoxCodigo(int codigo) {
	Censo^ objCenso = nullptr;
	for (int i = 0; i < this->listaCensos->Count; i++) {
		if (this->listaCensos[i]->codigo == codigo) {  /*como se van a añadir los contenido dentro de este*/
			objCenso = this->listaCensos[i];
		}
	}
	return objCenso;

}

/*Esto es devolver una lista de formularios*/
void GestorCenso::DevolverListaFormulariosaCenso(Censo^ objCenso,GestorFormulario^ objGestorFormulario) {
	int nroFormularios = objCenso->listaFormularios->Count; //asi se borra, es por el funcionamiento de la computadora
	for (int i = 0; i < nroFormularios; i++) {
		objCenso->listaFormularios->RemoveAt(0);
	}
	for (int j = 0; j< objGestorFormulario->ObtenerCantFormularios(); j++) {
		objCenso->listaFormularios->Add( objGestorFormulario->listaFormularios[j] );
	}
	
}


void GestorCenso::GenerarGestorFormularios(Censo^ objCenso, GestorFormulario^ objGestorFormulario) {
	
	for (int i = 0; i < objCenso->listaFormularios->Count; i++) {
		objGestorFormulario->listaFormularios->Add( objCenso->listaFormularios[i] );
	}

}

Formulario^ GestorCenso::ObtenerFormularioXNombre_EnCenso(Censo^ objCenso, String^ Titulo) {
	Formulario^ objFormularioElegido = nullptr;
	for (int i = 0; i < objCenso->listaFormularios->Count; i++) {
		if (objCenso->listaFormularios[i]->Titulo == Titulo) {
			objFormularioElegido = objCenso->listaFormularios[i];
			break;
		}
	} 
	return objFormularioElegido;
}

void GestorCenso::GenerarGestorCensoxEntidad(Censo^ objCenso, String^ nombreFormulario, GestorCensoxEntidad^ objGestorCensoxEntidad) {

	if (objCenso->listaCensosxEntidad != nullptr) {
		objGestorCensoxEntidad->listaCensosxEntidad = gcnew List<CensoxEntidad^>();

		for (int i = 0; i< objCenso->listaCensosxEntidad->Count; i++) {
			if (objCenso->listaCensosxEntidad[i]->formularioAsociado == nombreFormulario) {
				objGestorCensoxEntidad->listaCensosxEntidad->Add(objCenso->listaCensosxEntidad[i]);
			}
		}

	}
}

