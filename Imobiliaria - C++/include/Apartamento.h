#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <fstream>

class Apartamento : public Imovel
{
    public:
        Apartamento(std::string,int,int,int,double);
        Apartamento();
        virtual ~Apartamento();
        int getTipoImovel();
        void setTipoImovel(int);
        void setPosicao(std::string);
        void setQuartos(int);
        void setGaragem(int);
        void setAreaAP(double);
        void cadEspecifico();
        std::string getPosicao();
        int getQuartos();
        int getGaragem();
        double getArea();
        std::string getdescricao();
        void savarExpecifico();

    private:
        std::string posicao;
        int numQuartos;
        int vagasGaragem;
        double areaAP;
        int andar;
};

#endif // APARTAMENTO_H
