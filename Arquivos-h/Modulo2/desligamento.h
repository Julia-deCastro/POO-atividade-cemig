#ifndef DESLIGAMENTO_H
#define DESLIGAMENTO_H

#include "./servico.h"

class Desligamento:public Servico{

  public:
    virtual Servico desligarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data);

};

#endif
