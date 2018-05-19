#ifndef FLAT_H
#define FLAT_H
#include "Imovel.h"

class Flat : public Imovel
{
    public:

        Flat();
        virtual ~Flat();
        int getTipoImovel();
        std::string getdescricao();
        void cadEspecifico();
        void boolFL();

    private:

        float areaFL;
        int quartosFL;
        int vagasFl;
        std::string posicaoFL;
        bool arFL;
        bool internet_tvFL;
        bool lavanderiaFL;
        bool limpezaFL;
        bool recepcaoFL;


};

#endif // FLAT_H
