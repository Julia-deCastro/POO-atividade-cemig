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
  string usuarioOperacao;
  Data data;

  public:
  void criarLog(string, Data);
  virtual Data getData()=0;
  string getUsuario();
  void setData(Data);
  void setUsuario(string);

};

#endif