#ifndef ELETRICISTA_H
#define ELETRICISTA_H

#include "./funcionario.h"
#include "./inadimplencia.h"
#include "./encerramento.h"
#include "./ligacaoNova.h"
#include "./religacaoPagamento.h"
#include "./trocaMedidor.h"
#include "../Geral/Data.h"
#include "./leitura.h"
#include "../../Arquivos-h/Geral/Hoje.h"

class Eletricista : public Funcionario {

    public:
        void CadastrarFuncionario (string Nome, string ID);
        void AdicionarServico(Data);
        
        void Encerrar(UnidadeConsumidora* unidade);
        void EncerrarInadimplente(UnidadeConsumidora* unidade);
        void realizarReligacao(UnidadeConsumidora* unidade);
        void trocarMedidor();
        

        void FuncionarioRealizarLeitura(float leitura, Data dataExecutada, Data dataPlanejada, UnidadeConsumidora * unidade);
        void criarFatura(Leitura leitura, UnidadeConsumidora * unidade);
        

};

#endif
