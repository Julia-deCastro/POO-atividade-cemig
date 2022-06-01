#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include <iostream>

using namespace std;

trocaMedidor::trocaMedidor(string nomeFuncionario, string idFuncionario, UnidadeConsumidora unidade, Data data){
    this->getFuncionario().AdicionarServico(Servico(nomeFuncionario, idFuncionario, data, unidade), data);
}
