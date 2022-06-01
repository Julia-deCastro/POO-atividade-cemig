#ifndef FATURA_H
#define  FATURA_H

#include "../../Arquivos-h/Geral/Data.h"
#include "../../Arquivos-h/Geral/ExecaoCustomizada.h"
#include "../../Arquivos-h/Geral/Formato.h"


class Fatura{

    public:

        Fatura(float valorFatura, float consumo, Data data_vencimento);
        Fatura();
        void quitarFatura ();
        float calcularJuros ();
        void imprimirFatura();
        float getValorFatura();
        float getValorPago();
        bool getQuitado();
        float getConsumo();
        int getDiasAtraso();
        int getId();
        Data getDataVencimento();
        Data getDataPagamento();
        void setDataPagamento();

    private:

        int id;
        bool quitado;
        float valorFatura;
        float valorPago;
        float consumo;
        Data dataVencimento;
        Data dataPagamento;     
        static int cont_id;  
        
};

#endif