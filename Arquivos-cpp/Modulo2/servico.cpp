#include "../../Arquivos-h/Modulo2/servico.h"
#include <iostream>

using namespace std;

/*
void Servico::RegistraServico(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}*/

Data Servico::getData(){
  return this->data;
}
UnidadeConsumidora Servico::getUnidadeConsumidora(){
  return this->unidade;
}

Servico::Servico(string nomeFuncionario, string idFuncionario, Data data, UnidadeConsumidora unidconsm){
    this->getFuncionario().CadastrarFucnionario(nomeFuncionario, idFuncionario);
    this->data = data;
    this->unidade = unidconsm;
}

Servico::Servico(){
  
}

Funcionario Servico::getFuncionario(){
  return this->funcionario;
}