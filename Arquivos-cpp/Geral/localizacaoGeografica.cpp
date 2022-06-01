#include "../../Arquivos-h/Geral/localizacaoGeografica.h"
#include <iostream>

using namespace std;
   

LocalizacaoGeografica::LocalizacaoGeografica(int latitude, int longitude){

    this->latitude = latitude;
    this->longitude = longitude;

}

int LocalizacaoGeografica::getLatitude(){
    return latitude;
}

int LocalizacaoGeografica::getLongitude(){
    return longitude;
}

LocalizacaoGeografica::LocalizacaoGeografica(){

}

void LocalizacaoGeografica::setLongitude(int longitude){
    this->longitude = longitude;
}
void LocalizacaoGeografica::setLatitude(int latitude){
    this->latitude = latitude;
}