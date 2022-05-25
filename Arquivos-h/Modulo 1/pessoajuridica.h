#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include<iostream>
#include <vector>
#include "cliente.h"

using namespace std;

class PessoaJuridica: public Cliente{

    public:

        string cnpj;

        void cadastrarCNPJ (string);

};

#endif