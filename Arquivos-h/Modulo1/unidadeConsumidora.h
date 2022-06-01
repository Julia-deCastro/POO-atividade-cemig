#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "fatura.h"
#include "../Geral/Data.h"
#include "../Geral/ExecaoCustomizada.h"
#include <iostream>
#include <vector>

using namespace std;

class UnidadeConsumidora {

    public:

        string getEndereco();
        bool getAtivo();
        void setAtivo(bool);
        void imprimirListaFaturas();
        UnidadeConsumidora(string endereco);
        UnidadeConsumidora();
        void ImprimirUnidadeConsumidora();
        vector<Fatura*> listaFaturas;       
        bool getInadimplente();
        void verificaInadimplente();
        void AdicionarFaturaUnidade(Fatura * fat);
        Fatura* PesquisarFatura(int id);
        
    private:
        bool inadimplente;
        string endereco;
        bool ativo; 
};

#endif