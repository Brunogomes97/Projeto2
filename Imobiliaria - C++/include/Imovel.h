#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
class Imovel
{
    public:
        Imovel();
        virtual double getValor();
        virtual int getTipoImovel()=0;
        virtual Endereco getEndereco(Endereco d);
        virtual ~Imovel();
        virtual void cadEspecifico()=0;
        virtual std::string getdescricao()=0;
        virtual void setValor(double);
        virtual void setOferta(int);
        void resetTipoImovel();
        Endereco d;
    protected:
        int tipoImovel; // casa-1,ap-2,terreno-3;
        int tipoOferta; //venda - 1, alugar - 2,indisponivel - 0
        double valor;


};

#endif // IMOVEL_H
