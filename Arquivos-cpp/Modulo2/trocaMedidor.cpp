#include "../../Arquivos-h/Modulo2/trocaMedidor.h"
#include <iostream>

using namespace std;

void trocaMedidor::troca_medidor(UnidadeConsumidora unidade, Data data){
    Servico(data, unidade);
    cout << "medidor trocado" << endl;
}
