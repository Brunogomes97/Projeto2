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
        void setValorCond(double);
        void setGaragem(int);
        void setAreaAP(double);
        std::string getPosicao();
        int getQuartos();
        int getGaragem();
        double getValorCond();
        double getAreaAP();
        Endereco getEndereco(Endereco d);
        std::string getdescricao();
    private:
        std::string posicao;
        int numQuartos;
        double valorCondominio;
        int vagasGaragem;
        double areaAP;
};

#endif // APARTAMENTO_H
