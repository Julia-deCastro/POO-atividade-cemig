#include "../../Arquivos-h/Modulo2/servico.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include <iostream>

using namespace std;

/*
void Servico::RegistraServico(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}*/

Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
  hoje.setDia(26);
  hoje.setMes(05);
  hoje.setAno(2022); 

  return hoje;
}

Data Servico::getDataPlanejada(){
  return this->dataPlanejada;
}

Data Servico::getDataExecucao() {
  return this->dataExecucao;
}

void Servico::setDataPlanejada(Data planejada) {
  this->dataPlanejada = planejada;
}

void Servico::setDataExecucao(Data execucao) {
  int dia = this->getDataPlanejada().diffData(execucao);
  if (dia < 0) throw Erro("Data de execucao menor que a data planejada!");
  this->dataExecucao = execucao;
}


Servico::Servico(Data dataPlanejada, UnidadeConsumidora unidconsm){
  
    int dia = hoje().diffData(dataPlanejada);
    if (dia < 0) throw Erro("Data inválida!");

    this->dataPlanejada = dataPlanejada;
    this->unidade = unidconsm;
}

Servico::Servico(){
  
}