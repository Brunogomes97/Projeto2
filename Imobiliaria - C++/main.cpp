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

using namespace std;
int maina(){


/*
    cout<<imo->getTipoImovel()<<endl;
   // imo[0]->setPav(5);
    imo->getEndereco(Endereco("Joao Pessoa","Centro","98020020","AV Silva",2323));
    cout<<imo->d.getBairro()<<endl;
    cout<<imo->d.getCidade()<<endl;
    cout<<imo->d.getCep()<<endl;
    cout<<imo->d.getNumero()<<endl;
    cout<<imo->d.getLogradouro()<<endl;

    delete imo;


   Casa *imo = new Casa();
   Apartamento *imo2 = new Apartamento();
   Terreno *imo3 = new Terreno();

  // cout<<imo->getdescricao()<<endl;
    imo3->setAreaT(458);
    imo->setAreaC(45);
    imo2->setPosicao("Zona norte");

  cout<<imo2->getPosicao()<<endl;
  cout<<imo->getAreaC()<<endl;
  cout<<imo3->getAreaT()<<endl;
  //imo->d.setCidade("Joao Pessoa");
  cout<<imo->d.getBairro()<<endl;
  cout<<imo->d.getCidade()<<endl;
  cout<<imo->d.getCep()<<endl;
  cout<<imo->d.getNumero()<<endl;
  cout<<imo->d.getLogradouro()<<endl;





      system("cls");
    cout<<imo->d.getBairro()<<endl;
    cout<<imo->d.getCidade()<<endl;
    cout<<imo->d.getCep()<<endl;
    cout<<imo->d.getNumero()<<endl;
    cout<<imo->d.getLogradouro()<<endl;
    cout<<imo->getPav()<<endl;
    cout<<imo->getQuartos()<<endl;
    cout<<imo->getAreaT()<<endl;
    cout<<imo->getAreaC()<<endl;

    system("pause");


   delete imo;
*/
    return 1;
}




int main()
{
   int caso;
   int i=0;
   string imov;

   Casa *cas;
   Apartamento *ap;
   Terreno *t;
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

         if(i>100){
            cout<<"Limite de Imoveis cadastrados!";
            break;

         }else{
            system("cls");
            cout<<"*************************************************\n";
            cout<<"O que deseja cadastrar?(CASA,APARTAMENTO,TERRENO)\n";
            cout<<"*************************************************\n";
            cin>>imov;

            if(imov=="CASA"){
                 cas = new Casa();
                 system("cls");
                 sys.cadastraImovel(cas,i);
                 i++;

            }
            else if(imov =="APARTAMENTO"){
                ap = new Apartamento();
                sys.cadastraImovel(ap,i);
                i++;

            }else if(imov =="TERRENO"){
                t = new Terreno();
                sys.cadastraImovel(t,i);
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
            //
            system("pause");
            system("cls");
            break;

        case 4:
            //
            system("cls");
            break;

        case 5:
            //
            system("cls");
            break;
        case 6:
            system("cls");
            //

            break;
        case 7:
            system("cls");
            //

            break;
        case 8:
            system("cls");
            //;
            break;
        case 9:
            system("cls");
          //

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
