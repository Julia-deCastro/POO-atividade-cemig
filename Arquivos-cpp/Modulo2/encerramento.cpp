#include "../../Arquivos-h/Modulo2/encerramento.h"
#include <iostream>

using namespace std;

void Encerramento::solicitadoEncerramento(UnidadeConsumidora unidade){
  unidade.setAtivo(false);
}

UnidadeConsumidora Encerramento::getUnidadeConsumidora(){
  return this->unidade;
}

void Encerramento::desligarUnidade (UnidadeConsumidora unidade){

  unidade.setAtivo(false);
  
}