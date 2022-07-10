#ifndef PERMISSAO_H
#define PERMISSAO_H
#include <iostream>
#include <vector>

using namespace std;

class Permissao{

  public:
    bool verificaPermissao(string* metodo);
    void adicionarPermissao(string* metodo);
    void removerPermissao(string* metodo);


  private:
    vector<string*> listaMetodos; 


};

#endif