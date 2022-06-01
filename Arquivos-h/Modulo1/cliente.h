#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "fatura.h"
#include <iostream>
#include <vector>

using namespace std;

class Cliente {
       
  
  public:

    void CadastrarCliente(string nome);
    void AdicionarUnidade (string endereco);
    float CalcularPagamento();
    UnidadeConsumidora PesquisarUnidade(string endereco);
    string getNome();
    bool getInadimplente();
    void ImprimeListaFaturasPagas();
    void ImprimeListaUnidades();
    vector<UnidadeConsumidora*> listaUnidades;
    vector<Fatura> listaFaturasPagas;
    void AdicionarFatura(Fatura *fat, string Endereco);
    void ImprimirFaturasDasUnidades(string Endereco);

  private:
    string nome;
    bool inadiplente;
    
};

#endif