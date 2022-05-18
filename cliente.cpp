#include "cliente.h"
#include "unidadeConsumidora.h"
#include <iostream>

using namespace std;

void Cliente::CadastrarCliente (string nome) {
  this->nome = nome;
  this->inadiplente = false;
}

void Cliente::AdicionarUnidade (string endereco){
  UnidadeConsumidora u = UnidadeConsumidora(endereco);
  this->ListaUnidades.push_back(u)
}
  
float Cliente::CalcularPagamento(){

}

UnidadeConsumidora Cliente::PesquisarUnidade(string endereco){
  vector<UnidadeConsumidora>::iterator it;
  for (it = ListaUnidades.begin(); it != ListaUnidades.end(); it++){
    if (it->endereco == endereco)
      return it;
}



void Cliente::EstaInadiplente() {

  if (this->inadiplente){
    cout << "O cliente está inadiplente" << endl
  } 
  else {
    cout << "O cliente está em dia" << endl
  }
};  