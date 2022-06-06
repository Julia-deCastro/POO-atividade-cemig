#include <iostream>
#include "Arquivos-h/Modulo1/cliente.h"
#include "Arquivos-h/Modulo1/pessoafisica.h"
#include "Arquivos-h/Modulo1/fatura.h"
#include "Arquivos-h/Modulo2/leitura.h"


using namespace std;

const float taxaJurosMensal = 0.05;

/* Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
  hoje.setDia(26);
  hoje.setMes(05);
  hoje.setAno(2022); 

  return hoje;
} */


int main() {
  
  /* Data dataHoje = hoje();
  Cliente *Julia = new Cliente("Julia");

  std::cout << endl << "Cliente 1: "<< (*Julia).getNome() << std::endl;

  LocalizacaoGeografica *local = new LocalizacaoGeografica(20, 50);
  Endereco *end = new Endereco("Casa", 150, "Ouro Preto", "Casa","12314-123","BH","MG", (*local));
  Endereco *end2 = new Endereco("Ap", 150, "Pampulha", "Ap n 310","12314-123","BH","MG", (*local));
  (*Julia).AdicionarUnidade((*end));
  (*Julia).AdicionarUnidade((*end2));
  
  cout << "--- Lista de Unidades ---" << endl;
  (*Julia).ImprimeListaUnidades();
  cout << endl;

  Leitura jan;
  jan.RealizarLeitura(500, dataHoje, *(*Julia).PesquisarUnidade((*end)));
  Data vencJan(2022,05,05,0,0,0);
  Fatura * Janeiro= new Fatura(200, jan.ConsultarLeitura(),vencJan); */
  /* Janeiro->quitarFatura(); */
 /*  (*Julia).AdicionarFatura(Janeiro, (*end));
  (*Julia).QuitarFaturaCliente((*end),1);
  
  Leitura fev;
  Data vencFev(2022,05,05,0,0,0);
  fev.RealizarLeitura(200, dataHoje, *(*Julia).PesquisarUnidade((*end2)));
  Fatura * Fevereiro = new Fatura(150, jan.ConsultarLeitura(),vencFev);
  (*Julia).AdicionarFatura(Fevereiro,(*end2));

  (*Julia).ImprimirFaturasDasUnidades((*end));

  cout << "Pagamento pendente: " << (*Julia).CalcularPagamento() << endl;
  cout << endl;

  (*Julia).ImprimeListaFaturasPagas(); */

  return 0;
}