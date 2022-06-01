#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

Servico Leitura::RealizarLeitura(float leitura, string idFuncionario, Data data, UnidadeConsumidora *unidade){
  //adiciona o serviço à lista de serviços do funcionário automaticamente
  this->LeituraConsumo = leitura;
  return Servico(idFuncionario, data, *unidade);
  
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){
  
}