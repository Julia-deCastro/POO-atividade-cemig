#include "../../Arquivos-h/Modulo2/leitura.h"
#include <iostream>

using namespace std;

void Leitura::RealizarLeitura(float leitura, string nomeFuncionario, string idFuncionario, Data data, UnidadeConsumidora unidade){
  //adiciona o serviço à lista de serviços do funcionário automaticamente
  this->getFuncionario().AdicionarServico(Servico(nomeFuncionario, idFuncionario, data, unidade), data);
  this->LeituraConsumo = leitura;
}

float Leitura::ConsultarLeitura(){
  return this->LeituraConsumo;
}

Leitura::Leitura(){
  
}