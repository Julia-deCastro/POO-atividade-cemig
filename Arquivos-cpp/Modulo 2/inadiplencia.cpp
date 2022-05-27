#include "../../Arquivos-h/Modulo 2/inadiplencia.h"
#include <iostream>

using namespace std;

void Inadimplencia::desligarUnidade (UnidadeConsumidora unidade){

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
  
}