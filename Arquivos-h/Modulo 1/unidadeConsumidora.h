#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "cliente.h"
#include "fatura.h"
#include <iostream>
#include <vector>

using namespace std;

class UnidadeConsumidora {

    public:

        string getEndereco();
        bool getAtivo();
        void imprimirListaFaturas();
        UnidadeConsumidora(string endereco);
        void AdicionarFatura(Fatura fat);
        void ImprimirUnidadeConsumidora();
        std::vector<Fatura> listaFaturas;       

    private:
        string endereco;
        bool ativo; 
};

#endif