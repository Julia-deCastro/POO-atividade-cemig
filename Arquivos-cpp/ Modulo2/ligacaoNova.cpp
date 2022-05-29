#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include <iostream>

using namespace std;

void LigacaoNova::ligarUnidade(UnidadeConsumidora unidade) {
  bool ativo = true;
  unidade.setAtivo(ativo);
}