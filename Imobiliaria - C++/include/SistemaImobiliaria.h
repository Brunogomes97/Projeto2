#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Studio.h"
#include "Flat.h"
#include <iostream>
#include <fstream>
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
        void strupr(std::string &str);  //colocar strings em caixa maiuscula(utilitario)
        bool getfbool(int);


        void deleteImovel();
        void desabImovel();
        void HabImovel();
        std::string typeImovel(int);
        void salvarArquivos(int y);
        void salvarAlteracoes();
        int recuperarArquivos(Casa *c,Apartamento *a,Terreno *t,Studio *st,Flat *fl);
    private:
        Imovel *imoveis[MAX];
        int flag=0;//contador de imoveis cadastrados
        bool fbool[MAX]={0};//habilitador de imoveis disponiveis para o usuario(1-ON 0-OFF)


};

#endif // SISTEMAIMOBILIARIA_H
