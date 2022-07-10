#include "../../Arquivos-h/Modulo3/Permissao.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Permissao::verificaPermissao(string metodo){
    
    for(string* i : listaMetodos){
     if((*i) == metodo){
      return true;
     } 
  }
  return false; 
  
}

void Permissao::adicionarPermissao(string metodo){

  string *metodo2 = new string(metodo);

  this->listaMetodos.push_back(metodo2);
    
  
}

void Permissao::removerPermissao(string metodo){
    
    remove(listaMetodos.begin(), listaMetodos.end(), metodo);

}