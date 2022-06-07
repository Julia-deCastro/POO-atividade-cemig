#ifndef TROCAMEDIDOR_H
#define TROCAMEDIDOR_H

#include "./servico.h"

class trocaMedidor:public Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;

  public:
    trocaMedidor();
    trocaMedidor(Data data, UnidadeConsumidora unidade);
};

#endif