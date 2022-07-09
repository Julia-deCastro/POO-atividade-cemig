#include "../../Arquivos-h/Modulo1/listacliente.h"
#include <vector>


void Lista_Cliente::AdicionarCliente(Cliente cliente){
  this->listaCliente.push_back(cliente);
  }


void Lista_Cliente::Adicionarinadimplente(Cliente cliente){
  if (cliente.getInadimplente() == true)
    this->listainadimplentes.push_back(cliente);
  }


void Lista_Cliente::RemoverCliente(Cliente cliente){
  vector<Cliente>::iterator it;
  for(it = listaCliente.begin(); it!= listaCliente.end(); it++){
    if (it->getNome() == cliente.getNome())
      this->listaCliente.erase(it);
  }
}