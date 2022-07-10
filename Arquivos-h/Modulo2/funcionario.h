#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo3/Usuario.h"

using namespace std;

class Funcionario: public Usuario{

  private:
    string nome;
    string id;
    Permissao permissao;
    vector <Data> listaServicos;
    
  public:
    string getNome();
    string getID();
    Permissao getPermissao();
    virtual void AdicionarServico(Data data) = 0;
    void setNome(string nome);
    void setID(string id);
    void adicionarLista (Data data);
    vector<Data> getLista();

};
#endif