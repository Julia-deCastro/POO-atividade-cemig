#ifndef INADIMPLENCIA_H
#define INADIMPLENCIA_H

#include "./desligamento.h"

class Inadiplencia:public Desligamento{

  public:
    void desligarUnidade(UnidadeConsumidora);
};

#endif
