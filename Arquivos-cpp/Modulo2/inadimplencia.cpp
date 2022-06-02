#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include <iostream>

using namespace std;

void Inadimplencia::desligarUnidade(Data data, UnidadeConsumidora unidade){

  Inadimplencia(data, unidade);

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
  
}

Inadimplencia::Inadimplencia(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}

