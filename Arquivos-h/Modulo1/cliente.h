#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "fatura.h"
#include "../Geral/endereco.h"
#include <iostream>
#include <vector>

using namespace std;

class Cliente {
       
  
  public:

    Cliente(){};
    Cliente(string nome);
    Cliente(string nome, Endereco end);
    void AdicionarUnidade (Endereco endereco);
    float CalcularPagamento();
    UnidadeConsumidora* PesquisarUnidade(Endereco endereco);
    string getNome();
    bool getInadimplente();
    Endereco getEndereco();
    void ImprimeListaFaturasPagas();
    void ImprimeListaUnidades();
    vector<UnidadeConsumidora*> listaUnidades;
    void AdicionarFatura(Fatura *fat, Endereco Endereco);
    void ImprimirFaturasDasUnidades(Endereco Endereco);
    void QuitarFaturaCliente(Endereco endereco, int id); 

  private:
    string nome;
    bool inadimplente;
    vector<Fatura*> listaFaturasPagas;
    Endereco end;
  
    
};

#endif