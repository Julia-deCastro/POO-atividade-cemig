#include <iostream>
#include "Arquivos-h/Modulo1/cliente.h"
#include "Arquivos-h/Modulo1/pessoafisica.h"
#include "Arquivos-h/Modulo1/fatura.h"
#include "Arquivos-h/Modulo2/leitura.h"


using namespace std;

const float taxaJurosMensal = 0.05;

 // void imprimirCliente(Cliente pessoa) {
   // std::cout << pessoa.nome << std::endl;
 // }


int main() {
  
  Cliente Julia;
   //----------------------------------------- 
  Julia.CadastrarCliente("Julia");
  
  std::cout << endl << "Cliente 1: "<< Julia.getNome() << std::endl;

  Julia.AdicionarUnidade("Rua-Joao_Moreira");
  Julia.AdicionarUnidade("Rua Antônio Carlos");
  Julia.AdicionarUnidade("3");
  
  cout << "--- Lista de Unidades ---" << endl;
  Julia.ImprimeListaUnidades();
  cout << endl;

  Leitura jan;
  jan.RealizarLeitura(500);
  Data vencJan(2022,05,05,0,0,0);
  Fatura Janeiro(200, jan.ConsultarLeitura(),vencJan);
  Janeiro.quitarFatura();
  Julia.AdicionarFatura(Janeiro, "3");
  
  Leitura fev;
  Data vencFev(2022,05,05,0,0,0);
  fev.RealizarLeitura(200);
  Fatura Fevereiro(150, jan.ConsultarLeitura(),vencFev);
  Julia.AdicionarFatura(Fevereiro, "3");

  Julia.ImprimirFaturasDasUnidades("3");


  cout << "Pagamento pendente: " << Julia.CalcularPagamento();
  return 0;
}