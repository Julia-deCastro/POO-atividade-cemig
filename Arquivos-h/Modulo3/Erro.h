#ifndef ERRO_H
#define ERRRO_H
#include <string>

using namespace std;

class Erro {

  public:
  Erro(const string tipoErro);
  void imprimeErro();
  string getErro();

  private:
  string tipo_erro;

};

#endif