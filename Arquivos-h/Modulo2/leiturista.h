#ifndef LEITURISTA_H
#define  LEITURISTA_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo3/Usuario.h"
#include "./funcionario.h"
#include "./leitura.h"

using namespace std;

class Leiturista:public Funcionario{

  public:
    void CadastrarFuncionario (string Nome, string ID);
    void AdicionarServico(Data);
    Permissao getPermissao();

};
#endif