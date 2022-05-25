#include "../../Arquivos-h/Modulo 2/servico.h"
#include <iostream>

using namespace std;

void Servico::RegistraServico(Data data,UnidadeConsumidora unidade, Funcionario funcionario){
  
  this->data = data;
  this->unidade = unidade;
  this->funcionario = funcionario;
  
}

Data Servico::getData(){
  return this->data;
}
UnidadeConsumidora Servico::getUnidadeConsumidora(){
  return this->unidade;
}