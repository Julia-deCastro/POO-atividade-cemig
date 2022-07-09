#ifndef DESLIGAMENTO_H
#define DESLIGAMENTO_H

#include "./servico.h"

class Desligamento:public Servico{

  public:
    virtual void desligarUnidade(UnidadeConsumidora) = 0;
    virtual UnidadeConsumidora getUnidadeConsumidora() = 0;

};

#endif