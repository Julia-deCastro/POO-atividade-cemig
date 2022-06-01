#ifndef INADIMPLENCIA_H
#define INADIMPLENCIA_H

#include "./desligamento.h"

class Inadimplencia:public Desligamento{

  public:
    void desligarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data) override;
};

#endif
