#include "../../Arquivos-h/Modulo3/Erro.h"
#include <iostream>
#include <algorithm>

using namespace std;

Erro::Erro(const string tipoErro){
  tipo_erro = tipoErro;
}

void Erro::imprimeErro(){
  cout << getErro();
}

string Erro::getErro(){
  return tipo_erro;
}