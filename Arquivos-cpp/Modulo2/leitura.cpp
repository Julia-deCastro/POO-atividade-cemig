#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade){
  Servico(data, unidade);
  this->LeituraConsumo = leitura;
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){
  
}