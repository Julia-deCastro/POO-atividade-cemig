#ifndef CLIENTE_H
#define CLIENTE_H

//#include "UnidadeConsumidora.h"
#include "fatura.h"
#include<iostream>
#include <vector>

using namespace std;

class Cliente {

  public:
    std::string nome;
    bool inadiplente;        
    //std::vector<UnidadeConsumidora> ListaUnidades;
    std::vector<Fatura> ListaFaturasPagas;
    void CadastrarCliente (string, bool);
    //void AdicionarUnidade (string endereco);
    float CalcularPagamento();
    void EstaInadiplente();        
    //UnidadeConsumidora PesquisarUnidade();

};

#endif