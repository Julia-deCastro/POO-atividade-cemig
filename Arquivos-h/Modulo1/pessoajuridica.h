#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include<iostream>
#include <vector>
#include "cliente.h"

using namespace std;

class PessoaJuridica: public Cliente{

    public: 
        string getCNPJ();
        void cadastrarCNPJ(string cnpj, string nome);
        void CadastrarCliente(string nome);

    private:
        string cnpj;

};

#endif