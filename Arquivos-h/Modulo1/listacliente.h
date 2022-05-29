#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H

#include "cliente.h"

#include<iostream>
#include <vector>

class Lista_Cliente{

    public:
        std::vector <Cliente> listaCliente;
        std::vector <Cliente> listaInadimplentes;

        void AdicionarCliente(Cliente cliente);
        void AdicionarInadimplente(Cliente cliente);
        void RemoverCliente(Cliente cliente);
        void RemoverInadimplente(Cliente cliente);

};

#endif