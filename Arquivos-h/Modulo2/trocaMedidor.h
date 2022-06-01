#ifndef LIGACAONOVA_H
#define LIGACAONOVA_H

#include "./servico.h"

class trocaMedidor:public Servico{

  public:
    trocaMedidor(UnidadeConsumidora unidade, Data data);
};

#endif