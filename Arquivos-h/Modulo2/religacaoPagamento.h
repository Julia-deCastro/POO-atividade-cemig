#ifndef RELIGACAOPAGAMENTO_H
#define RELIGACAOPAGAMENTO_H

#include "./servico.h"

class ReligacaoPagamento:public Servico{

  public:
    void religarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data);
};

#endif