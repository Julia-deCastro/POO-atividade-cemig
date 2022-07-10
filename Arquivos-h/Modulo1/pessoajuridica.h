#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include<iostream>
#include <vector>
#include "cliente.h"

using namespace std;

class PessoaJuridica: public Cliente{

    public: 
        string getCNPJ();
        PessoaJuridica();
        PessoaJuridica(string cnpj, string nome, string email, string telefone, Endereco endereco);
        virtual float CalcularPagamento();

    private:
        string cnpj;

};

#endif