#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "./servico.h"
#include "./usuario.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo2/leitura.h"
#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include "../../Arquivos-h/Modulo2/encerramento.h"
#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include "../../Arquivos-h/Modulo2/religacaoPagamento.h"

using namespace std;

class Funcionario : public Usuario {

  private:
    string Nome;
    string ID;
    Leitura leitura;
    Inadimplencia inadimplencia;
    Encerramento encerramento;
    LigacaoNova ligacao_nova;
    trocaMedidor troca_medidor;
    ReligacaoPagamento religacao_pagamento;
    

  public:

    string getNome();
    string getID();
    Leitura getLeitura();
    Inadimplencia getInadimplencia();
    Encerramento getEncerramento();
    LigacaoNova getLigacaoNova();
    trocaMedidor gettrocaMedidor();
    ReligacaoPagamento getReligacaoPagamento();
    
    vector<Servico> listaServicos;

    void CadastrarFuncionario (string Nome, string ID);
    void AdicionarServico(Servico, Data);
    void FuncionarioRealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade);
    void FuncionarioRegistrarInadimplente(Data data, UnidadeConsumidora unidade);
    void FuncionarioRealizarLigacaoNova(Data data, UnidadeConsumidora unidade);
    void FuncionarioReligacaoPagamento(Data data, UnidadeConsumidora unidade);
    void FuncionarioTrocarMedidor(Data data, UnidadeConsumidora unidade);

};
#endif