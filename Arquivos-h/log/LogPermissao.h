#ifndef LOG_PERMISSAO_H
#define LOG_PERMISSAO_H

#include <string>
#include <iostream>
#include "./log.h"

using namespace std;

class LogPermissao : public Log
{
  private:
  string EntidadeAcessada;
  string FuncionalidadeAcessada;

  public:
  void criarLog(Usuario, Data, string, string);
  string getEntidadeAcessada();
  string getFuncionalidadeAcessada();
  void setEntidadeAcessada(string);
  void setFuncionalidadeAcessada(string);

};

#endif