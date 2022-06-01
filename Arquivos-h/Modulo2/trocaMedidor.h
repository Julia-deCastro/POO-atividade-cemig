#ifndef LIGACAONOVA_H
#define LIGACAONOVA_H

#include "./servico.h"

class trocaMedidor:public Servico{

  public:
    trocaMedidor(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data);
};

#endif