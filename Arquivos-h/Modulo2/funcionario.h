#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"

using namespace std;

class Funcionario{

  private:
    string Nome;
    string ID;
    
  public:

    Funcionario ();
    void CadastrarFuncionario (string Nome, string ID);
    string getNome();
    string getID();
    vector<Servico> listaServicos;
    void AdicionarServico(Servico, Data);

};
#endif