#include <iostream>
#include "Arquivos-h/Modulo1/cliente.h"
#include "Arquivos-h/Modulo1/pessoafisica.h"
#include "Arquivos-h/Modulo1/pessoajuridica.h"
#include "Arquivos-h/Modulo1/fatura.h"
#include "Arquivos-h/Modulo2/leitura.h"
#include "Arquivos-h/Modulo2/funcionario.h"
#include "Arquivos-h/Modulo3/Permissao.h"
#include "Arquivos-h/Modulo3/Erro.h"
#include "Arquivos-h/Modulo2/leiturista.h"
#include "Arquivos-h/Modulo2/eletricista.h"
#include "Arquivos-h/Geral/Hoje.h"



using namespace std;

const float taxaJurosMensal = 0.05;

int main() {

  try{ 
  Hoje dataHoje;
  Data hoje = dataHoje.hoje();
  Data junho3(2022,6,3,0,0,0);

  LocalizacaoGeografica loc1 = LocalizacaoGeografica(20, 50);
  Endereco endereco1 = Endereco("Rua 34", 20, "1200", "Time Square", "10001", "NYC", "NY", loc1);
  PessoaFisica Julia = PessoaFisica("Julia", "12873297646", "julia@gmail.com", "3482-8065", endereco1);

  cout << endl << "Cliente 1: "<< Julia.getNome() << endl;


  LocalizacaoGeografica loc2 = LocalizacaoGeografica(30, 50);
  Endereco end2 = Endereco("Rua 60", 180, "1200", "Silveira", "10001", "BH", "MG", loc2);
  PessoaJuridica itau = PessoaJuridica("Itau","60701190000104", "itau@gmail.com", "33333333", end2);

  //Identicar problemas de cpf e CNPJ inválidos:

  //PessoaFisica Gabriel = PessoaFisica("Julia", "11950160695", "julia@gmail.com", "3482-8065", endereco1);
  //PessoaJuridica Oswaldo = PessoaJuridica("00000000000", "00000000000012", "julia@gmail.com", "3482-8065", endereco1);

  Endereco endUnidade1 = Endereco("Rua 1", 1, "1", "1", "1", "1", "1", loc1); 
  Endereco endUnidade2 = Endereco("Rua 2", 2, "2", "2", "2", "2", "2", loc1); 
  Endereco endUnidade3 = Endereco("Rua 3", 3, "3", "3", "3", "3", "3", loc1); 
  


  Julia.AdicionarUnidade(endUnidade1, "1", "BT", 500);
  Julia.AdicionarUnidade(endUnidade2, "2", "MT", 1500);  
  Julia.AdicionarUnidade(endUnidade3, "3", "AT", 40000);

  //Julia.AdicionarUnidade(endUnidade3, "2", "BT", 6000);

  Julia.listaLog.imprimirLogs();

  cout << "---------- Lista Unidades de Julia ----------" << endl;
  
  Julia.ImprimeListaUnidades();
  cout << endl;

  Leiturista Vitor = Leiturista("Vitor", "1");
 
  Vitor.FuncionarioRealizarLeitura(400,junho3, junho3,  Julia.PesquisarUnidade(endUnidade1));
  Vitor.FuncionarioRealizarLeitura(600,hoje, hoje,  Julia.PesquisarUnidade(endUnidade1));

  cout << "---------- Lista Faturas de Julia ----------" << endl;

  Julia.ImprimirFaturasDasUnidades(endUnidade1);

  cout <<"PAGAMENTOS EM ABERTO JULIA: "<< Julia.CalcularPagamento() << endl;
  }
  catch (Erro &e){
    e.imprimeErro();
  }


/*   Funcionario Joao = Funcionario("Joao");
  //Joao.FuncionarioRealizarLeitura(1000, dataHoje, *(Julia.PesquisarUnidade(end1)));
  //Joao.FuncionarioTrocarMedidor(dataHoje, *(Julia.PesquisarUnidade(end1)));
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

  Julia.ImprimeListaFaturasPagas(); */

  return 0;


}