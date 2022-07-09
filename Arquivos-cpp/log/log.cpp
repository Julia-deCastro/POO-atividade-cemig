#include "../../Arquivos-h/log/log.h"

void Log::criarLog(Usuario usuario, Data data) {
  this->usuarioOperacao = usuario;
  this->data = data;
}