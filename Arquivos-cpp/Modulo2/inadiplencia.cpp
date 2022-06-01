#include "../../Arquivos-h/Modulo2/inadiplencia.h"
#include <iostream>

using namespace std;

void Inadiplencia::desligarUnidade (UnidadeConsumidora unidade, Data data){

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
    cout << "Unidade desligada por inadimplencia" << endl;
    //adiciona o serviço à lista de serviços do funcionário automaticamente
  this->getFuncionario().AdicionarServico(Servico(data, unidade), data);
}


