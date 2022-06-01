#include "../../Arquivos-h/Geral/endereco.h"
#include "../../Arquivos-h/Geral/localizacaoGeografica.h"
#include <iostream>

using namespace std;

Endereco::Endereco(std::string logradouro, int numero, std::string bairro, std::string complemento, 
std::string cep, std::string cidade ,std::string estado, LocalizacaoGeografica local){

    this->logradouro = logradouro;
    this->numero = numero;
    this->bairro = bairro;
    this->complemento = complemento;
    this->CEP = cep;
    this->cidade = cidade;
    this->estado = estado;
    this->setLatitude(local.getLatitude());
    this->setLongitude(local.getLongitude());
}

void Endereco::getEnderecoCompleto(){

    cout << logradouro << ", " << numero << ", " << bairro << ", " << complemento << ", " << CEP << ", " << cidade << ", " << estado;

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

string Endereco::getCEP(){
    return this->CEP;
}

string Endereco::getCidade(){
    return this->cidade;
}

string Endereco::getEstado(){
    return estado;
}