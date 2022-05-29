#include "../../Arquivos-h/Modulo1/fatura.h"
#include <math.h>
#include <iostream>
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/Formato.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"

using namespace std;

const float jurosDia = 0.0005;

Data hoje(){
  
  Data hoje;
  
  hoje.setDia(26);
  hoje.setMes(05);
  hoje.setAno(2022); 

  return hoje;
}

Fatura::Fatura(float valorFatura, float consumo, Data dataVencimento){
  this->valorFatura = valorFatura;
  this->consumo = consumo;
  this->dataVencimento = dataVencimento;
  quitado = false;
  valorPago = 0;

}

void Fatura::quitarFatura (){
  this->quitado = true;
  this->valorPago = this->valorFatura + this->calcularJuros();
  this->dataPagamento = hoje();
}
  
float Fatura::calcularJuros (){
  float montante;
  
  if(this->getDiasAtraso() > 0){
    montante = this->valorFatura*pow((1+jurosDia),this->getDiasAtraso());
    return (montante - valorFatura);  
  }
  else{
    return 0;
  }
  
}

void Fatura::imprimirFatura (){
  cout << "Valor Fatura: " << valorFatura << endl;

  if (quitado == 0)
    cout << "Situação da Fatura: Não quitada"  << endl;
  else {
    cout << "Situação da Fatura: Quitada"  << endl;
    cout << "Data do pagamento: " ;
    dataPagamento.printData();
    cout << "Valor Pago: " << valorPago << endl;
  }
  cout << "Consumo da Unidade: " << consumo << endl;
  cout << "Data de Vencimento: ";
  dataVencimento.printData();
  cout << "Dias de atraso: " << this->getDiasAtraso() << endl;
  cout << endl;

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

bool Fatura::getQuitado(){
  return this->quitado;
}

int Fatura::getDiasAtraso() {
  return hoje().diffData(dataVencimento);
}

float Fatura::getConsumo(){
  return this->consumo;
}


  
