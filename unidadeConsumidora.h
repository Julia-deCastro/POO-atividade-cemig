#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "fatura.h"
#include <iostream>
#include <vector>

using namespace std;

class UnidadeConsumidora {

    public:
        int id_uc;
        string endereco;
        std::vector<Fatura> listaFatura;
        int cont_uc = 1;

        UnidadeConsumidora(string endereco);
        void AdicionarFatura(Fatura fat);       

};

#endif