#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura){
  this->LeituraConsumo = leitura;
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

UnidadeConsumidora Leitura::getUnidadeConsumidora(){
  return this->unidade;
}

Leitura::Leitura(){
  
}