#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include <iostream>

using namespace std;

void trocaMedidor::troca_medidor(UnidadeConsumidora unidade, Data data){ //identificar melhor
    trocaMedidor(data, unidade);
    cout << "medidor trocado" << endl;
}


trocaMedidor::trocaMedidor(Data data, UnidadeConsumidora unidade){ //identificar melhor
    this->data = data;
    this->unidade = unidade;
}
