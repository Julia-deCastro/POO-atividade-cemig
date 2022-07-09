#include "../../Arquivos-h/Modulo1/listacliente.h"
#include <vector>


void Lista_Cliente::AdicionarClienteCPF(PessoaFisica cliente){
  this->listaClienteCPF.push_back(cliente);
}
void Lista_Cliente::AdicionarClienteCNPJ(PessoaJuridica cliente){
  this->listaClienteCNPJ.push_back(cliente);
}

void Lista_Cliente::AdicionarinadimplenteCPF(PessoaFisica cliente){
  if (cliente.getInadimplente() == true)
    this->listainadimplentesCPF.push_back(cliente);
}
void Lista_Cliente::AdicionarinadimplenteCNPJ(PessoaJuridica cliente){
  if (cliente.getInadimplente() == true)
    this->listainadimplentesCNPJ.push_back(cliente);
}


void Lista_Cliente::RemoverClienteCPF(PessoaFisica cliente){
  vector<PessoaFisica>::iterator it;
  for(it = listaClienteCPF.begin(); it!= listaClienteCPF.end(); it++){
    if (it->getNome() == cliente.getNome())
      this->listaClienteCPF.erase(it);
  }
}

void Lista_Cliente::RemoverClienteCNPJ(PessoaJuridica cliente){
  vector<PessoaJuridica>::iterator it;
  for(it = listaClienteCNPJ.begin(); it!= listaClienteCNPJ.end(); it++){
    if (it->getNome() == cliente.getNome())
      this->listaClienteCNPJ.erase(it);
  }
}