#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "fatura.h"
#include<iostream>
#include <vector>

using namespace std;

class Cliente {

  public:
    std::string nome;
    bool inadiplente;       
    std::vector<UnidadeConsumidora> listaUnidades;
    std::vector<Fatura> listaFaturasPagas;

    void CadastrarCliente (string);
    void AdicionarUnidade (string endereco);
    float CalcularPagamento();
    bool EstaInadiplente();        
    UnidadeConsumidora PesquisarUnidade(string endereco);

};

#endif