#include "../../Arquivos-h/Modulo2/encerramento.h"
#include <iostream>

using namespace std;

void Encerramento::solicitadoEncerramento(UnidadeConsumidora unidade){
  unidade.setAtivo(false);
}