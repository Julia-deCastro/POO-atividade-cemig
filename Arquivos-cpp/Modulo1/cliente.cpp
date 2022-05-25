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
  float valor = 0;
  for(UnidadeConsumidora i : listaUnidades){
    for(Fatura j : i.listaFaturas){
      if(j.getQuitado() == 0)
        valor += j.getValorFatura() + j.calcularJuros();
    }
  }
  return valor;
}

UnidadeConsumidora Cliente::PesquisarUnidade(string endereco){
  vector<UnidadeConsumidora>::iterator it;
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if (it->getEndereco() == endereco)
      return *it;
  }
}

bool Cliente::EstaInadiplente() {
 return this->inadiplente;
};

void Cliente::ImprimeListaFaturasPagas(){
  for (Fatura it : listaFaturasPagas){
    it.imprimirFatura();
  }
}

void Cliente::ImprimeListaUnidades(){
  for (UnidadeConsumidora it : listaUnidades){
    it.ImprimirUnidadeConsumidora();
  }
}

