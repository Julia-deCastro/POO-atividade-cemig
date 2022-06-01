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

Servico::Servico(){
  
}

Servico::Servico(string idFuncionario, Data data, UnidadeConsumidora unidconsm){
    this->funcionarioId = idFuncionario;
    this->data = data;
    this->unidade = unidconsm;
}


// Funcionario Servico::getFuncionario(){
//   return this->funcionario;
// }