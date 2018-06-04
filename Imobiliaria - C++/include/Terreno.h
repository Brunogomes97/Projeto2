#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include <fstream>
class Terreno: public Imovel
{
    public:
        Terreno(double);
        Terreno();
        virtual ~Terreno();
        void setAreaT(double);
        double getArea();
        std::string getdescricao();
        void cadEspecifico();
        int getTipoImovel();
        void setTipoImovel(int);
        void savarExpecifico();

    private:
        double areaT;
};

#endif // TERRENO_H
