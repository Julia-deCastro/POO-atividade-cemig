'#include "../../Arquivos-h/Modulo1/fatura.h"
#include <math.h>
#include <iostream>
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/Formato.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"

using namespace std;

const float jurosDia = 0.0005;
int::Fatura::cont_id = 0;

Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
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
  cont_id++;
  this->id = cont_id;

}

Fatura::Fatura(){
  id = cont_id;
  cont_id++;
}

void Fatura::quitarFatura (){
  this->quitado = true;
  this->valorPago = this->valorFatura + this->calcularJuros();
  this->setDataPagamento();

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
  cout << "Valor Fatura: " << this->valorFatura << endl;

  if (getQuitado() == false)
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
  return this->valorFatura;
}

float Fatura::getValorPago (){
    return this->valorPago;
  }

Data Fatura::getDataVencimento(){
  return this->dataVencimento;
}

void Fatura::setDataPagamento(){
  Data * data= new Data (0,0,0,0,0,0);
  *data = hoje();
  this->dataPagamento = *data;
}

Data Fatura::getDataPagamento(){

    return this->dataPagamento;
  }

bool Fatura::getQuitado(){
  return this->quitado;
}

int Fatura::getDiasAtraso() {
  return hoje().diffData(dataVencimento);
}

int Fatura::getId() {
  return this->id;
}

float Fatura::getConsumo(){
  return this->consumo;
}'