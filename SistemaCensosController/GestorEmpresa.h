#pragma once

using namespace System::Collections::Generic;
using namespace SistemaCensosModel;//para usar al Model
using namespace System;

namespace SistemaCensosController {
	public ref class GestorEmpresa {

	private:
		List<Empresa^>^ listaEmpresa;
	public:
		GestorEmpresa();//Constructor de mi clase;
		void LeerEmpresaDesdeArchivo();
		void EscribirArchivo();
		int ObtenerCantidadEmpresas();
		Empresa^ ObtenerEmpresaLista(int indice);//Saca 1 de mi lista
		Empresa^ ObtenerEmpresaxRazonSocial(String^ RazonSocial);
		Empresa^ ObtenerEmpresaxcodigo(int codigo);//Usualmente es codigo
		void AgregarEmpresa(Empresa^ objEmpresa);//Añade una clase a la lista
		void EliminarEmpresa(int codigo);//Usualmente es codigo
	};
}
