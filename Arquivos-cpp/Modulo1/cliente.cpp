#include "../../Arquivos-h/Modulo 1/cliente.h"
#include "../../Arquivos-h/Modulo 1/unidadeConsumidora.h"
#include <iostream>

using namespace std;

void Cliente::CadastrarCliente (string nome) {
  this->nome = nome;
  this->inadiplente = false;
}

void Cliente::AdicionarUnidade (string endereco){
  UnidadeConsumidora u = UnidadeConsumidora(endereco);
  this->listaUnidades.push_back(u);
}
  
float Cliente::CalcularPagamento(){
  vector<UnidadeConsumidora>::iterator i;
  vector<Fatura>::iterator j;
  float valor = 0;
  for(i = listaUnidades.begin(); i != listaUnidades.end(); i++){
    for(j = i->listaFatura.begin(); j != i->listaFatura.end(); j++){
      if (j->quitado == 0){
        valor += j->valorFatura + j->calcularJuros();
      }
    }
  }
  return valor;
}

UnidadeConsumidora Cliente::PesquisarUnidade(string endereco){
  vector<UnidadeConsumidora>::iterator it;
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if (it->endereco == endereco)
      return *it;
  }
}

bool Cliente::EstaInadiplente() {
 return this->inadiplente;
};  

