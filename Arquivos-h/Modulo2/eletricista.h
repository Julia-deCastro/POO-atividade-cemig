#ifndef ELETRICISTA_H
#define ELETRICISTA_H

#include "./funcionario.h"
#include "./inadimplencia.h"
#include "./encerramento.h"
#include "./ligacaoNova.h"
#include "./religacaoPagamento.h"
#include "./trocaMedidor.h"
#include "../Geral/Data.h"

class Eletricista : public Funcionario {

    public:
        void CadastrarFuncionario (string Nome, string ID);
        void AdicionarServico(Data);
        

};

#endif
