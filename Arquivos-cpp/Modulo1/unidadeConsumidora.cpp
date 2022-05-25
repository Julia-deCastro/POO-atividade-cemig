#include "unidadeConsumidora.h"
#include <list>

UnidadeConsumidora::UnidadeConsumidora(string endereco){
  this->endereco = endereco;
  this->ativo = 1;
}

void UnidadeConsumidora::AdicionarFatura(Fatura fat){
  this->listaFaturas.push_back(fat);
}

bool UnidadeConsumidora::getAtivo(){
  return this->ativo;
}

string UnidadeConsumidora::getEndereco(){
  return this->endereco;
}

void UnidadeConsumidora::imprimirListaFaturas(){
  for (Fatura it : listaFaturas){
    it.imprimirFatura();
  }
}
void UnidadeConsumidora::ImprimirUnidadeConsumidora(){
  cout << getEndereco();
  cout << getAtivo();
  for(Fatura it : listaFaturas){
    it.imprimirFatura();
  }
}