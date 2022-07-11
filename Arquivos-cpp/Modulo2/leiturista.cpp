#include "../../Arquivos-h/Modulo2/leiturista.h"
#include "../../Arquivos-h/Modulo3/Erro.h"
#include "../../Arquivos-h/Geral/Hoje.h"
#include "../../Arquivos-h/Modulo3/Permissao.h"

using namespace std;

const float preco_kVW = 0.25;


Leiturista::Leiturista(string Nome, string ID){

  this->setNome(Nome);
  this->setID(ID);
  

  this->getPermissao().adicionarPermissao("AdicionarServico");
  this->getPermissao().adicionarPermissao("RealizarLeitura");
  this->getPermissao().adicionarPermissao("getUnidadeConsumidora");
  this->getPermissao().adicionarPermissao("setNome");
  this->getPermissao().adicionarPermissao("setID");
  this->getPermissao().adicionarPermissao("getNome");
  this->getPermissao().adicionarPermissao("AdicionarServico");
  this->getPermissao().adicionarPermissao("getPermissao");
}
   
void Leiturista::AdicionarServico(Data data){

if(this->getPermissao().verificaPermissao("AdicionarServico") == false)
    throw Erro("Permissao negada"); 
  
  Hoje hoje;

  int numServicos = 0;

  for (Data it : this->getLista()){
    if(it.getDia() == hoje.hoje().getDia() &&
    it.getMes() == hoje.hoje().getMes() && it.getAno() == hoje.hoje().getAno()){
      numServicos ++;
    }
  }

  if(numServicos < 8){
    this->adicionarLista(data);
  }

  else
    cout << "Limite de serviços do dia atingido" << endl;  

}

void Leiturista::FuncionarioRealizarLeitura(float leitura, Data dataExecucao,Data dataPlanejada, UnidadeConsumidora * unidade){

  this->AdicionarServico(dataExecucao);
  
  Leitura leitura1;

  leitura1.RealizarLeitura(leitura, dataExecucao, dataPlanejada);
  
  this->criarFatura(leitura1,unidade);
  
  unidade->setLeituraTotal(leitura);

}

void Leiturista::criarFatura(Leitura leitura, UnidadeConsumidora * unidade){
  
  float consumo = leitura.ConsultarLeitura() - unidade->getLeituraTotal();
  float valorFatura = preco_kVW * consumo;

  Data vencimento = leitura.getDataExecucao();

  vencimento.setMes(vencimento.getMes()+1);
  
  if(vencimento.getMes()==13)
    vencimento.setMes(1);
  

  Fatura * fat = new Fatura(valorFatura, consumo, vencimento);

  unidade->AdicionarFaturaUnidade(fat);
}


void Leiturista::Encerrar(UnidadeConsumidora* unidade){

  throw Erro("Um leiturista não tem permissão para realizar essa função");
}

void Leiturista::EncerrarInadimplente(UnidadeConsumidora* unidade){
  throw Erro("Um leiturista não tem permissão para realizar essa função");
}

void Leiturista::realizarReligacao(UnidadeConsumidora* unidade){
  throw Erro("Um leiturista não tem permissão para realizar essa função");
}

void Leiturista::trocarMedidor(){
  throw Erro("Um leiturista não tem permissão para realizar essa função");
}