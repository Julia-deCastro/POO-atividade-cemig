#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "fatura.h"
#include "../Geral/Data.h"
#include "../Geral/ExecaoCustomizada.h"
#include "../Geral/endereco.h"
#include <iostream>
#include <vector>

using namespace std;

class UnidadeConsumidora
{

public:
    Endereco getEndereco();
    bool getAtivo();
    void setAtivo(bool);
    void imprimirListaFaturas();
    UnidadeConsumidora(Endereco endereco);
    UnidadeConsumidora();
    void ImprimirUnidadeConsumidora();
    bool getInadimplente();
    void verificaInadimplente();
    void AdicionarFaturaUnidade(Fatura *fat);
    Fatura *PesquisarFatura(int id);
    vector<Fatura *>::iterator getListaFaturasBegin();
    vector<Fatura *>::iterator getListaFaturasEnd();

private:
    bool inadimplente;
    Endereco endereco;
    bool ativo;
    vector<Fatura *> listaFaturas;
};

#endif