#include <iostream>
#include "Arquivos-h/Modulo1/cliente.h"
#include "Arquivos-h/Modulo1/pessoafisica.h"
#include "Arquivos-h/Modulo1/fatura.h"
#include "Arquivos-h/Modulo2/leitura.h"
#include "Arquivos-h/Modulo2/funcionario.h"


using namespace std;

const float taxaJurosMensal = 0.05;

 // void imprimirCliente(Cliente pessoa) {
   // std::cout << pessoa.nome << std::endl;
 // }
 Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
  hoje.setDia(01);
  hoje.setMes(06);
  hoje.setAno(2022); 

  return hoje;
}

int main() {
  
  Data dataHoje = hoje();
  
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

  Funcionario Samuel;
  Samuel.CadastrarFuncionario("Samuel", "1");

  Leitura jan;
  Servico leitura = jan.RealizarLeitura(500, Samuel.getID(),  dataHoje, Julia.PesquisarUnidade("3"));
  Samuel.AdicionarServico(leitura, dataHoje);

  Data vencJan(2022,05,05,0,0,0);
  Fatura * Janeiro= new Fatura(200, jan.ConsultarLeitura(),vencJan);
  /* Janeiro->quitarFatura(); */
  Julia.AdicionarFatura(Janeiro, "3");
  Julia.QuitarFaturaCliente("3",1);
  
  Leitura fev;
  Data vencFev(2022,05,05,0,0,0);
  fev.RealizarLeitura(200, Samuel.getID(),  dataHoje, Julia.PesquisarUnidade("3"));
  Fatura * Fevereiro = new Fatura(150, jan.ConsultarLeitura(),vencFev);
  Julia.AdicionarFatura(Fevereiro, "3");

  Julia.ImprimirFaturasDasUnidades("3");

  cout << "Pagamento pendente: " << Julia.CalcularPagamento() << endl;
  cout << endl;

  Julia.ImprimeListaFaturasPagas();

  return 0;
}