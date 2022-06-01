#include "../../Arquivos-h/Modulo1/cliente.h"
#include "../../Arquivos-h/Modulo1/unidadeConsumidora.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Cliente::CadastrarCliente (string nome) {
  this->nome = nome;
  this->inadiplente = false;
}

void Cliente::AdicionarUnidade (string endereco){
  UnidadeConsumidora * u = new UnidadeConsumidora(endereco);

  listaUnidades.push_back(u);
}
  
float Cliente::CalcularPagamento(){ 
  vector<UnidadeConsumidora*>::iterator i;
  vector<Fatura*>::iterator j;
  
  float valor = 0;
  for (i=listaUnidades.begin(); i!=listaUnidades.end(); i++) {
    for(j=(*i)->listaFaturas.begin(); j!=(*i)->listaFaturas.end(); j++){
      if((*j)->getQuitado() == false){
        valor += (*j)->getValorFatura() + (*j)->calcularJuros();
      }
    }    
  }
  return valor;
}


UnidadeConsumidora Cliente::PesquisarUnidade(string endereco){
  vector<UnidadeConsumidora*>::iterator it;
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if ((*it)->getEndereco() == endereco){
      return **it;
    }
  }
}


void Cliente::ImprimeListaFaturasPagas(){
  for (Fatura it : listaFaturasPagas){
    it.imprimirFatura();
  }
}

void Cliente::ImprimeListaUnidades(){
  vector<UnidadeConsumidora*>::iterator it;
  int i=1;

  for (it=listaUnidades.begin(); it!=listaUnidades.end(); it++) {
    cout<< endl << "Unidade " << i << ": ";
    (*it)->ImprimirUnidadeConsumidora();
    i++;
  }
  cout << endl;

}

string Cliente::getNome(){

  return this->nome;
}

bool Cliente::getInadimplente(){
  
  return this->inadiplente;

}

void Cliente::AdicionarFatura(Fatura *fat, string endereco){
  vector<UnidadeConsumidora*>::iterator it;
  
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){ 
    if ((*it)->getEndereco() == endereco){
      (*it)->AdicionarFaturaUnidade(fat);
    }
  } 
}


void Cliente::ImprimirFaturasDasUnidades(string end){
  
  vector<UnidadeConsumidora*>::iterator it;
  
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if ((*it)->getEndereco() == end){
        (*it)->imprimirListaFaturas();
    }
  }
  
}