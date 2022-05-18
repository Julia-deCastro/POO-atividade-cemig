#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "cliente.h"
#include "fatura.h"
#include <iostream>
#include <vector>

using namespace std;

class UnidadeConsumidora {

    public:

        string endereco;
        Cliente dono;
        std::vector<Fatura> listaFatura;

        UnidadeConsumidora(string endereco, Cliente dono);
        void AdicionarFatura(Fatura fat);       

};

#endif