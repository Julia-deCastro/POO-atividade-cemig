#ifndef LEITURISTA_H
#define  LEITURISTA_H

#include <iostream>
#include "./servico.h"
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Modulo3/Usuario.h"
#include "./funcionario.h"
#include "./leitura.h"

using namespace std;

class Leiturista:public Funcionario{

  public:
    Leiturista(string Nome, string ID);
    void AdicionarServico(Data);
    void FuncionarioRealizarLeitura(float leitura, Data dataExecutada, Data dataPlanejada, UnidadeConsumidora * unidade);
    void criarFatura(Leitura leitura, UnidadeConsumidora * unidade);

    void Encerrar(UnidadeConsumidora* unidade);
    void EncerrarInadimplente(UnidadeConsumidora* unidade);
    void realizarReligacao(UnidadeConsumidora* unidade);
    void trocarMedidor();
};

#endif