#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <fstream>

class Casa : public Imovel
{
    public:
        Casa(int,int,double,double);
        Casa();
        virtual ~Casa();
        int getTipoImovel();
        void setTipoImovel(int);
        std::string getdescricao();
        void cadEspecifico();
        void setPav(int);
        void setQuartos(int);
        void setAreaT(double);
        void setAreaC(double);
        int getPav();
        int getQuartos();
        double getArea();
        double getAreaC();
        void savarExpecifico();

    private:
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;




};

#endif // CASA_H
