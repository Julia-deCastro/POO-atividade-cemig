#ifndef FATURA_H
#define  FATURA_H
#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Geral/Formato.h"

class Fatura{

    public:

        Fatura(float valorFatura, float consumo, Data data_vencimento);
        void quitarFatura ();
        float calcularJuros ();
        void imprimirFatura();
        float getValorFatura();
        float getValorPago();
        bool getQuitado();
        float getConsumo();
        int getDiasAtraso();
        Data getDataVencimento();
        Data getDataPagamento();


    private:
        float valorFatura;
        float valorPago;
        bool quitado;
        float consumo;
        Data dataVencimento;
        Data dataPagamento;
        int diasAtraso; //Queremos apenas os dias de atraso
        
};

#endif