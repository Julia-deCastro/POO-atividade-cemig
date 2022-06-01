#ifndef LOCALIZACAO_H
#define LOCALIZACAO_H

#include <iostream>

using namespace std;

class LocalizacaoGeografica {
       
  private:

    int latitude;
    int longitude;

  public:

    LocalizacaoGeografica(int, int);
    LocalizacaoGeografica();
    int getLatitude();
    int getLongitude();
    void setLatitude(int);
    void setLongitude(int);
};

#endif