#include "../../Arquivos-h/Modulo2/leiturista.h"
#include "../../Arquivos-h/Modulo3/Erro.h"

using namespace std;

Data hoje(){
  
  Data hoje (0,0,0,0,0,0);
  
  hoje.setDia(26);
  hoje.setMes(05);
  hoje.setAno(2022); 

  return hoje;
}

void Leiturista::CadastrarFuncionario(string Nome, string ID){

  this->setNome(Nome);
  this->setID(ID);

  
  this->getPermissao().adicionarPermissao("AdicionarUnidade");
  this->getPermissao().adicionarPermissao("CalcularPagamento");
  this->getPermissao().adicionarPermissao("PesquisarUnidade");
  this->getPermissao().adicionarPermissao("getNome");
  this->getPermissao().adicionarPermissao("getInadimplente");
  this->getPermissao().adicionarPermissao("ImprimeListaFaturasPagas");
  this->getPermissao().adicionarPermissao("ImprimeListaUnidades");
  this->getPermissao().adicionarPermissao("AdicionarFatura");
  this->getPermissao().adicionarPermissao("ImprimirFaturasDasUnidades");
  this->getPermissao().adicionarPermissao("QuitarFaturaCliente");
  this->getPermissao().adicionarPermissao("setNome");
  
}
   
void Leiturista::AdicionarServico(Leitura servico, Data data){

if(this->getPermissao().verificaPermissao("AdicionarServico") == false)
    throw Erro("Permissao negada"); 
  
  int numServicos = 0;
  
  for (Leitura it : listaServicos){
    if(it.getDataExecucao().getDia() == hoje().getDia() &&
    it.getDataExecucao().getMes() == hoje().getMes() && it.getDataExecucao().getAno() == hoje().getAno()){
      numServicos ++;
    }
  }

  if(numServicos < 8)
    this->listaServicos.push_back(servico);

  else
    cout << "Limite de serviços do dia atingido" << endl;  

}