#ifndef LIGACAONOVA_H
#define LIGACAONOVA_H

#include "./servico.h"

class LigacaoNova:public Servico{

  public:
    void ligarUnidade(UnidadeConsumidora unidade, Data data);
};

#endif

