#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}


void Leitura::RealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade){
  Servico(data, unidade);
  this->unidade = unidade;
  this->data = data;
  this->LeituraConsumo = leitura;
}

Leitura::Leitura(){

}