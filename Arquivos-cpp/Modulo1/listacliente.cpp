#include "../../Arquivos-h/Modulo 1/listacliente.h"
#include <vector>

void Lista_Cliente::AdicionarCliente(Cliente cliente){
  this->listaCliente.push_back(cliente);
  }


void Lista_Cliente::AdicionarInadiplente(Cliente cliente){
  if (cliente.inadiplente == true)
    this->listaInadiplentes.push_back(cliente);
  }


void Lista_Cliente::RemoverCliente(Cliente cliente){
  vector<Cliente>::iterator it;
  for(it = listaCliente.begin(); it!= listaCliente.end(); it++){
    if (it->nome == cliente.nome)
      this->listaCliente.erase(it);
  }
}







