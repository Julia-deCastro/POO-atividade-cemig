#ifndef SERVICO_H
#define SERVICO_H

#include <iostream>

#include "../Modulo1/unidadeConsumidora.h"
#include "../Geral/Data.h"


class Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;

  public:
    Servico(Data, UnidadeConsumidora);
    Servico();
    //void RegistraServico(Data,UnidadeConsumidora);
    Data getData();
    UnidadeConsumidora getUnidadeConsumidora();

};
#endif