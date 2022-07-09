#include "../../Arquivos-h/Modulo1/pessoafisica.h"
#include <iostream>
#include "../../Arquivos-h/Modulo3/Erro.h"

using namespace std;

bool validaCpf(string cpf){

  int i;
  int j=10;
  //Calculo 1 dígito verificador
  int digito=0;
  
  for(i=0; i < 9 ; i++){
    digito += ((int)cpf[i]-48)*j;
    j--;
  } 

  digito = digito%11;
  digito = 11 - digito;

  if (digito>=10)
    digito = 0;

  if(digito != ((int)cpf[9]-48))
    return false;
  
  //Calculo 2 dígito verificador

  j = 11;
  digito = 0;
  
  for(i=0; i < 10 ; i++){
    digito += ((int)cpf[i]-48)*j;
    j--;
    
  }
  digito = digito%11;
  digito = 11 - digito;
  
  if (digito>=10)
    digito = 0;
  
  if(digito != ((int)cpf[10]-48))
    return false;

  return true;
}


void PessoaFisica::CadastrarCliente (string nome, string email, string telefone, Endereco endereco) {
  
  this->getPermissao().adicionarPermissao("AdicionarUnidade");
  this->getPermissao().adicionarPermissao("CalcularPagamento");
  this->getPermissao().adicionarPermissao("PesquisarUnidade");
  this->getPermissao().adicionarPermissao("getNome");
  this->getPermissao().adicionarPermissao("getInadimplente");
  this->getPermissao().adicionarPermissao("ImprimeListaFaturasPagas");
  this->getPermissao().adicionarPermissao("ImprimeListaUnidades");
  this->getPermissao().adicionarPermissao("AdicionarFatura");
  this->getPermissao().adicionarPermissao("ImprimirFaturasDasUnidades");
  this->getPermissao().adicionarPermissao("QuitarFaturaCliente");
  this->getPermissao().adicionarPermissao("setNome");
  this->getPermissao().adicionarPermissao("getEndereco");
  this->getPermissao().adicionarPermissao("getEmail");
  this->getPermissao().adicionarPermissao("getTelefone");
  this->getPermissao().adicionarPermissao("setEndereco");
  this->getPermissao().adicionarPermissao("setEmail");
  this->getPermissao().adicionarPermissao("setTelefone");
  this->getPermissao().adicionarPermissao("getPermissao");  

  this->setNome(nome);
  this->setEmail(email);
  this->setEndereco(endereco);
  this->setTelefone(telefone);
  this->setInadimplente(false);
  
}


void PessoaFisica::cadastrarCPF(string nome, string cpf, string email, string telefone, Endereco endereco){

  this->CadastrarCliente(nome, email, telefone, endereco);
  
  if(cpf.size() == 11 ){
    if (validaCpf(cpf))
      this->cpf = cpf;
    
    else throw Erro("CPF inválido");
    
  }
  else{
    throw Erro("O CPF deve conter 11 digitos");
  }
    
}

string PessoaFisica::getCPF(){
 
  return this->cpf;
}
    