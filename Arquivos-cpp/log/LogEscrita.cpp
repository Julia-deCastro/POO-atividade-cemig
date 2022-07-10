#include "../../Arquivos-h/log/LogEscrita.h"

void LogEscrita::criarLogEscrita(string usuario, Data data, string EntidadeAlterada, 
string AtributoAntes, string AtributoDepois) {
  this->setUsuario(usuario);
  this->setData(data);
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

Data LogEscrita::getData(){
  return this->data;
}



