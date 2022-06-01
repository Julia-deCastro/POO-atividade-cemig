#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include <iostream>

using namespace std;

void Inadimplencia::desligarUnidade(Data data, UnidadeConsumidora unidade){

  Servico(data, unidade);

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
  
}

