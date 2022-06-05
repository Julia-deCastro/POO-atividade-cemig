#ifndef LIGACAONOVA_H
#define LIGACAONOVA_H

#include "./servico.h"

class LigacaoNova : public Servico{
  
  private:
    Data data;
    UnidadeConsumidora unidade;

  public:
    LigacaoNova();
    LigacaoNova(Data data, UnidadeConsumidora unidade) {};
    void ligarUnidade(UnidadeConsumidora, Data);
};

#endif