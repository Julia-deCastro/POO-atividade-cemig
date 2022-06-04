#ifndef RELIGACAOPAGAMENTO_H
#define RELIGACAOPAGAMENTO_H

#include "./servico.h"

class ReligacaoPagamento:public Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;

  public:
    ReligacaoPagamento(Data data, UnidadeConsumidora unidade);
    void religarUnidade(UnidadeConsumidora, Data);
};

#endif