#include "../../Arquivos-h/Modulo 2/ligacaoNova.h"
#include <iostream>

using namespace std;

void LigacaoNova::ligarUnidade(UnidadeConsumidora unidade) {
  bool ativo = true;
  unidade.setAtivo(ativo);
}