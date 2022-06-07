#include "../../Arquivos-h/Geral/endereco.h"
#include "../../Arquivos-h/Geral/localizacaoGeografica.h"
#include <iostream>

using namespace std;
int::Endereco::contIdEnderenco = 0;

Endereco::Endereco(string logradouro, int numero, string complemento, string bairro, 
string cep, string cidade ,string estado, int latitude, int longitude){
    contIdEnderenco++;
    this->logradouro = logradouro;
    this->numero = numero;
    this->bairro = bairro;
    this->complemento = complemento;
    this->cep = cep;
    this->cidade = cidade;
    this->estado = estado;
    this->idEndereco = contIdEnderenco;
    this->setLatitude(latitude);
    this->setLongitude(longitude);
}

void Endereco::getEnderecoCompleto(){

    cout << logradouro << ", " << numero << ", " << bairro << ", " << complemento << ", " << cep << ", " << cidade << ", " << estado;

}

int Endereco::getIdEndereco() {
    return this->idEndereco;
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
    cout << "\n" << "Logradouro: " << this->getLogradouro() << endl;
    cout << "Número: " << this->getNumero() << endl;
    cout << "Complemento: " << this->getComplemento() << endl;
    cout << "Bairro: " << this->getBairro() << endl;
    cout << "CEP: " << this->getCep() << endl;
    cout << "Cidade: " << this->getCidade() << endl;
    cout << "Estado: " << this->getEstado() << endl;
    cout << "Latitude: " << this->getLocal().getLatitude() << " Longitude: " << this->getLocal().getLongitude() << endl;
}

