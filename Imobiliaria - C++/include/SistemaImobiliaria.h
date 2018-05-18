#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <iostream>
#define MAX 100
class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();
        void cadastraImovel(Imovel *a,int);
        void descricao(int);
        void getImoveis();
        void getDescricaoImoveis();
        void getImoveisVendaPorTipo();
        void getImoveisAlugarPorTipo();
        void getImoveisParaAlugarPorBairro();
        void getImoveisParaVenderPorBairro();
        void getImoveisPorCidade();
        void strupr(std::string &str);

    private:
        Imovel *imoveis[MAX];
        int flag=0;
        bool fbool[MAX]={0};


};

#endif // SISTEMAIMOBILIARIA_H
