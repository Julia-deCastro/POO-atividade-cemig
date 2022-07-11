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



void Eletricista::Encerrar(UnidadeConsumidora* unidade){
  unidade->setAtivo(false);

  Hoje hoje;
  this->AdicionarServico(hoje.hoje());
}

void Eletricista::EncerrarInadimplente(UnidadeConsumidora* unidade){
  
  if(unidade->getInadimplente() == true)
     unidade->setAtivo(false);

  cout << "Unidade não está inadimplente" << endl;

  Hoje hoje;
  this->AdicionarServico(hoje.hoje());

}


void Eletricista::realizarReligacao(UnidadeConsumidora* unidade){
   unidade->setAtivo(true);

   Hoje hoje;
  this->AdicionarServico(hoje.hoje());
}


void Eletricista::trocarMedidor(){

  Hoje hoje;
  this->AdicionarServico(hoje.hoje());

}





void Eletricista::FuncionarioRealizarLeitura(float leitura, Data dataExecutada, Data dataPlanejada, UnidadeConsumidora * unidade){
  throw Erro("Um eletrecista não tem permissão para realizar essa função");
}

void Eletricista::criarFatura(Leitura leitura, UnidadeConsumidora * unidade){
  throw Erro("Um eletrecista não tem permissão para realizar essa função");
}