#ifndef LOG_ESCRITA_H
#define LOG_ESCRITA_H

#include <string>
#include <iostream>
#include "./log.h"

using namespace std;

class LogEscrita : public Log
{
  private:
  string EntidadeAlterada;
  string AtributoAntes;
  string AtributoDepois;

  public:
  LogEscrita(){};
  LogEscrita(string, Data, string, string, string);
  string getEntidadeAlterada();
  string getAtributoAntes();
  string getAtributoDepois();
  void setEntidadeAlterada(string);
  void setAtributoAntes(string);
  void setAtributoDepois(string);
  Data getData();
};

#endif