#include "../../Arquivos-h/Modulo 1/unidadeConsumidora.h"
#include <list>

UnidadeConsumidora::UnidadeConsumidora(string endereco){
  this->endereco = endereco;
  this->ativo = true;
  this->inadimplente = false;
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
  cout << getEndereco()<< "(";
  if(this->getAtivo())
    cout << "Ativo)" <<endl;
  else
    cout << "Desativado)" <<endl;
  for(Fatura it : listaFaturas){
    it.imprimirFatura();
  }
}

void UnidadeConsumidora::setAtivo(bool ativo) {
  this->ativo = ativo;
}

bool UnidadeConsumidora::getInadimplente(){
  
  return this->inadimplente;
}

void UnidadeConsumidora::verificaInadimplente(){
  
  for (Fatura it : listaFaturas){
    if(it.getDiasAtraso() > 0){
      this->inadimplente = true;
      break;
    }else{
      this->inadimplente = false;
    }
  }
  
}

UnidadeConsumidora::UnidadeConsumidora(){
  
}

void UnidadeConsumidora::AdicionarFatura(Fatura fat){
  this->listaFaturas.push_back(fat);
}