#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H

#include "./cliente.h"
#include "./pessoafisica.h"
#include "./pessoajuridica.h"
#include<iostream>
#include <vector>

class Lista_Cliente{

    public:
        std::vector <PessoaFisica> listaClienteCPF;
        std::vector <PessoaJuridica> listaClienteCNPJ;
       
        std::vector <PessoaFisica> listainadimplentesCPF;
        std::vector <PessoaJuridica> listainadimplentesCNPJ;


        void AdicionarClienteCPF(PessoaFisica cliente);
        void AdicionarClienteCNPJ(PessoaJuridica cliente);

        void AdicionarinadimplenteCPF(PessoaFisica cliente);
        void AdicionarinadimplenteCNPJ(PessoaJuridica cliente);

        void RemoverClienteCPF(PessoaFisica cliente);
        void RemoverClienteCNPJ(PessoaJuridica cliente);


        void RemoverinadimplenteCPF(PessoaFisica cliente);
        void RemoverinadimplenteCNPJ(PessoaJuridica cliente);


};

#endif