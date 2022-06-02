#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade){
  Leitura(data, unidade);
  this->LeituraConsumo = leitura;
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){ 
}

Leitura::Leitura(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}