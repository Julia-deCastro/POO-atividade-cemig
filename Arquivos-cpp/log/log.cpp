#include "../../Arquivos-h/log/log.h"

void Log::criarLog(string usuario, Data data) {
  this->usuarioOperacao = usuario;
  this->data = data;
}

string Log::getUsuario(){
  return this->usuarioOperacao;
}

void Log::setData(Data data){
  this->data = data;
}

void Log::setUsuario(string user){
  this->usuarioOperacao = user;
}