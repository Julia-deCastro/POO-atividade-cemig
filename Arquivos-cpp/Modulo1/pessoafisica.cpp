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



float PessoaFisica::CalcularPagamento(){ 
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

 PessoaFisica::PessoaFisica(string nome, string cpf, string email, string telefone, Endereco endereco){
  
  this->AdicionarPermissaoCPF("AdicionarUnidade");
  this->AdicionarPermissaoCPF("CalcularPagamento");
  this->AdicionarPermissaoCPF("PesquisarUnidade");
  this->AdicionarPermissaoCPF("ImprimeListaFaturasPagas");
  this->AdicionarPermissaoCPF("ImprimeListaUnidades");
  this->AdicionarPermissaoCPF("getNome");
  this->AdicionarPermissaoCPF("getInadimplente");
  this->AdicionarPermissaoCPF("AdicionarFatura");
  this->AdicionarPermissaoCPF("QuitarFaturaCliente");
  this->AdicionarPermissaoCPF("setNome");
  this->AdicionarPermissaoCPF("ImprimirFaturasDasUnidades");
  this->AdicionarPermissaoCPF("getEndereco");
  this->AdicionarPermissaoCPF("getEmail");
  this->AdicionarPermissaoCPF("getTelefone");
  this->AdicionarPermissaoCPF("setEndereco");
  this->AdicionarPermissaoCPF("setEmail");
  this->AdicionarPermissaoCPF("setTelefone");
  this->AdicionarPermissaoCPF("getPermissao");
  this->setNome(nome);
  this->setEmail(email);
  this->setTelefone(telefone);
  this->setEndereco(endereco);
  
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
    
void PessoaFisica::AdicionarPermissaoCPF(string metodo){
  this->getPermissao()->adicionarPermissao(metodo);
}