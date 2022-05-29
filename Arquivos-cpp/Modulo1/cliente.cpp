#include "../../Arquivos-h/Modulo1/cliente.h"
#include "../../Arquivos-h/Modulo1/unidadeConsumidora.h"
#include <iostream>

using namespace std;

void Cliente::CadastrarCliente (string nome) {
  this->nome = nome;
  this->inadimplente = false;
}

void Cliente::AdicionarUnidade (string endereco){
  UnidadeConsumidora u = UnidadeConsumidora(endereco);
  this->listaUnidades.push_back(u);
}
  
float Cliente::CalcularPagamento(){ 
  vector<UnidadeConsumidora>::iterator i;
  vector<Fatura>::iterator j;
  
  float valor = 0;
  for(UnidadeConsumidora i : listaUnidades){
    cout << i.listaFaturas.size();
    for(Fatura j : i.listaFaturas){
      if(j.getQuitado() == 0){
        valor += j.getValorFatura() + j.calcularJuros();
      }
    }    
  }
  return valor;
}

UnidadeConsumidora Cliente::PesquisarUnidade(string endereco){
  vector<UnidadeConsumidora>::iterator it;
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if (it->getEndereco() == endereco){
      return *it;
    }
  }
}

void Cliente::ImprimeListaFaturasPagas(){
  for (Fatura it : listaFaturasPagas){
    it.imprimirFatura();
  }
}

void Cliente::ImprimeListaUnidades(){
  int i=1;
  for (UnidadeConsumidora it : listaUnidades){
    cout<< endl << "Unidade " << i << ": ";
    it.ImprimirUnidadeConsumidora();
    i++;
  }
  cout << endl;
}

string Cliente::getNome(){

  return this->nome;
}

bool Cliente::getInadimplente(){
  
  return this->inadimplente;

}

void Cliente::AdicionarFatura(Fatura fat, string endereco){
  /* vector<UnidadeConsumidora>::iterator it; */
  for (UnidadeConsumidora i: listaUnidades){
    if (i.getEndereco() == endereco){
        i.AdicionarFatura(fat);
    }
  }
}

void Cliente::ImprimirFaturasDasUnidades(string end){
  for (UnidadeConsumidora i: listaUnidades){
    if (i.getEndereco() == end){
        i.imprimirListaFaturas();
    }
  }

  
}