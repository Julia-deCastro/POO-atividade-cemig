#ifndef LIGACAONOVA_H
#define LIGACAONOVA_H

#include "./servico.h"

class LigacaoNova:public Servico{

  public:
    Servico ligarUnidade(string idFuncionario, UnidadeConsumidora unidade, Data data);
};

#endif

