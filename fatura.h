#ifndef FATURA_H
#define  FATURA_H

class Fatura{

    public:
        float valorFatura;
        float valorPago;
        bool quitado;
        float consumo;
        int diasAtraso; //Queremos apenas os dias de atraso

        Fatura(float valorFatura, float consumo, int diasAtraso);
        void quitarFatura ();
        float calcularJuros ();
        
};

#endif