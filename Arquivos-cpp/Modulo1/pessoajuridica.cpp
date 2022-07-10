#include "../../Arquivos-h/Modulo1/pessoajuridica.h"
#include <iostream>
#include "../../Arquivos-h/Modulo3/Erro.h"

using namespace std;

bool validaCNPJ(string cnpj){

  int i;
  //Calculo 1 dígito verificador
  int digito=0;
  int valida1[12] = {5,4,3,2,9,8,7,6,5,4,3,2};
  
  for(i=0; i < 12 ; i++){
    digito += ((int)cnpj[i]-48)*valida1[i];
  } 

  digito = digito%11;
  
  if(digito == 0 || digito == 1)
    digito = 0;
  else
    digito = 11 - digito;

  if(digito != ((int)cnpj[12]-48))
    return false;
  
  //Calculo 2 dígito verificador

  int valida2[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2};
 
  digito = 0;
  
  for(i=0; i < 13 ; i++){
    digito += ((int)cnpj[i]-48)*valida2[i];    
  }
  digito = digito%11;


  if(digito == 0 || digito == 1)
    digito = 0;
  else
    digito = 11 - digito;

  if(digito != ((int)cnpj[13]-48))
    return false;

  return true;
}

float PessoaJuridica::CalcularPagamento(){ 
  if(this->getPermissao()->verificaPermissao("CalcularPagamento") == false)
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

PessoaJuridica::PessoaJuridica (string nome, string cnpj, string email, string telefone, Endereco endereco){

  this->getPermissao()->adicionarPermissao("AdicionarUnidade");
  this->getPermissao()->adicionarPermissao("CalcularPagamento");
  this->getPermissao()->adicionarPermissao("PesquisarUnidade");
  this->getPermissao()->adicionarPermissao("ImprimeListaFaturasPagas");
  this->getPermissao()->adicionarPermissao("ImprimeListaUnidades");
  this->getPermissao()->adicionarPermissao("getNome");
  this->getPermissao()->adicionarPermissao("getInadimplente");
  this->getPermissao()->adicionarPermissao("AdicionarFatura");
  this->getPermissao()->adicionarPermissao("QuitarFaturaCliente");
  this->getPermissao()->adicionarPermissao("setNome");
  this->getPermissao()->adicionarPermissao("ImprimirFaturasDasUnidades");
  this->getPermissao()->adicionarPermissao("getEndereco");
  this->getPermissao()->adicionarPermissao("getEmail");
  this->getPermissao()->adicionarPermissao("getTelefone");
  this->getPermissao()->adicionarPermissao("setEndereco");
  this->getPermissao()->adicionarPermissao("setEmail");
  this->getPermissao()->adicionarPermissao("setTelefone");
  this->getPermissao()->adicionarPermissao("getPermissao");
  this->setNome(nome);
  this->setEmail(email);
  this->setTelefone(telefone);
  this->setEndereco(endereco);

  if(cnpj.size() == 14 ){
    if (validaCNPJ(cnpj))
      this->cnpj = cnpj;
    else throw Erro("CNPJ inválido");
  }
  else{
    throw Erro("O CNPJ deve conter 14 digitos");
  }
}

string PessoaJuridica::getCNPJ(){
 
  return this->cnpj;
}
      