#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "cliente.h"
#include<iostream>
#include <vector>

using namespace std;

class PessoaFisica: public Cliente{

    public:

        string cpf;

        void cadastrarCPF (string cpf);

};

#endif