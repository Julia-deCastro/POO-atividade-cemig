#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){ 
}

void Leitura::RealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade){
  Servico(data, unidade);
  this->LeituraConsumo = leitura;
}

// Leitura::Leitura(Data data, UnidadeConsumidora unidade){
//   this->data = data;
//   this->unidade = unidade;
// }