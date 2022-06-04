#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include <iostream>

using namespace std;

void LigacaoNova::ligarUnidade(UnidadeConsumidora unidade, Data data) {
  Servico(data, unidade);
  bool ativo = true;
  unidade.setAtivo(ativo);
}

// LigacaoNova::LigacaoNova(Data data, UnidadeConsumidora unidade){
//   this->data = data;
//   this->unidade = unidade;
// }