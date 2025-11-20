#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaCensosModel {

	[Serializable]
	public ref class Alternativa {
	public:
		int codigoAlternativa;
		String^ texto;

	public:
		Alternativa();
		Alternativa(int codigoAlternativa, String^ texto);
	};
}
