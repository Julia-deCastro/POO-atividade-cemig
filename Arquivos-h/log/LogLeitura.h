#ifndef LOG_LEITURA_H
#define LOG_LEITURA_H

#include <string>
#include <iostream>
#include "./log.h"

using namespace std;

class LogLeitura : public Log{
  private:
  string EntidadeAcessada;
  string InformacaoAcessada;

  public:
  LogLeitura(){};
  LogLeitura(string, Data, string, string);
  string getEntidadeAcessada();
  string getInformacaoAcessada();
  void setEntidadeAcessada(string);
  void setInformacaoAcessada(string);
  Data getData();
  void getLog();

};

#endif