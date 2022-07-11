#include "../../Arquivos-h/Modulo1/cliente.h"
#include "../../Arquivos-h/Modulo1/unidadeConsumidora.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include <iostream>
#include <algorithm>

using namespace std;

/* string* (string metodo){
  string* metodo2 = new string(metodo);
  return metodo2;
} */

Cliente::Cliente(){
}

void Cliente::AdicionarUnidade (Endereco endereco, string numeroInstalacao, string nivelDeTensao, int tensaoDeAtendimento){
  if(this->permissao->verificaPermissao(("AdicionarUnidade")) == false)
    throw Erro("Permissao negada");

  
  
  UnidadeConsumidora * u = new UnidadeConsumidora(endereco, numeroInstalacao, nivelDeTensao, tensaoDeAtendimento);
  listaUnidades.push_back(u);


  string estadoAnterior;

  if(listaUnidades.size() == 0){
    estadoAnterior = "Lista de Unidades Vazia";
  }
  else{
    estadoAnterior="Lista";
  }




  Hoje hoje;
  LogEscrita* log = new LogEscrita();
  log->criarLogEscrita(this->nome, hoje.hoje(), "Cliente", estadoAnterior);

}
  
float Cliente::CalcularPagamento(){ 
  if(this->permissao->verificaPermissao(("CalcularPagamento")) == false)
    throw Erro("Permissao negada");
  
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


UnidadeConsumidora* Cliente::PesquisarUnidade(Endereco endereco){
  if(this->permissao->verificaPermissao(("PesquisarUnidade")) == false)
    throw Erro("Permissao negada");
  
  vector<UnidadeConsumidora*>::iterator it;
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){
    if ((*it)->getEndereco() == endereco){
      return *it;
    }
  }
  UnidadeConsumidora* nulo = nullptr;
  return nulo;
}


void Cliente::ImprimeListaFaturasPagas(){
  if(this->permissao->verificaPermissao("ImprimeListaFaturasPagas") == false)
    throw Erro("Permissao negada");
  for (Fatura* it : listaFaturasPagas){
    it->imprimirFatura();
  }
}

void Cliente::ImprimeListaUnidades(){
    if(this->permissao->verificaPermissao("ImprimeListaUnidades") == false)
      throw Erro("Permissao negada");
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
  if(this->permissao->verificaPermissao("getNome") == false)
    throw Erro("Permissao negada");
  return this->nome;
}

bool Cliente::getInadimplente(){
  if(this->permissao->verificaPermissao("getInadimplente") == false)
    throw Erro("Permissao negada");
  return this->inadimplente;

}

void Cliente::AdicionarFatura(Fatura *fat, Endereco endereco){
  if(this->permissao->verificaPermissao("AdicionarFatura") == false)
    throw Erro("Permissao negada");
  
  vector<UnidadeConsumidora*>::iterator it;
  
  for (it = listaUnidades.begin(); it != listaUnidades.end(); it++){ 
    if ((*it)->getEndereco() == endereco){
      (*it)->AdicionarFaturaUnidade(fat);
    }
  } 
}


void Cliente::ImprimirFaturasDasUnidades(Endereco end){
  if(this->permissao->verificaPermissao("ImprimirFaturasDasUnidades") == false)
    throw Erro("Permissao negada");
  
  PesquisarUnidade(end)->imprimirListaFaturas();
  
}

void Cliente::QuitarFaturaCliente(Endereco endereco, int id){
  
  if(this->permissao->verificaPermissao("QuitarFaturaCliente") == false)
    throw Erro("Permissao negada");
  
  this->PesquisarUnidade(endereco)->PesquisarFatura(id)->quitarFatura();
  this->listaFaturasPagas.push_back(PesquisarUnidade(endereco)->PesquisarFatura(id));
}

void Cliente::setNome(string nome){
  
  if(this->permissao->verificaPermissao("setNome") == false)
    throw Erro("Permissao negada");
  
  this->nome = nome;
}

void Cliente::setInadimplente(bool inadimplente){
  if(this->permissao->verificaPermissao("setInadimplente") == false)
    throw Erro("Permissao negada");
  this->inadimplente = inadimplente;  
}

Permissao* Cliente::getPermissao(){
  return this->permissao;
  cout << "Get" << endl;
}

Endereco Cliente::getEndereco(){

  if(this->permissao->verificaPermissao("getEndereco") == false)
    throw Erro("Permissao negada");
  return this->endereco;
  
}
string Cliente::getEmail(){
  
  if(this->permissao->verificaPermissao("getEmail") == false)
    throw Erro("Permissao negada");
  
  return this->email;
}
string Cliente::getTelefone(){
  
  if(this->permissao->verificaPermissao("getTelefone") == false)
    throw Erro("Permissao negada");
  
  return this->telefone;
}

void Cliente::setEndereco(Endereco endereco){

  if(this->permissao->verificaPermissao("setNome") == false)
    throw Erro("Permissao negada");
  
  this->endereco = endereco;

}

void Cliente::setEmail(string email){

  if(this->permissao->verificaPermissao("setEmail") == false)
    throw Erro("Permissao negada");
  
  this->email = email;

}

void Cliente::setTelefone(string telefone){

  if(this->permissao->verificaPermissao("setTelefone") == false)
    throw Erro("Permissao negada");
  
  this->telefone = telefone;

}


