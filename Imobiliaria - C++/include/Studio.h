#ifndef STUDIO_H
#define STUDIO_H
#include "Imovel.h"
#include <fstream>

class Studio: public Imovel
{
    public:
        Studio(float areaST,int quartosST,std::string posicaoST,
        int vagasST,bool arST,bool internet_tvST,bool lavanderiaST,bool limpezaST,
        bool recepcaoST,bool piscinaST,bool saunaST,bool ginasticaST);
        Studio();
        virtual ~Studio();
        int getTipoImovel();
        void setTipoImovel(int );
        std::string getdescricao();
        void cadEspecifico();
        void boolST();

        float getAreaF();
        int getQuartos();
        std::string getPosicao();
        int getVagas();

        bool getAr();
        bool getInternet_tv();
        bool getLavanderia();
        bool getLimpeza();
        bool getRecepcao();
        bool getPiscina();
        bool getSauna();
        bool getGinastica();
        void savarExpecifico();

    private:
        float areaST;
        int quartosST;
        std::string posicaoST;
        int vagasST;

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
