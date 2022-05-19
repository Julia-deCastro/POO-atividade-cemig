#include "unidadeConsumidora.h"
#include <list>

UnidadeConsumidora::UnidadeConsumidora(string endereco){
  this->endereco = endereco;
  this->id_uc = cont_uc;
  cont_uc++;
}

void UnidadeConsumidora::AdicionarFatura(Fatura fat){
  this->listaFatura.push_back(fat);
}