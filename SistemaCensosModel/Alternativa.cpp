#include "Alternativa.h"

using namespace SistemaCensosModel;


Alternativa::Alternativa() {

}

Alternativa::Alternativa(int codigoAlternativa, String^ texto) {
	this->codigoAlternativa = codigoAlternativa;
	this->texto = texto;
}