#pragma once


using namespace System; //si uso String
using namespace System::Collections::Generic; //si uso Lists

namespace SistemaCensosModel {
	[Serializable]
	public ref class Respuesta {
	public://Atributos
		String^ texto;		

	public://Métodos
		Respuesta(String^ texto);
	};
}
