#ifndef FUNCIONARIO_H
#define  FUNCIONARIO_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo2/leitura.h"
#include "../../Arquivos-h/Modulo2/inadimplencia.h"
#include "../../Arquivos-h/Modulo2/encerramento.h"
#include "../../Arquivos-h/Modulo2/ligacaoNova.h"
#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include "../../Arquivos-h/Modulo2/religacaoPagamento.h"

using namespace std;

class Funcionario{

  private:
    string Nome;
    string ID;
    
  public:

    void CadastrarFuncionario (string Nome, string ID);
    string getNome();
    string getID();
    Leitura leitura;
    Inadimplencia inadimplencia;
    Encerramento encerramento;
    LigacaoNova ligacao_nova;
    trocaMedidor troca_medidor;
    ReligacaoPagamento religacao_pagamento;

    vector<Servico> listaServicos;
    void AdicionarServico(Servico, Data);
    void FuncionarioRealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade);
    void FuncionarioRegistrarInadimplente(Data data, UnidadeConsumidora unidade);
    void FuncionarioRealizarLigacaoNova(Data data, UnidadeConsumidora unidade);
    void FuncionarioReligacaoPagamento(Data data, UnidadeConsumidora unidade);
    void FuncionarioTrocarMedidor(Data data, UnidadeConsumidora unidade);

};
#endif