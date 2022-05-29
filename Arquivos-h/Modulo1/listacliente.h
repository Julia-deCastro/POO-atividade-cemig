#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H

#include "cliente.h"

#include<iostream>
#include <vector>

class Lista_Cliente{

    public:
        std::vector <Cliente> listaCliente;
        std::vector <Cliente> listaInadiplentes;

        void AdicionarCliente(Cliente cliente);
        void AdicionarInadiplente(Cliente cliente);
        void RemoverCliente(Cliente cliente);
        void RemoverInadiplente(Cliente cliente);

};

#endif