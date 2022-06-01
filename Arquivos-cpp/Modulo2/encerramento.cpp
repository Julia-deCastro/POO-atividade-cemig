#include "../../Arquivos-h/Modulo2/encerramento.h"
#include <iostream>

using namespace std;

void Encerramento::desligarUnidade(Data data, UnidadeConsumidora unidade){
  Servico(data, unidade);
  unidade.setAtivo(false);
}
