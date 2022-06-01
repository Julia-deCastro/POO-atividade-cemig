#ifndef TROCAMEDIDOR_H
#define TROCAMEDIDOR_H

#include "./servico.h"

class trocaMedidor:public Servico{

  public:
    void(UnidadeConsumidora unidade, Data data);
};

#endif