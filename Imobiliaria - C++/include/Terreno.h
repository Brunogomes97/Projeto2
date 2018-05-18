#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
class Terreno: public Imovel
{
    public:
        Terreno(double);
        Terreno();
        virtual ~Terreno();
        void setAreaT(double);
        double getAreaT();
        std::string getdescricao();
        void cadEspecifico();
        int getTipoImovel();
    private:
        double areaT;
};

#endif // TERRENO_H
