#ifndef SERVICO_H
#define SERVICO_H

#include <iostream>

#include "../Modulo1/unidadeConsumidora.h"
#include "../Geral/Data.h"
//#include "../Modulo2/funcionario.h"


class Servico{

  private:
    Data data;
    UnidadeConsumidora unidade;
    string funcionarioId;

  public:
    Servico(string, Data, UnidadeConsumidora);
    Servico();
    virtual void RegistraServico(Data,UnidadeConsumidora);
    Data getData();
    UnidadeConsumidora getUnidadeConsumidora();

};
#endif