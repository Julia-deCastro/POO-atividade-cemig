#ifndef RELIGACAOPAGAMENTO_H
#define RELIGACAOPAGAMENTO_H

#include "./servico.h"

class ReligacaoPagamento:public Servico{

  public:
    Servico religarUnidade(string idFuncionario, UnidadeConsumidora unidade, Data data);
};

#endif