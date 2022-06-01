#ifndef ENCERRAMENTO_H
#define ENCERRAMENTO_H

#include "./desligamento.h"

class Encerramento:public Desligamento{

  public:
    void desligarUnidade(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data) override;
};

#endif
