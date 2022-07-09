#include "../../Arquivos-h/log/LogEscrita.h"

void LogEscrita::criarLog(Usuario usuario, Data data, string EntidadeAlterada, 
string AtributoAntes, string AtributoDepois) {
  Log::criarLog(usuario,data);
  this->EntidadeAlterada = EntidadeAlterada;
  this->AtributoAntes = AtributoAntes;
  this->AtributoDepois = AtributoDepois;
}

string LogEscrita::getAtributoAntes() {
  return this->AtributoAntes;
}

string LogEscrita::getAtributoDepois() {
  return this->AtributoDepois;
}

string LogEscrita::getEntidadeAlterada() {
  return this->EntidadeAlterada;
}

void LogEscrita::setAtributoAntes(string AtributoAntes) {
  this->AtributoAntes = AtributoAntes;
}

void LogEscrita::setAtributoDepois(string AtributoDepois) {
  this->AtributoDepois = AtributoDepois;
}

void LogEscrita::setEntidadeAlterada(string EntidadeAlterada) {
  this->EntidadeAlterada = EntidadeAlterada;
}