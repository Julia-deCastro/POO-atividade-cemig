#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include <iostream>

using namespace std;

trocaMedidor::trocaMedidor(UnidadeConsumidora unidade, Data data){
    this->getFuncionario().AdicionarServico(Servico(data, unidade), data);
}
