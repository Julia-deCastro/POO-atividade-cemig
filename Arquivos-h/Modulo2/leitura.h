#ifndef LEITURA_H
#define LEITURA_H

#include "./servico.h"

class Leitura:public Servico{

  private:
    float LeituraConsumo;

  public:
    Leitura();
    Servico RealizarLeitura(float leitura, string idFunc, Data data, UnidadeConsumidora *unidade);
    float ConsultarLeitura();

};

#endif