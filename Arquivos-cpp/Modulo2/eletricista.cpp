#include "../../Arquivos-h/Modulo2/eletricista.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include "../../Arquivos-h/Geral/Hoje.h"

#include <iostream>

using namespace std;

void Eletricista::CadastrarFuncionario(string Nome, string ID){

  this->setNome(Nome);
  this->setID(ID);

  this->getPermissao().adicionarPermissao("AdicionarServico");
  
}


void Eletricista::AdicionarServico(Data data){

if(this->getPermissao().verificaPermissao("AdicionarServico") == false)
    throw Erro("Permissao negada"); 
  
  Hoje hoje;

  int numServicos = 0;
  
  for (Data it : this->getLista()){
    if(it.getDia() == hoje.hoje().getDia() &&
    it.getMes() == hoje.hoje().getMes() && it.getAno() == hoje.hoje().getAno()){
      numServicos ++;
    }
  }

  if(numServicos < 8)
    this->adicionarLista(data);

  else
  throw Erro("Limite de serviços do dia atingido"); 

}