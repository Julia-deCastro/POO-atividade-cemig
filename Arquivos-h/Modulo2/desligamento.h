#ifndef DESLIGAMENTO_H
#define DESLIGAMENTO_H

#include "./servico.h"

class Desligamento:public Servico{

  public:
    virtual void desligarUnidade(Data data, UnidadeConsumidora unidade);

};

#endif
