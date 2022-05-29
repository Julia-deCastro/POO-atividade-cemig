#include "../../Arquivos-h/Modulo2/inadiplencia.h"
#include <iostream>

using namespace std;

void Inadiplencia::desligarUnidade (UnidadeConsumidora unidade){

  if(unidade.getInadimplente() == false)
    unidade.setAtivo(false);
  
}

