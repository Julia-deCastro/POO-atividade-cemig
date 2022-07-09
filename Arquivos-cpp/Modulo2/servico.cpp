#include "../../Arquivos-h/Modulo2/servico.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include "../../Arquivos-h/Geral/Hoje.h"

#include <iostream>

using namespace std;

/*
void Servico::RegistraServico(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}*/


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
  
    Hoje hoje;

    int dia = hoje.hoje().diffData(dataPlanejada);
    if (dia < 0) throw Erro("Data inválida!");

    this->dataPlanejada = dataPlanejada;
    this->unidade = unidconsm;
}

Servico::Servico(){
  
}