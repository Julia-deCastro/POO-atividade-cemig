#ifndef USUARIO_H
#define USUARIO_H


class Usuario{

  private:
    Usuario();
    static Usuario *instancePtr;

  public:
    static Usuario *instance();

};
#endif