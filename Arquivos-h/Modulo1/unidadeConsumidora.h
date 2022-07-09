#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "fatura.h"
#include "../Geral/Data.h"
#include "../Geral/ExecaoCustomizada.h"
#include <iostream>
#include <vector>
#include "../Geral/endereco.h"
#include "../../Arquivos-h/Modulo3/Permissao.h"

using namespace std;

class UnidadeConsumidora {

    public:

        void imprimirListaFaturas();
        UnidadeConsumidora(Endereco endereco, string             numeroInstalacao, string nivelDeTensao, int           tensaoDeAtendimento);
        UnidadeConsumidora();
        void ImprimirUnidadeConsumidora();
        vector<Fatura*> listaFaturas;       
        bool getInadimplente();
        void verificaInadimplente();
        void AdicionarFaturaUnidade(Fatura * fat);
        Fatura* PesquisarFatura(int id);

        Endereco getEndereco();
        bool getAtivo();
        string getTitular();
        string getNumeroInstalacao();
        string getNivelDeTensao();
        int getTensaoDeAtendimento();

        void setAtivo(bool);
        void setTitular(string);
        void setNumeroInstalacao(string);
        void setNivelDeTensao(string);
        void setTensaoDeAtendimento(int);
        
    private:
        bool inadimplente;
        Endereco endereco;
        bool ativo; 
        string numeroInstalacao;
        string titular;
        string nivelDeTensao;
        int tensaoDeAtendimento;
        Permissao permissao;
};

#endif