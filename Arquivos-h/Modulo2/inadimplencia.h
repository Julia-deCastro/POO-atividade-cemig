#ifndef INADIMPLENCIA_H
#define INADIMPLENCIA_H

#include "./desligamento.h"

class Inadimplencia:public Desligamento{

  public:
    void desligarUnidade(Data data, UnidadeConsumidora unidade) override;
    Inadimplencia(Data data, UnidadeConsumidora unidade);
};

#endif
