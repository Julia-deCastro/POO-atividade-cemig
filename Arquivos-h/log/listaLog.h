#ifndef LISTALOG_H
#define LISTALOG_H

#include <string>
#include <iostream>
#include"./../log/LogEscrita.h"
#include"./../log/LogLeitura.h"
#include"./../log/LogPermissao.h"

using namespace std;

class ListaLog
{
  private:

    vector<LogLeitura*> listaLogLeitura;
    vector<LogEscrita*> listaLogEscrita;

  public:

    void AdicionarLogLeitura(LogLeitura * log);
    void filtrarLogLeitura(string user, Data data);
    void imprimirLogs();

    void AdicionarLogEscrita(LogEscrita * log);
    void filtrarLogEscrita(string user, Data data);

};

#endif