#ifndef SERVICO_H
#define SERVICO_H

#include <iostream>

#include "../Modulo1/unidadeConsumidora.h"
#include "../Geral/Data.h"


class Servico{

  private:
    Data dataPlanejada;
    Data dataExecucao;    

  protected:
    UnidadeConsumidora unidade;

  public:
    Servico(Data, UnidadeConsumidora);
    Servico();
    virtual UnidadeConsumidora getUnidadeConsumidora() = 0;

    Data getDataPlanejada();
    Data getDataExecucao();
    void setDataPlanejada(Data);
    void setDataExecucao(Data);

};
#endif