#ifndef TROCAMEDIDOR_H
#define TROCAMEDIDOR_H

#include "./servico.h"

class trocaMedidor:public Servico{

  public:
    trocaMedidor(Data data, UnidadeConsumidora unidade);
};

#endif