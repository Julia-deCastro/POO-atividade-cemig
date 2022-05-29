#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "cliente.h"
#include<iostream>
#include <vector>

using namespace std;

class PessoaFisica: public Cliente{
  
  private:
    string cpf;

  public:
    void cadastrarCPF(string cpf);
    string getCPF();

};

#endif