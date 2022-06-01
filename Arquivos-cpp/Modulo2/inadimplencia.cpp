#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include <iostream>

using namespace std;

Servico Inadimplencia::desligarUnidade(string idFuncionario, UnidadeConsumidora unidade, Data data){

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
    cout << "Unidade desligada por inadimplencia" << endl;
    //adiciona o serviço à lista de serviços do funcionário automaticamente
  return Servico(idFuncionario, data, unidade);
}

