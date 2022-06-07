#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "fatura.h"
#include "../Modulo2/usuario.h"
#include "../Geral/endereco.h"
#include <iostream>
#include <vector>

using namespace std;

class Cliente : public Usuario {
       
  
  public:

    Cliente(){};
    Cliente(string nome);
    Cliente(string nome, Endereco end);
    virtual void AdicionarUnidade (Endereco endereco);
    virtual float CalcularPagamento();
    UnidadeConsumidora* PesquisarUnidade(Endereco endereco);
    string getNome();
    bool getInadimplente();
    Endereco getEndereco();
    void ImprimeListaFaturasPagas();
    void ImprimeListaUnidades();
    void AdicionarFatura(Fatura *fat, Endereco Endereco);
    void ImprimirFaturasDasUnidades(Endereco Endereco);
    void QuitarFaturaCliente(Endereco endereco, int id); 

  private:
    vector<UnidadeConsumidora*> listaUnidades;
    string nome;
    bool inadimplente;
    vector<Fatura*> listaFaturasPagas;
    Endereco end;
  
    
};

#endif