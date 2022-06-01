#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include <iostream>

using namespace std;

Servico LigacaoNova::ligarUnidade(string idFuncionario, UnidadeConsumidora unidade, Data data) {
  bool ativo = true;
  //adiciona o serviço à lista de serviços do funcionário automaticamente
  unidade.setAtivo(ativo);
  return Servico(idFuncionario, data, unidade);
}