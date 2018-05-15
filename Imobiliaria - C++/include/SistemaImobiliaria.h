#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"

class SistemaImobiliaria:public Imovel
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();
        void cadastraImovel();
        void getImoveis();
        void getDescricaoImoveis();
        void getImoveisPorTipo(int);
        void getImoveisParaAlugarPorBairro(std::string);
        void getImoveisParaVenderPorBairro(std::string);
        void getImoveisPorCidade(std::string);

    protected:

    private:

};

#endif // SISTEMAIMOBILIARIA_H
