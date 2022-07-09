#ifndef LOG_H
#define LOG_H

#include <string>
#include <iostream>
#include "../Geral/ExecaoCustomizada.h"
#include "../Modulo3/Usuario.h"
#include "../Geral/Data.h"

using namespace std;

class Log
{
  protected:
  Usuario usuarioOperacao;
  Data data;

  public:
  virtual void criarLog(Usuario, Data);
  virtual Data getData() = 0;
  virtual Usuario getUsuario();
  virtual void setData();
  virtual void setUsuario();

};

#endif