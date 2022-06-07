#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H

#include "cliente.h"

#include<iostream>
#include <vector>

class Lista_Cliente{

    private:
        std::vector <Cliente> listaCliente;
        std::vector <Cliente> listainadimplentes;

    public:
        void AdicionarCliente(Cliente cliente);
        void Adicionarinadimplente(Cliente cliente);
        void RemoverCliente(Cliente cliente);
        void Removerinadimplente(Cliente cliente);

};

#endif