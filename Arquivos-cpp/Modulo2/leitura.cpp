#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura, Data dataLeitura, Data dataPlanejada){
  this->LeituraConsumo = leitura;
  this->setDataPlanejada(dataPlanejada);
  this->setDataExecucao(dataLeitura);
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

UnidadeConsumidora Leitura::getUnidadeConsumidora(){
  return this->unidade;
}

Leitura::Leitura(){
  
}