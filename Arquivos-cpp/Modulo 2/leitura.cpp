#include "../../Arquivos-h/Modulo 2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura){
  this->LeituraConsumo = leitura;
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){
  
}