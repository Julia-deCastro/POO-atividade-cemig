#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo3/Usuario.h"

using namespace std;

class Funcionario:public Usuario{

  private:
    string nome;
    string id;
    Permissao permissao;
    
  public:

    virtual void CadastrarFuncionario (string Nome, string ID) =0;
    string getNome();
    string getID();
    vector<Servico> listaServicos;
    void AdicionarServico(Servico, Data);
    void setNome(string nome);
    void setID(string id);
    

};
#endif