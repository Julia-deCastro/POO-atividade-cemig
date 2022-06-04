#include "../../Arquivos-h/Modulo2/funcionario.h"
#include <iostream>

using namespace std;

void Funcionario::CadastrarFuncionario(string nome, string ID){

  this->Nome = nome;
  this->ID = ID;
  
}

string Funcionario::getNome(){
  return this->Nome;
}
string Funcionario::getID(){
  return this->ID;
}

void Funcionario::AdicionarServico(Servico servico, Data hoje){
  int numServicos = 0;
  
  for (Servico it : listaServicos){
    if(it.getData().getDia() == hoje.getDia() && it.getData().getMes() == hoje.getMes() && it.getData().getAno() == hoje.getAno())
      numServicos ++;
  }

  if(numServicos < 8)
    this->listaServicos.push_back(servico);

  else
    cout << "Limite de serviços do dia atingido" << endl;
}

void Funcionario::FuncionarioRealizarLeitura(float leitura, Data data, UnidadeConsumidora unidade){
  this->leitura.RealizarLeitura(leitura, data, unidade);
  listaServicos.push_back(Servico(data, unidade));
}

void Funcionario::FuncionarioRealizarLigacaoNova(Data data, UnidadeConsumidora unidade){
  this->ligacao_nova.ligarUnidade(unidade, data);
  listaServicos.push_back(Servico(data, unidade));
}

void Funcionario::FuncionarioRegistrarInadimplente(Data data, UnidadeConsumidora unidade){
  this->inadimplencia.desligarUnidade(data, unidade);
  listaServicos.push_back(Inadimplencia(data, unidade));
}

void Funcionario::FuncionarioReligacaoPagamento(Data data, UnidadeConsumidora unidade){
  this->religacao_pagamento.religarUnidade(unidade, data);
  listaServicos.push_back(ReligacaoPagamento(data, unidade));
}

void Funcionario::FuncionarioTrocarMedidor(Data data, UnidadeConsumidora unidade){
  listaServicos.push_back(trocaMedidor(data, unidade));
}