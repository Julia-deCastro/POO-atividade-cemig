#ifndef TROCAMEDIDOR_H
#define TROCAMEDIDOR_H

#include "./servico.h"

class trocaMedidor:public Servico{

  public:
    void troca_medidor(UnidadeConsumidora unidade, Data data);
};

#endif