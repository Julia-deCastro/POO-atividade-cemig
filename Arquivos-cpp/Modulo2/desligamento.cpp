#include "../../Arquivos-h/Modulo2/desligamento.h"
#include <iostream>

using namespace std;

/* void Desligamento::desligarUnidade(Data data, UnidadeConsumidora unidade){
  Desligamento(data, unidade);
  unidade.setAtivo(false);
} */



Desligamento::Desligamento(Data data, UnidadeConsumidora unidade){
  this->data = data;
  this->unidade = unidade;
}