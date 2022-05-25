#ifndef FATURA_H
#define  FATURA_H

class Fatura{

    public:

        Fatura(float valorFatura, float consumo, int diasAtraso);
        void quitarFatura ();
        float calcularJuros ();
        float getValorFatura();
        float getValorPago();
        bool getQuitado();
        float getConsumo();
        int getDiasAtraso();
        


    private:
        float valorFatura;
        float valorPago;
        bool quitado;
        float consumo;
        int diasAtraso; //Queremos apenas os dias de atraso
        
};

#endif