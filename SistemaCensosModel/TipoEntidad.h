#pragma once
using namespace System;

namespace SistemaCensosModel {
	[Serializable]
	public ref class TipoEntidad {
	public:
		String^ tipo;

	public:
		TipoEntidad();
		TipoEntidad(String^ tipo);
	};
}
