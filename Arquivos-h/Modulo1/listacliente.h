#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H

#include "cliente.h"

#include<iostream>
#include <vector>

class Lista_Cliente{

    public:
        std::vector <Cliente> listaCliente;
        std::vector <Cliente> listainadimplentes;

        void AdicionarCliente(Cliente cliente);
        void Adicionarinadimplente(Cliente cliente);
        void RemoverCliente(Cliente cliente);
        void Removerinadimplente(Cliente cliente);

};

#endif