#pragma once

using namespace System; //si uso String
using namespace System::Collections::Generic; //si uso Lists

namespace SistemaCensosModel {
	[Serializable]
	public ref class Censador {
	public://Atributos
		int Codigo;
		String^ DNI;
		String^ Nombres;
		String^ Apellido_Paterno;
		String^ Apellido_Materno;
		String^ Username;
		String^ Password;

	public://Métodos
		Censador(int Codigo, String^ Nombres, String^ Apellido_Paterno, String^ Apellido_Materno, String^ DNI, String^ Username, String^ Password);
		Censador();
	};
}

