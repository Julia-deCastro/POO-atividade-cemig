#ifndef LEITURA_H
#define LEITURA_H

#include "./servico.h"

class Leitura:public Servico{

  private:
    float LeituraConsumo;

  public:
    void RealizarLeitura(float leitura);
    float ConsultarLeitura();

};

#endif