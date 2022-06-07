#include "../../Arquivos-h/Geral/endereco.h"
#include "../../Arquivos-h/Geral/localizacaoGeografica.h"
#include <iostream>

using namespace std;

Endereco::Endereco(string logradouro, int numero, string complemento, string bairro, 
string cep, string cidade ,string estado, int latitude, int longitude){

    this->logradouro = logradouro;
    this->numero = numero;
    this->bairro = bairro;
    this->complemento = complemento;
    this->cep = cep;
    this->cidade = cidade;
    this->estado = estado;
    this->setLatitude(latitude);
    this->setLongitude(longitude);
}

void Endereco::getEnderecoCompleto(){

    cout << logradouro << ", " << numero << ", " << bairro << ", " << complemento << ", " << cep << ", " << cidade << ", " << estado;

}

string Endereco::getLogradouro(){
    return this->logradouro;
}

int Endereco::getNumero(){
    return this->numero;
}

string Endereco::getBairro(){
    return this->bairro;
}

string Endereco::getComplemento(){
    return this->complemento;
}

string Endereco::getCep(){
    return this->cep;
}

string Endereco::getCidade(){
    return this->cidade;
}

string Endereco::getEstado(){
    return this->estado;
}

LocalizacaoGeografica Endereco::getLocal(){
    return LocalizacaoGeografica(this-> getLatitude(), this->getLongitude());
}

void Endereco::imprimirEndereco(){
    cout << this->getLogradouro() << endl;
    cout << this->getNumero() << endl;
    cout << this->getComplemento() << endl;
    cout << this->getBairro() << endl;
    cout << this->getCep() << endl;
    cout << this->getCidade() << endl;
    cout << this->getEstado() << endl;
    cout << this->getLocal().getLatitude() << endl;
    cout << this->getLocal().getLongitude() << endl;
}

