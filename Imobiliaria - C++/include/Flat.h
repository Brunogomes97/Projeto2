#ifndef FLAT_H
#define FLAT_H
#include "Imovel.h"
#include <fstream>

class Flat : public Imovel
{
    public:

        Flat();
        Flat(float areaFL,int quartosFL,std::string posicaoFL,int vagasFl,
        bool arFL,bool internet_tvFL,bool lavanderiaFL,bool limpezaFL,bool recepcaoFL);
        virtual ~Flat();
        int getTipoImovel();
        void setTipoImovel(int);
        std::string getdescricao();
        void cadEspecifico();
        void boolFL();

        float getAreaF();
        int getQuartos();
        std::string getPosicao();
        int getVagas();

        bool getAr();
        bool getInternet_tv();
        bool getLavanderia();
        bool getLimpeza();
        bool getRecepcao();
        void savarExpecifico();

    private:

        float areaFL;
        int quartosFL;
        std::string posicaoFL;
        int vagasFl;
        bool arFL;
        bool internet_tvFL;
        bool lavanderiaFL;
        bool limpezaFL;
        bool recepcaoFL;


};

#endif // FLAT_H
