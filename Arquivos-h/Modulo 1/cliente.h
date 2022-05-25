#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "fatura.h"
#include <iostream>
#include <vector>

using namespace std;

class Cliente {

  public:
    string nome;
    bool inadiplente;        
  
  public:

    void CadastrarCliente(string nome);
    void AdicionarUnidade (string endereco);
    float CalcularPagamento();
    bool EstaInadiplente();        
    UnidadeConsumidora PesquisarUnidade(string endereco);
    void ImprimeListaFaturasPagas();
    void ImprimeListaUnidades();

  private:
    vector<UnidadeConsumidora> listaUnidades;
    vector<Fatura> listaFaturasPagas;
};

#endif