#ifndef ENCERRAMENTO_H
#define ENCERRAMENTO_H

#include "./desligamento.h"

class Encerramento:public Desligamento{

  public:
    void solicitadoEncerramento(UnidadeConsumidora);

};

#endif
