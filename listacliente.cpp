#include "listacliente.h"
#include <vector>

void Lista_Cliente::AdicionarCliente(Cliente cliente){
  this->listaCliente.push_back(cliente);
  }


void Lista_Cliente::AdicionarInadiplente(Cliente cliente){
  if (cliente.inadiplente == true)
    this->listaInadiplentes.push_back(cliente);
  }


void Lista_Cliente::RemoverCliente(Cliente cliente){

  
}


