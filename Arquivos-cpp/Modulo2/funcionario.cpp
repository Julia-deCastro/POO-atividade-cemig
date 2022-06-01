#include "../../Arquivos-h/Modulo2/funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(){}

void Funcionario::CadastrarFuncionario(string nome, string ID){
  this->Nome = nome;
  this->ID = ID;
}

string Funcionario::getNome(){
  return this->Nome;
}
string Funcionario::getID(){
  return this->ID;
}

void Funcionario::AdicionarServico(Servico servico, Data hoje){
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