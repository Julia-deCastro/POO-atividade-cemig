#include <iostream>
#include "Arquivos-h/Modulo1/cliente.h"
#include "Arquivos-h/Modulo1/pessoafisica.h"
#include "Arquivos-h/Modulo1/fatura.h"
#include "Arquivos-h/Modulo2/leitura.h"
#include "Arquivos-h/Modulo2/funcionario.h"


using namespace std;

const float taxaJurosMensal = 0.05;

  Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
  hoje.setDia(26);
  hoje.setMes(05);
  hoje.setAno(2022); 

  return hoje;
} 


int main() {
  
  Data dataHoje = hoje();
  Cliente Julia = Cliente("Julia");

  cout << endl << "Cliente 1: "<< Julia.getNome() << endl;

  Endereco end1 = Endereco("Rua 34", 20, "1200", "Time Square", "10001", "NYC", "NY", 20, 50);
  Endereco end2 = Endereco("Rua dos bobos", 0, "s/", "Concordia", "3110110", "BH", "MG", 30, 44);
  Julia.AdicionarUnidade(end1);
  Julia.AdicionarUnidade(end2);
  

   cout << "---------- Lista Unidades de Julia ----------" << endl;
  
  Julia.ImprimeListaUnidades();
  cout << endl;







  Funcionario Joao = Funcionario("Joao");
  Joao.FuncionarioRealizarLeitura(1000, dataHoje, *(Julia.PesquisarUnidade(end1)));
  Joao.FuncionarioTrocarMedidor(dataHoje, *(Julia.PesquisarUnidade(end1)));
  cout << "Número de serviços de Joao:" << Joao.NumeroServicos() << endl; 


  Data vencJan(2022,05,05,0,0,0);
  Fatura * Janeiro= new Fatura(200, Joao.getLeitura().ConsultarLeitura(),vencJan); 

  Janeiro->quitarFatura(); 
  Julia.AdicionarFatura(Janeiro, end1);
  Julia.QuitarFaturaCliente(end1,1);
  
  Leitura fev;
  Data vencFev(2022,05,05,0,0,0);
  fev.RealizarLeitura(200, dataHoje, *(Julia.PesquisarUnidade(end2)));
  Fatura * Fevereiro = new Fatura(150, Joao.getLeitura().ConsultarLeitura(),vencFev);
  Julia.AdicionarFatura(Fevereiro,(end2));

  Julia.ImprimirFaturasDasUnidades(end1);

  cout << "Pagamento pendente: " << Julia.CalcularPagamento() << endl;
  cout << endl;

  Julia.ImprimeListaFaturasPagas();

  return 0;
}