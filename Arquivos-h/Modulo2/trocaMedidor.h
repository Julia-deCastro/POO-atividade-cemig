#ifndef TROCAMEDIDOR_H
#define TROCAMEDIDOR_H

#include "./servico.h"

class trocaMedidor:public Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;

  public:
    void trocaMedidor::troca_medidor(UnidadeConsumidora unidade, Data data);
    trocaMedidor(Data data, UnidadeConsumidora unidade);
};

#endif