#pragma once
using namespace System;

namespace SistemaCensosModel {
	public ref class Usuario {
	public:
		int codigo;
		String^ Nombre;
		String^ Correo;
		String^ UserName;
		String^ Password;
		String^ Telefono;
	public:
		Usuario(int codigo, String^ Nombre, String^ Correo, String^ UserName, String^ Password, String^ Telefono);
	};
}
