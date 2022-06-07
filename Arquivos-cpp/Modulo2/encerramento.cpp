#include "../../Arquivos-h/Modulo2/encerramento.h"
#include <iostream>

using namespace std;

void Encerramento::desligarUnidade(Data data, UnidadeConsumidora unidade){
  Encerramento(data, unidade);
  unidade.setAtivo(false);
}

Encerramento::Encerramento(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}

Encerramento::Encerramento(){
  
}