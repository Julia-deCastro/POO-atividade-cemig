#ifndef DESLIGAMENTO_H
#define DESLIGAMENTO_H

#include "./servico.h"

class Desligamento:public Servico{

  public:
    void desligarUnidade(UnidadeConsumidora);

};

#endif
