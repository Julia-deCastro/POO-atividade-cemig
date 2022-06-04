#ifndef ENCERRAMENTO_H
#define ENCERRAMENTO_H

#include "./desligamento.h"

class Encerramento:public Desligamento{

  public:
    void desligarUnidade(Data data, UnidadeConsumidora unidade) override;
    Encerramento(Data data, UnidadeConsumidora unidade);

  private:
    Data data;
    UnidadeConsumidora unidade;
};

#endif