#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();
        int getTipoImovel();
        void setPosicao(std::string);
        void setQuartos(int);
        void setGaragem(int);
        void setAreaAP(double);
        std::string getPosicao();
        int getQuartos();
        int getGaragem();
        double getAreaAP();
        std::string getdescricao();
    private:
        std::string posicao;
        int numQuartos;
        int vagasGaragem;
        double areaAP;
};

#endif // APARTAMENTO_H
