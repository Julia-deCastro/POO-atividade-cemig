#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include "localizacaoGeografica.h"

using namespace std;

class Endereco : public LocalizacaoGeografica
{

private:
  int idEndereco;
  string logradouro;
  int numero;
  string bairro;
  string complemento;
  string cep;
  string cidade;
  string estado;
  LocalizacaoGeografica local;
  static int contIdEnderenco;

public:
  Endereco(){};
  Endereco(string, int, string, string, string, string, string, int, int);
  void getEnderecoCompleto();
  string getLogradouro();
  int getNumero();
  string getBairro();
  string getComplemento();
  string getCep();
  string getCidade();
  string getEstado();
  int getIdEndereco();
  LocalizacaoGeografica getLocal();
  void imprimirEndereco();

  bool operator==(Endereco &end)
  {
    if (
      this->idEndereco == end.getIdEndereco()
        // this->logradouro == end.getLogradouro() &&
        // this->numero == end.getNumero() &&
        // this->bairro == end.getBairro() &&
        // this->complemento == end.getComplemento() &&
        // this->cep == end.getCep() &&
        // this->cidade == end.getCidade() &&
        // this->estado == end.getEstado() &&
        // this->local == end.getLocal()
        )
    {
      return true;
    }
    else
      return false;
  }
};

#endif