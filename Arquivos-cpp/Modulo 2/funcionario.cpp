#include "../../Arquivos-h/Modulo 2/funcionario.h"
#include <iostream>

using namespace std;

void Funcionario::CadastrarFucnionario(string nome, string ID){

  this->Nome = nome;
  this->ID = ID;
  
}

string Funcionario::getNome(){
  return this->Nome;
}
string Funcionario::getID(){
  return this->ID;
}