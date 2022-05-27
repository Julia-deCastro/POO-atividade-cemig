#include "../../Arquivos-h/Modulo 2/religamentoPagamento.h"
#include <iostream>

using namespace std;

void ReligacaoPagamento::religarUnidade(UnidadeConsumidora unidade){
  if (unidade.getInadimplente() == true)
    cout << "Cliente Inadimplente";
  else {
    bool ativo = true;
    unidade.setAtivo(ativo);
  }
}