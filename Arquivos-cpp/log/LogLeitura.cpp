#include "../../Arquivos-h/log/LogLeitura.h"

void LogLeitura::criarLog(Usuario usuario, Data data, string EntidadeAcessada, string InformacaoAcessada) {
  Log::criarLog(usuario,data);
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