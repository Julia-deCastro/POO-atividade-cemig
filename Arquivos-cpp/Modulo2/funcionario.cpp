#include "../../Arquivos-h/Modulo2/funcionario.h"
#include <iostream>

using namespace std;
int::Funcionario::cont_id = 0;

Funcionario::Funcionario(string nome){

  cont_id++;
  this->Nome = nome;
  this->ID = cont_id;

}

string Funcionario::getNome(){
  return this->Nome;
}
string Funcionario::getID(){
  return this->ID;
}

Leitura Funcionario::getLeitura() { //verificar
  return this->leitura;
}

Inadimplencia Funcionario::getInadimplencia() { //verificar
  return this->inadimplencia;
}

Encerramento Funcionario::getEncerramento() { //verificar
  return this->encerramento;
}

LigacaoNova Funcionario::getLigacaoNova() { //verificar
  return this->ligacao_nova;
}

trocaMedidor Funcionario::gettrocaMedidor() { //verificar
  return this->troca_medidor;
}

ReligacaoPagamento Funcionario::getReligacaoPagamento() { //verificar
  return this->religacao_pagamento;
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

void Funcionario::FuncionarioRealizarLeitura(float leitura1, Data data, UnidadeConsumidora unidade){ //letura1 para nao causar conflito com o leitura
  Leitura leitura = getLeitura();
  leitura.RealizarLeitura(leitura1, data, unidade); //ou this->leitura.RealizarLeitura(leitura1, data, unidade); 
  listaServicos.push_back(Servico(data, unidade));
}

void Funcionario::FuncionarioRealizarLigacaoNova(Data data, UnidadeConsumidora unidade){
  LigacaoNova ligacao_nova = getLigacaoNova();
  ligacao_nova.ligarUnidade(unidade, data);
  listaServicos.push_back(Servico(data, unidade));
}

void Funcionario::FuncionarioRegistrarInadimplente(Data data, UnidadeConsumidora unidade){
  Inadimplencia inadimplencia = getInadimplencia();
  inadimplencia.desligarUnidade(data, unidade);
  listaServicos.push_back(Inadimplencia(data, unidade));
}

void Funcionario::FuncionarioReligacaoPagamento(Data data, UnidadeConsumidora unidade){
  ReligacaoPagamento religacao_pagamento = getReligacaoPagamento();
  religacao_pagamento.religarUnidade(unidade, data);
  listaServicos.push_back(ReligacaoPagamento(data, unidade));
}

void Funcionario::FuncionarioTrocarMedidor(Data data, UnidadeConsumidora unidade){
  listaServicos.push_back(trocaMedidor(data, unidade));
}

int Funcionario::NumeroServicos(){
  return this->listaServicos.size();
}