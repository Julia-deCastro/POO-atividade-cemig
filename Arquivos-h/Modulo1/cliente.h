#ifndef CLIENTE_H
#define CLIENTE_H

#include "unidadeConsumidora.h"
#include "../../Arquivos-h/Modulo3/Usuario.h"
#include "../../Arquivos-h/Modulo3/Permissao.h"
#include "fatura.h"
#include <iostream>
#include <vector>
#include "../../Arquivos-h/log/LogEscrita.h"
#include "../../Arquivos-h/log/LogLeitura.h"
#include "../../Arquivos-h/log/listaLog.h"
#include "../../Arquivos-h/Geral/Hoje.h"

using namespace std;

class Cliente:public Usuario{
       
  
  public:

    Cliente();
    void AdicionarUnidade (Endereco endereco, string numeroInstalacao, string nivelDeTensao, int tensaoDeAtendimento);
    virtual float CalcularPagamento() = 0;
    UnidadeConsumidora* PesquisarUnidade(Endereco endereco);
    void ImprimeListaFaturasPagas(); 
    void ImprimeListaUnidades();
    vector<UnidadeConsumidora*> listaUnidades;
    void AdicionarFatura(Fatura *fat, Endereco Endereco);
    void ImprimirFaturasDasUnidades(Endereco Endereco);
    void QuitarFaturaCliente(Endereco endereco, int id);
    Permissao* getPermissao();

   
    string getNome();
    bool getInadimplente();
    Endereco getEndereco();
    string getTelefone(); 
    string getEmail(); 

    void setNome(string nome);
    void setInadimplente(bool inadimplente);
    void setEndereco(Endereco endereco);
    void setTelefone(string telefone);
    void setEmail (string email);
   


    

  private:
    string nome;
    bool inadimplente;
    vector<Fatura*> listaFaturasPagas;
    Permissao* permissao;
    Endereco endereco;
    string email;
    string telefone;
    ListaLog listaLog;

    
    
};

#endif