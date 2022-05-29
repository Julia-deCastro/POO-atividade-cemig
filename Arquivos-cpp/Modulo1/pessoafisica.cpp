#include "../../Arquivos-h/Modulo1/pessoafisica.h"
#include <iostream>

using namespace std;

void PessoaFisica::cadastrarCPF (string cpf){
  this->cpf = cpf;
}

string PessoaFisica::getCPF(){
 
  return this->cpf;
}