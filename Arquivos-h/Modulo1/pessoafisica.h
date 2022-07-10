#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "./cliente.h"
#include<iostream>
#include <vector>

using namespace std;

class PessoaFisica: public Cliente{
  
  private:
    string cpf;

  public:
    PessoaFisica(string nome, string cpf, string email, string telefone, Endereco endereco);
    PessoaFisica();
    string getCPF();
    virtual float CalcularPagamento();
    void AdicionarPermissaoCPF(string metodo);
  

};

#endif