#include "../../Arquivos-h/log/LogPermissao.h"

/* void LogPermissao::criarLog(string usuario, Data data, string EntidadeAcessada, string FuncionalidadeAcessada) {
  Log::criarLog(usuario,data);
  this->EntidadeAcessada = EntidadeAcessada;
  this->FuncionalidadeAcessada = FuncionalidadeAcessada;
} */

string LogPermissao::getFuncionalidadeAcessada() {
  return this->FuncionalidadeAcessada;
}

string LogPermissao::getEntidadeAcessada() {
  return this->EntidadeAcessada;
}

void LogPermissao::setFuncionalidadeAcessada(string FuncionalidadeAcessada) {
  this->FuncionalidadeAcessada = FuncionalidadeAcessada;
}

void LogPermissao::setEntidadeAcessada(string EntidadeAcessada) {
  this->EntidadeAcessada = EntidadeAcessada;
}

Data LogPermissao::getData(){
  return this->data;
}