#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "servico.h"

using namespace std;

class Funcionario{

  private:
    string Nome;
    string ID;
    
  public:

    //vector<Servico> ListaServicos;
    void CadastrarFucnionario (string Nome, string ID);
    string getNome();
    string getID();

};
#endif