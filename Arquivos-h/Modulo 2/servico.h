#ifndef SERVICO_H
#define  SERVICO_H

#include <iostream>

#include "../Modulo 1/unidadeConsumidora.h"
#include "../Geral/Data.h"
#include "./funcionario.h"


class Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;
    Funcionario funcionario;

  public:
    void RegistraServico(Data,UnidadeConsumidora,Funcionario);
    Data getData();
    UnidadeConsumidora getUnidadeConsumidora();

};
#endif