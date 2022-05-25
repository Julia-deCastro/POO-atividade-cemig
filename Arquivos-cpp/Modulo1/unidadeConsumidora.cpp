#include "unidadeConsumidora.h"
#include <list>

UnidadeConsumidora::UnidadeConsumidora(string endereco){
  this->endereco = endereco;
  /* this->dono = dono; */
}

void UnidadeConsumidora::AdicionarFatura(Fatura fat){
  this->listaFatura.push_back(fat);
}