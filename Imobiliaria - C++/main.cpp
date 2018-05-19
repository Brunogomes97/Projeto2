#include <iostream>
#include "Endereco.h"
#include <string>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "SistemaImobiliaria.h"
#include <sstream>
#include <ctype.h>
#include "Studio.h"
#include "Flat.h"
#include <stdio.h>
using namespace std;

int main()
{
   int caso;
   int i=0;
   string imov;

   Casa *cas;
   Apartamento *ap;
   Terreno *t;
   Studio *st;
   Flat *fl;
   SistemaImobiliaria sys;

    do{
        cout<<"*************************************************\n";
        cout<<"*******************BEM VINDO!********************\n";
        cout<<"*************************************************\n";
        cout<<"1-Cadastrar imoveis\n\n";
        cout<<"2-Verificar todos os imoveis disponiveis\n\n";
        cout<<"3-Consulte todos os atributos de um imovel\n\n";
        cout<<"4-Verificar os imoveis disponiveis para venda\n\n";
        cout<<"5-Verificar os imoveis disponiveis para alugar\n\n";
        cout<<"6-Verificar os imoveis para alugar por bairro\n\n";
        cout<<"7-Verificar os imoveis para vender por bairro\n\n";
        cout<<"8-Verificar os imoveis disponiveis por cidade\n\n";
        cout<<"9-Deletar imovel da lista\n\n";
        cout<<"10-Sair do Programa\n\n";
        cout<<"*************************************************\n";
        cout<<"Insira a opcao desejada:\n";
        cin>>caso;
        switch (caso){

        case 1:

         if(i>99){
            cout<<"Limite de Imoveis cadastrados!\n";
            break;

         }else{
            system("cls");
            cout<<"***************************************************************\n";
            cout<<"O que deseja cadastrar?(CASA,APARTAMENTO,TERRENO,STUDIO e FLAT)\n";
            cout<<"***************************************************************\n";
            setbuf(stdin,NULL);
            getline(cin,imov);
            sys.strupr(imov);
            system("cls");

            if(imov=="CASA"){
                 cas = new Casa();
                 system("cls");
                 sys.cadastraImovel(cas,i);
                 i++;

            }
            else if(imov =="APARTAMENTO"){
                ap = new Apartamento();
                system("cls");
                sys.cadastraImovel(ap,i);
                i++;

            }else if(imov =="TERRENO"){
                t = new Terreno();
                system("cls");
                sys.cadastraImovel(t,i);
                i++;

            }
              else if(imov =="STUDIO"){
                st = new Studio();
                system("cls");
                sys.cadastraImovel(st,i);
                i++;

            }
              else if(imov =="FLAT"){
                fl = new Flat();
                system("cls");
                sys.cadastraImovel(fl,i);
                i++;

            }
         }
            break;
            system("cls");



        case 2:
            system("cls");
            sys.getImoveis();
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            sys.getDescricaoImoveis();
            system("cls");
            break;

        case 4:
            system("cls");
            sys.getImoveisVendaPorTipo();
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");
            sys.getImoveisAlugarPorTipo();
            system("pause");
            system("cls");
            break;
        case 6:
            system("cls");
            sys.getImoveisParaAlugarPorBairro();

            break;
        case 7:
            system("cls");
            sys.getImoveisParaVenderPorBairro();

            break;
        case 8:
            system("cls");
            sys.getImoveisPorCidade();
            break;
        case 9:
            system("cls");
            sys.deleteImovel();
            system("pause");
            system("cls");
            break;

        case 10:

            break;
        default:
            cout<<"Insira uma entrada valida!\n";
            system("pause");
            system("cls");
            break;
        }



    }while(caso!=10);

    return 0;
}
