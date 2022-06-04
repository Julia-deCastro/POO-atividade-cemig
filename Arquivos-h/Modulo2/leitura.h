#ifndef LEITURA_H
#define LEITURA_H

#include "./servico.h"

class Leitura:public Servico{

  private:
    float LeituraConsumo;
    Data data;
    UnidadeConsumidora unidade;
    
  public:
    Leitura() {};
    Leitura(Data data, UnidadeConsumidora unidade) {};
    void RealizarLeitura(float leitura, Data, UnidadeConsumidora);
    float ConsultarLeitura();

};

#endif