#ifndef ENCERRAMENTO_H
#define ENCERRAMENTO_H

#include "./desligamento.h"

class Encerramento:public Desligamento{

  public:
    void desligarUnidade(Data data, UnidadeConsumidora unidade) override;

};

#endif
