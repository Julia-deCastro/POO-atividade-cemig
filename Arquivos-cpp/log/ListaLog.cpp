#include "../../Arquivos-h/log/listaLog.h"

void ListaLog::AdicionarLogLeitura(LogLeitura * log){

    this->listaLogLeitura.push_back(log);

}

void ListaLog::filtrarLogLeitura(string user, Data data){

    for(LogLeitura* i : listaLogLeitura){
        if(i->getData() == data && i->getUsuario()==user){
            cout << "Log leitura" << endl << "Data:";
            i->getData().printData(); 
            cout << "Usuario" << i->getUsuario() << endl
            << "Entidade Acessada" << i->getEntidadeAcessada() << endl
            << "Informacao Acessada" << i->getInformacaoAcessada() << endl;
        }

    }

}

void ListaLog::imprimirLogs(){

    for(LogLeitura* i : listaLogLeitura){

        cout << endl<< "Log leitura:" << endl << "Data:";
        i->getData().printData(); 
        cout << "Usuario: " << i->getUsuario() << endl
        << "Entidade Acessada: " << i->getEntidadeAcessada() << endl
        << "Informacao Acessada: " << i->getInformacaoAcessada() << endl;

    }

    for(LogEscrita* i : listaLogEscrita){
           
        cout << endl<< "Log escrita:" << endl << "Data:";
        i->getData().printData(); 
        cout << "Usuario: " << i->getUsuario() << endl
        << "Entidade Acessada: " << i->getEntidadeAlterada() << endl
        << "Atributo anterior: " << i->getAtributoAntes() << endl
        << "Atributo atualizado: " << i->getAtributoDepois() << endl;
    }
}


void ListaLog::AdicionarLogEscrita(LogEscrita * log){

    this->listaLogEscrita.push_back(log);

}

void ListaLog::filtrarLogEscrita(string user, Data data){

    for(LogEscrita* i : listaLogEscrita){
        if(i->getData() == data && i->getUsuario()==user){
            cout << "Log leitura" << endl << "Data:";
            i->getData().printData(); 
            cout << "Usuario" << i->getUsuario() << endl
            << "Entidade Acessada" << i->getEntidadeAlterada() << endl
            << "Atributo anterior" << i->getAtributoAntes() << endl
            << "Atributo atualizado" << i->getAtributoDepois() << endl;

        }

    }

}
