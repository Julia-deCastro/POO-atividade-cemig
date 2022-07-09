#include "../../Arquivos-h/Modulo2/funcionario.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include <iostream>

using namespace std;

void Funcionario::CadastrarFuncionario(string nome, string id){
  this->nome = nome;
  this->id = id;
  this->permissao.adicionarPermissao("setNome");
  this->permissao.adicionarPermissao("setID");
  this->permissao.adicionarPermissao("getNome");
  this->permissao.adicionarPermissao("AdicionarServico");
  this->permissao.adicionarPermissao("getPermissao");
}

void Funcionario::setNome(string nome){
  if(this->permissao.verificaPermissao("setNome") == false)
    throw Erro("Permissao negada");

  this->nome = nome;
  
}

void Funcionario::setID(string ID){
  if(this->permissao.verificaPermissao("setID") == false)
    throw Erro("Permissao negada");

  this->id = ID;
  
}
string Funcionario::getNome(){
  if(this->permissao.verificaPermissao("getNome") == false)
    throw Erro("Permissao negada");
  return this->nome;
}
Permissao Funcionario::getPermissao(){
  if(this->permissao.verificaPermissao("getPermissao") == false)
    throw Erro("Permissao negada");
  return this->permissao;
}
string Funcionario::getID(){
  if(this->permissao.verificaPermissao("getID") == false)
    throw Erro("Permissao negada");  
  return this->id;
}

void Funcionario::adicionarLista (Data data){

  this->listaServicos.push_back(data);

}

vector<Data> Funcionario::getLista(){
  return this->listaServicos;
}