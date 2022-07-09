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
string Funcionario::getID(){
  if(this->permissao.verificaPermissao("getID") == false)
    throw Erro("Permissao negada");  
  return this->id;
}

void Funcionario::AdicionarServico(Servico servico, Data hoje){
  
  if(this->permissao.verificaPermissao("AdicionarServico") == false)
    throw Erro("Permissao negada"); 
  
  int numServicos = 0;
  
  for (Servico it : listaServicos){
    if(it.getData().getDia() == hoje.getDia() && it.getData().getMes() == hoje.getMes() && it.getData().getAno() == hoje.getAno())
      numServicos ++;
  }

  if(numServicos < 8)
    this->listaServicos.push_back(servico);

  else
    cout << "Limite de serviços do dia atingido" << endl;
}