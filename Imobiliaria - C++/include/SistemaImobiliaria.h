#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "Casa.h"
#include <iostream>
#define MAX 100
class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();
        void cadastraImovel(Imovel *a,int);
        void getImoveis();
        void getDescricaoImoveis();
        void getImoveisPorTipo(int);
        void getImoveisParaAlugarPorBairro(std::string);
        void getImoveisParaVenderPorBairro(std::string);
        void getImoveisPorCidade(std::string);
        Imovel *imoveis[MAX];

    protected:

    private:

};

#endif // SISTEMAIMOBILIARIA_H
