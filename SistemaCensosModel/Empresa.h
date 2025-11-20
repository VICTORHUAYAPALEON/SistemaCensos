#pragma once

using namespace System;

namespace SistemaCensosModel {
	[Serializable]
	public ref class Empresa {
		public:
			int codigo;
			String^ RazonSocial;
			String^ URL;
			String^ RUC;
			String^ Direccion;
			String^ AreaLaboral;

		public:
			Empresa();
			Empresa(int codigo, String^ RazonSocial, String^ URL, String^ RUC, String^ Direccion,String^ AreaLaboral);

	};
}
