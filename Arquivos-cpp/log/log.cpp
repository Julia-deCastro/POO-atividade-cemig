#include "../../Arquivos-h/log/log.h"

string Log::getUsuario(){
  return this->usuarioOperacao;
}

void Log::setData(Data data){
  this->data = data;
}

void Log::setUsuario(string user){
  this->usuarioOperacao = user;
}