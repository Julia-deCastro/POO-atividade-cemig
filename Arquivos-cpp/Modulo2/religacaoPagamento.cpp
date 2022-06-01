#include "../../Arquivos-h/Modulo2/religacaoPagamento.h"
#include <iostream>

using namespace std;

void ReligacaoPagamento::religarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data){
  if (unidade.getInadimplente() == true)
    cout << "Cliente Inadimplente";
  else {
    bool ativo = true;
    unidade.setAtivo(ativo);
    //adiciona o serviço à lista de serviços do funcionário automaticamente
    this->getFuncionario().AdicionarServico(Servico(nomeFuncionario, idFuncionario, data, unidade), data);
  }
}