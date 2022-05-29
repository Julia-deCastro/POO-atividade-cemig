#include <iostream>
#include "Arquivos-h/Modulo 1/cliente.h"
#include "Arquivos-h/Modulo 1/pessoafisica.h"
#include "Arquivos-h/Modulo 1/fatura.h"
#include "Arquivos-h/Modulo 2/leitura.h"


using namespace std;

const float taxaJurosMensal = 0.05;

 // void imprimirCliente(Cliente pessoa) {
   // std::cout << pessoa.nome << std::endl;
 // }

int main() {
  
  Cliente Julia;
  Cliente Gabriel;
 //----------------------------------------- 
  Julia.CadastrarCliente("Julia");
  Gabriel.CadastrarCliente("Gabriel");
  
  std::cout << endl << "Cliente 1: "<< Julia.getNome() << std::endl;

   Julia.AdicionarUnidade("Rua-Joao_Moreira");
  Julia.AdicionarUnidade("Rua Antônio Carlos");
  Julia.AdicionarUnidade("Avenida das Americas");
  
  cout << "--- Lista de Unidades ---" << endl;
  Julia.ImprimeListaUnidades();
  cout << endl;

  
  //UnidadeConsumidora Unidade2 = Julia.PesquisarUnidade("Rua-Joao_Moreira");
  //UnidadeConsumidora *Unidade3 = Julia.PesquisarUnidade("Rua-Joao_Moreira");

  Leitura jan;
  jan.RealizarLeitura(500);
  Data vencJan(2022,05,05,0,0,0);
  Fatura Janeiro(200, jan.ConsultarLeitura(),vencJan);
  Janeiro.quitarFatura();
  //Unidade1->AdicionarFatura(Janeiro);
  Julia.AdicionarFatura(Janeiro, "Rua-Joao_Moreira");
  //Unidade2->AdicionarFatura(Janeiro);
  //Unidade3->AdicionarFatura(Janeiro);

  
  Leitura fev;
  Data vencFev(2022,05,05,0,0,0);
  fev.RealizarLeitura(200);
  Fatura Fevereiro(150, jan.ConsultarLeitura(),vencFev);
  //Unidade1->AdicionarFatura(Fevereiro);
 //// Unidade2->AdicionarFatura(Fevereiro);
  //Unidade3->AdicionarFatura(Fevereiro);

  Julia.ImprimirFaturasDasUnidades("Rua-Joao_Moreira");


  cout << "Pagamento pendente: " << Julia.CalcularPagamento();
  return 0;
}