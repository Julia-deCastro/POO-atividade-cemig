#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include <iostream>

using namespace std;

void Inadimplencia::desligarUnidade (UnidadeConsumidora unidade){

  if(unidade.getInadimplente() == true)
    unidade.setAtivo(false);
  
}

UnidadeConsumidora Inadimplencia::getUnidadeConsumidora(){
  return this->unidade;
}
