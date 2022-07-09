#include "../../Arquivos-h/Modulo3/Permissao.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Permissao::verificaPermissao(string metodo){
    vector<string>::iterator i;
    
    for(i = listaMetodos.begin(); i!= listaMetodos.end(); i++){
     if(*i == metodo){
      return true;
     }
    return false;    
  }
  
}

void Permissao::adicionarPermissao(string metodo){

  this->listaMetodos.push_back(metodo);
    
  
}

void Permissao::removerPermissao(string metodo){
    
    remove(listaMetodos.begin(), listaMetodos.end(), metodo);

}