#include "Studio.h"
using namespace std;

Studio::Studio()
{
    arST=0;
    internet_tvST=0;
    lavanderiaST=0;
    limpezaST=0;
    recepcaoST=0;
    piscinaST=0;
    saunaST=0;
    ginasticaST=0;
    tipoImovel=4;
}
string Studio::getdescricao(){

    stringstream ss;
    ss<<"********************************************\n"
      <<"STUDIO                                       \n"
      <<"**********Informacoes Especificas***********\n"
      <<"Area do Studio: "<<areaST<<"m2"<<          "\n"
      <<"Quant. de Quartos: "<<quartosST<<"m2"<<    "\n"
      <<"Referencia: "<<posicaoST<<"m2"<<           "\n"
      <<"********************************************\n";


    return ss.str();

}
void Studio::cadEspecifico(){

    int x;
    do{
        cout<<"*********************************************************\n";
        cout<<"Insira as informacoes especificas da casa:               \n";
        cout<<"*********************************************************\n";
        cout<<"1-Informe a area ocupada pelo Studio(em metro quadrados):\n";
        cin>>areaST;
        cout<<"2-Informe o numero de quartos do Studio:                 \n";
        cin>>quartosST;
        cout<<"3-Informe alguma referencia(posicao):                    \n";
        cin>>posicaoST;
        cout<<"4-Numeros de vagas na garagem?:                          \n";
        cin>>vagasST;
        cout<<"5-O Studio possui ar condicionado?(Sim - 1/Nao - 0):     \n";
        cin>>arST;
        cout<<"6-O Studio possui internet e TV a cabo?(Sim - 1/Nao - 0):\n";
        cin>>internet_tvST;
        cout<<"7-O Studio possui servicos de lavanderia?(Sim - 1/Nao - 0):\n";
        cin>>lavanderiaST;
        cout<<"8-O Studio possui arrumacao/limpeza?(Sim - 1/Nao - 0):   \n";
        cin>>limpezaST;
        cout<<"9-O Studio possui recepcao 24h?(Sim - 1/Nao - 0):        \n";
        cin>>recepcaoST;
        cout<<"10-O Studio possui piscina?(Sim - 1/Nao - 0):            \n";
        cin>>piscinaST;
        cout<<"11-O Studio possui sauna?(Sim - 1/Nao - 0):              \n";
        cin>>saunaST;
        cout<<"12-O Studio possui sala de ginastica?(Sim - 1/Nao - 0):  \n";
        cin>>ginasticaST;
        cout<<"Deseja salvar as alteracoes de CASA?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}


int Studio::getTipoImovel(){

    return tipoImovel;

}


Studio::~Studio()
{
    //dtor
}
