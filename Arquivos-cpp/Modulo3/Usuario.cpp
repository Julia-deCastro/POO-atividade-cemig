#include "../../Arquivos-h/Modulo3/Usuario.h"
#include <iostream>

using namespace std;

  Usuario *Usuario::instancePtr = 0;
  

  Usuario *Usuario::instance(){
    if (instancePtr == 0)
      instancePtr = new Usuario;
    return instancePtr;
  }