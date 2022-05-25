#include "../../Arquivos-h/Modulo 1/fatura.h"
#include <math.h>
#include <iostream>

using namespace std;

const float jurosDia = 0.05;



  Fatura::Fatura(float valorFatura, float consumo, Data dataVencimento){
    this->valorFatura = valorFatura;
    this->consumo = consumo;
    this->dataVencimento = dataVencimento;
    quitado = false;
    diasAtraso = 0;
    valorPago = 0;
  }

  void Fatura::quitarFatura (){
    this->quitado = true;
  }
  
  float Fatura::calcularJuros (){
    float montante;
    montante = this->valorFatura*pow((1+jurosDia),this->diasAtraso);

    return (montante - valorFatura);
  }

  void Fatura::imprimirFatura (){
    cout << valorFatura << endl;
    cout << valorPago << endl;
    cout << quitado << endl;
    cout << consumo << endl;
    cout << dataVencimento.getDia() << endl;
    cout << dataPagamento.getDia() << endl;
    cout << diasAtraso << endl;
  }

  float Fatura::getValorFatura (){
    return valorFatura;
  }

  float Fatura::getValorPago (){
    return valorPago;
  }

  Data Fatura::getDataVencimento(){
    return dataVencimento;
  }

  Data Fatura::getDataPagamento(){
    return dataPagamento;
  }

  int Fatura::getDiasAtraso() {
    return dataPagamento.diffData(dataVencimento);
  }

  
