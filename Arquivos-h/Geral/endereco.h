#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include "localizacaoGeografica.h"

using namespace std;

class Endereco:public LocalizacaoGeografica{
       
  private:
    string logradouro;
    int numero;
    string bairro;
    string complemento;
    string CEP;
    string cidade;
    string estado;
    LocalizacaoGeografica local;

  public:

    Endereco(){};
    Endereco(string, int, string, string,string,string,string, LocalizacaoGeografica);
    void getEnderecoCompleto();
    string getLogradouro();
    int getNumero();
    string getBairro();
    string getComplemento();
    string getCEP();
    string getCidade();
    string getEstado();
    
};

#endif