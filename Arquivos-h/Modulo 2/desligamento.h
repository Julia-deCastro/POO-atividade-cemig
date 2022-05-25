#ifndef DESLIGAMENTO_H
#define DESLIGAMENTO_H

#include "../Modulo 1/unidadeConsumidora.h"

class Desligamento:public Servico{

  public:
    void desligarUnidade(UnidadeConsumidora);

}

#endif