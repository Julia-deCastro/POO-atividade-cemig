#ifndef INADIMPLENCIA_H
#define INADIMPLENCIA_H

#include "./desligamento.h"

class Inadimplencia:public Desligamento{

  public:
    Servico desligarUnidade(string idFuncionario, UnidadeConsumidora unidade, Data data);
};

#endif
