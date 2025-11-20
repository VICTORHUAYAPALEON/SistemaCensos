#pragma once

using namespace System::Collections::Generic;
using namespace SistemaCensosModel;//para usar al Model
using namespace System;

namespace SistemaCensosController {
	public ref class GestorUsuario {

	private:
		List<Usuario^>^ listaUsuarios;
	public:
		GestorUsuario();//Constructor de mi clase;
		void LeerUsuarioDesdeArchivo();
		int validarUsuario(String^ userName, String^ password);
		void EscribirArchivo();
		int ObtenerCantidadUsuarios();
		Usuario^ ObtenerUsuarioLista(int indice);//Saca 1 de mi lista
		Usuario^ ObtenerUsuarioxUserName(String^ UserName);
		Usuario^ ObtenerUsuarioxcodigo(int codigo);//Usualmente es codigo
		void AgregarUsuario(Usuario^ objUsuario);//Añade una clase a la lista
		void EliminarUsuario(int codigo);//Usualmente es codigo
	};
}
