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

Servico::Servico(Data data, UnidadeConsumidora unidconsm){
    this->data = data;
    this->unidade = unidconsm;
}

Servico::Servico(){
  
}