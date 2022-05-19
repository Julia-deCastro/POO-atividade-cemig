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
        std::vector<Fatura> listaFatura;

        UnidadeConsumidora(string endereco);
        void AdicionarFatura(Fatura fat);       

};

#endif