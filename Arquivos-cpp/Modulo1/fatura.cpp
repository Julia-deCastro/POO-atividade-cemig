#include "../../Arquivos-h/Modulo 1/fatura.h"
#include <math.h>

const float jurosDia = 0.05;

  Fatura::Fatura(float valorFatura, float consumo, int diasAtraso){
    this->valorFatura = valorFatura;
    this->consumo = consumo;
    this->diasAtraso = diasAtraso;
    quitado = false;
     
  }
  void Fatura::quitarFatura (){
    this->quitado = true;
  }
  
  float Fatura::calcularJuros (){
    float montante;
    montante = this->valorFatura*pow((1+jurosDia),this->diasAtraso);

    return (montante - valorFatura);
  }