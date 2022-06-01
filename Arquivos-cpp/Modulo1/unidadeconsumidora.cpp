#include "../../Arquivos-h/Modulo1/unidadeConsumidora.h"
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
  for (Fatura* it : listaFaturas){
    it->imprimirFatura();
  }
}
void UnidadeConsumidora::ImprimirUnidadeConsumidora(){
  cout << this->getEndereco()<< "(";
  if(this->getAtivo())
    cout << "Ativo)" <<endl;
  else
    cout << "Desativado)" <<endl;
  for(Fatura* it : listaFaturas){
    it->imprimirFatura();
  }
}

void UnidadeConsumidora::setAtivo(bool ativo) {
  this->ativo = ativo;
}

bool UnidadeConsumidora::getInadimplente(){
  
  return this->inadimplente;
}

void UnidadeConsumidora::verificaInadimplente(){
  
  for (Fatura* it : listaFaturas){
    if(it->getDiasAtraso() > 0){
      this->inadimplente = true;
      break;
    }else{
      this->inadimplente = false;
    }
  }
  
}

UnidadeConsumidora::UnidadeConsumidora(){
  
}

void UnidadeConsumidora::AdicionarFaturaUnidade(Fatura *fat){  
  listaFaturas.push_back(fat);
}

Fatura* UnidadeConsumidora::PesquisarFatura(int id){
  vector<Fatura*>::iterator it;
  for (it = listaFaturas.begin(); it != listaFaturas.end(); it++){
    if ((*it)->getId() == id){
      return *it;
    }
  }
}