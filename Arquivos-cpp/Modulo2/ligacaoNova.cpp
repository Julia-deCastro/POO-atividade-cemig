#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include <iostream>

using namespace std;

void LigacaoNova::ligarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data) {
  bool ativo = true;
  //adiciona o serviço à lista de serviços do funcionário automaticamente
  this->getFuncionario().AdicionarServico(Servico(nomeFuncionario, idFuncionario, data, unidade), data);
  unidade.setAtivo(ativo);
}