#include "../../Arquivos-h/Modulo1/pessoajuridica.h"
#include <iostream>

using namespace std;

void PessoaJuridica::cadastrarCNPJ (string cnpj){
  this->cnpj = cnpj;
}

string PessoaJuridica::getCNPJ(){
 
  return this->cnpj;
}
        