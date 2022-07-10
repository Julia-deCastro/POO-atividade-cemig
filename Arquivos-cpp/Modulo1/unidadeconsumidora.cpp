#include "../../Arquivos-h/Modulo1/unidadeConsumidora.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include <list>
#include <algorithm>
#include <cctype>

using namespace std;


UnidadeConsumidora::UnidadeConsumidora(Endereco endereco, string numeroInstalacao, string nivelDeTensao, int tensaoDeAtendimento){
  
  if((nivelDeTensao == "BT" && tensaoDeAtendimento > 1000) ||
     (nivelDeTensao == "MT" && (tensaoDeAtendimento < 1000 ||     tensaoDeAtendimento > 36000)) ||
     (nivelDeTensao == "AT" && tensaoDeAtendimento < 36000))
    throw Erro("Nivel de tensão incompatível com tensão de atendimento!/n");
  
  this->leituraTotal = 0;

  this->endereco = endereco;
  this->numeroInstalacao = numeroInstalacao;
  this->nivelDeTensao = nivelDeTensao;
  this->tensaoDeAtendimento = tensaoDeAtendimento;
  this->ativo = true;
  this->inadimplente = false;
  this->permissao.adicionarPermissao("getAtivo");
  this->permissao.adicionarPermissao("getEndereco");
  this->permissao.adicionarPermissao("imprimirListaFaturas");
  this->permissao.adicionarPermissao("ImprimirUnidadeConsumidora");
  this->permissao.adicionarPermissao("getInadimplente");
  this->permissao.adicionarPermissao("verificaInadimplente");
  this->permissao.adicionarPermissao("AdicionarFaturaUnidade");
  this->permissao.adicionarPermissao("PesquisarFatura");
  this->permissao.adicionarPermissao("getTitular");
  this->permissao.adicionarPermissao("getNumeroInstalacao");
  this->permissao.adicionarPermissao("getNivelDeTensao");
  this->permissao.adicionarPermissao("getTensaoDeAtendimento");
  this->permissao.adicionarPermissao("setTitular");
  this->permissao.adicionarPermissao("setNumeroInstalacao");
  this->permissao.adicionarPermissao("setNivelDeTensao");
  this->permissao.adicionarPermissao("setTensaoDeAtendimento");
}

bool UnidadeConsumidora::getAtivo(){
  if(this->permissao.verificaPermissao("getAtivo") == false)
    throw Erro("Permissao negada");
  
  return this->ativo;
}

Endereco UnidadeConsumidora::getEndereco(){
  if(this->permissao.verificaPermissao("getEndereco") == false)
    throw Erro("Permissao negada");
  
  return this->endereco;
}

void UnidadeConsumidora::imprimirListaFaturas(){ 
  if(this->permissao.verificaPermissao("imprimirListaFaturas") == false)
    throw Erro("Permissao negada");
  
  for (Fatura* it : listaFaturas){
    it->imprimirFatura();
  }
}
void UnidadeConsumidora::ImprimirUnidadeConsumidora(){
  
  if(this->permissao.verificaPermissao("ImprimirUnidadeConsumidora") == false)
    throw Erro("Permissao negada");
  
  this->getEndereco().getEnderecoCompleto();
  cout <<  "(";
  
  if(this->getAtivo())
    cout << "Ativo)" << endl;
  else
    cout << "Desativado)" << endl;
  for(Fatura* it : listaFaturas){
    it->imprimirFatura();
  }
}

void UnidadeConsumidora::setAtivo(bool ativo) {
  
  if(this->permissao.verificaPermissao("setAtivo") == false)
    throw Erro("Permissao negada");
  
  this->ativo = ativo;
}

bool UnidadeConsumidora::getInadimplente(){
  
  if(this->permissao.verificaPermissao("getInadimplente") == false)
    throw Erro("Permissao negada");
  
  return this->inadimplente;
}

void UnidadeConsumidora::verificaInadimplente(){

  if(this->permissao.verificaPermissao("verificaInadimplente") == false)
    throw Erro("Permissao negada");
  
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
  
  if(this->permissao.verificaPermissao("AdicionarFaturaUnidade") == false)
    throw Erro("Permissao negada");
  
  listaFaturas.push_back(fat);
}

Fatura* UnidadeConsumidora::PesquisarFatura(int id){
  
  if(this->permissao.verificaPermissao("PesquisarFatura") == false)
    throw Erro("Permissao negada");
  
  vector<Fatura*>::iterator it;
  for (it = listaFaturas.begin(); it != listaFaturas.end(); it++){
    if ((*it)->getId() == id){
      return *it;
    }
  }
  Fatura* nulo = nullptr;
  return nulo;
}

string UnidadeConsumidora::getTitular() {
    if(this->permissao.verificaPermissao("getTitular") == false)
    throw Erro("Permissao negada");
  return this->titular;
}

string UnidadeConsumidora::getNumeroInstalacao() {
    if(this->permissao.verificaPermissao("getNumeroInstalacao") == false)
    throw Erro("Permissao negada");
  return this->numeroInstalacao;
}

string UnidadeConsumidora::getNivelDeTensao() {
    if(this->permissao.verificaPermissao("getNivelDeTensao") == false)
    throw Erro("Permissao negada");
  return this->nivelDeTensao;
}

int UnidadeConsumidora::getTensaoDeAtendimento() {
    if(this->permissao.verificaPermissao("getTensaoDeAtendimento") == false)
    throw Erro("Permissao negada");
  return this->tensaoDeAtendimento;
}

float UnidadeConsumidora::getLeituraTotal(){
  return this->leituraTotal;
}

void UnidadeConsumidora::setTitular(string titular) {
    if(this->permissao.verificaPermissao("setTitular") == false)
    throw Erro("Permissao negada");
  this->titular = titular;
}

void UnidadeConsumidora::setNumeroInstalacao(string numero) {
    if(this->permissao.verificaPermissao("setNumeroInstalacao") == false)
    throw Erro("Permissao negada");
  this->numeroInstalacao = numero;
}

void UnidadeConsumidora::setNivelDeTensao(string nivel) {
    if(this->permissao.verificaPermissao("setNivelDeTensao") == false)
    throw Erro("Permissao negada");
  this->nivelDeTensao = nivel;
}

void UnidadeConsumidora::setTensaoDeAtendimento(int tensao) {
    if(this->permissao.verificaPermissao("setTensaoDeAtendimento") == false)
    throw Erro("Permissao negada");
  this->tensaoDeAtendimento = tensao;
}

void UnidadeConsumidora::setLeituraTotal(float leituraTotal) {
  this->leituraTotal = leituraTotal;
}