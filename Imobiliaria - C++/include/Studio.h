#ifndef STUDIO_H
#define STUDIO_H

#include "Imovel.h"

class Studio: public Imovel
{
    public:
        Studio(int,int,double,double);
        Studio();
        virtual ~Studio();
        int getTipoImovel();
        std::string getdescricao();
        void cadEspecifico();
        void boolST();

    private:
        float areaST;
        int quartosST;
        int vagasST;
       std::string posicaoST;

        bool arST;
        bool internet_tvST;
        bool lavanderiaST;
        bool limpezaST;
        bool recepcaoST;
        bool piscinaST;
        bool saunaST;
        bool ginasticaST;



};
#endif // STUDIO_H
