#include "../../Arquivos-h/Modulo2/encerramento.h"
#include <iostream>

using namespace std;

void Encerramento::desligarUnidade (string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data){

  unidade.setAtivo(false);
  cout << "Unidade desligada por inadimplencia" << endl;
  //adiciona o serviço à lista de serviços do funcionário automaticamente
  this->getFuncionario().AdicionarServico(Servico(nomeFuncionario, idFuncionario, data, unidade), data);

}