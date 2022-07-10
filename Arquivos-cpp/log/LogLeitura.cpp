#include "../../Arquivos-h/log/LogLeitura.h"

void LogLeitura::criarLogLeitura(string usuario, Data data, string EntidadeAcessada, string InformacaoAcessada) {
  this->setUsuario(usuario);
  this->setData(data);
  this->EntidadeAcessada = EntidadeAcessada;
  this->InformacaoAcessada = InformacaoAcessada;
}

string LogLeitura::getInformacaoAcessada() {
  return this->InformacaoAcessada;
}

string LogLeitura::getEntidadeAcessada() {
  return this->EntidadeAcessada;
}

void LogLeitura::setInformacaoAcessada(string InformacaoAcessada) {
  this->InformacaoAcessada = InformacaoAcessada;
}

void LogLeitura::setEntidadeAcessada(string EntidadeAcessada) {
  this->EntidadeAcessada = EntidadeAcessada;
}

Data LogLeitura::getData(){
  return this->data;
}