#include "Studio.h"
using namespace std;

Studio::Studio(float areaST,int quartosST,std::string posicaoST,
int vagasST,bool arST,bool internet_tvST,bool lavanderiaST,bool limpezaST,
bool recepcaoST,bool piscinaST,bool saunaST,bool ginasticaST)
{
    this->areaST=areaST;
    this->quartosST=quartosST;
    this->posicaoST=posicaoST;
    this->vagasST=vagasST;
    this->arST=arST;
    this->internet_tvST=internet_tvST;
    this->lavanderiaST=lavanderiaST;
    this->limpezaST=limpezaST;
    this->recepcaoST=recepcaoST;
    this->piscinaST=piscinaST;
    this->saunaST=saunaST;
    this->ginasticaST=ginasticaST;
    tipoImovel=4;
}


Studio::Studio(){
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
      <<"Area do Studio: "<<areaST<<"m2"<<          "\n"
      <<"Quant. de Quartos: "<<quartosST<<          "\n"
      <<"Referencia: "<<posicaoST<<                 "\n"
      <<"********************************************\n";

    boolST();

    return ss.str();

}


void Studio::boolST(){
    cout<<"********************************************\n";
    cout<<"STUDIO                                      \n";
    cout<<"**********Informacoes Especificas***********\n";
    cout<<("POSSUI:\n");
    if(arST == 1)
        cout<<("Ar Condicionado   \n");
    if(internet_tvST == 1)
        cout<<("Internet e TV     \n");
    if(lavanderiaST == 1)
        cout<<("Lavanderia e Servicos \n");
    if(limpezaST == 1)
        cout<<("Serv. de limpeza  \n");
    if(recepcaoST == 1)
        cout<<("Recepcao 24h      \n");
    if(piscinaST == 1)
        cout<<("Piscina           \n");
    if(saunaST == 1)
        cout<<("Sauna             \n");
    if(ginasticaST == 1)
        cout<<("Sala de Ginast.   \n");
    cout<<"********************************************\n";

}


void Studio::cadEspecifico(){

    int x;
    do{
        cout<<"*********************************************************\n";
        cout<<"Insira as informacoes especificas do Studio:             \n";
        cout<<"*********************************************************\n";
        cout<<"1-Informe a area ocupada pelo Studio(em metro quadrados):\n";
        cin>>areaST;
        cout<<"2-Informe o numero de quartos do Studio:                 \n";
        cin>>quartosST;
        cout<<"3-Informe alguma referencia(posicao):                    \n";
        setbuf(stdin,NULL);
        getline(cin,posicaoST);
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
        cout<<"Deseja salvar as alteracoes de STUDIO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}


int Studio::getTipoImovel(){

    return tipoImovel;

}

void Studio::setTipoImovel(int t){

    tipoImovel=t;
}

float Studio::getAreaF(){
    return areaST;
}

int Studio::getQuartos(){
    return quartosST;
}

int Studio::getVagas(){
    return vagasST;
}

std::string Studio::getPosicao(){
    return posicaoST;
}

bool Studio::getAr(){
    return arST;
}

bool Studio::getInternet_tv(){
    return internet_tvST;
}

bool Studio::getLavanderia(){
    return lavanderiaST;
}

bool Studio::getLimpeza(){
    return limpezaST;
}

bool Studio::getRecepcao(){
    return recepcaoST;
}

bool Studio::getPiscina(){
    return piscinaST;
}

bool Studio::getSauna(){
    return saunaST;
}

bool Studio::getGinastica(){
    return ginasticaST;
}

void Studio::savarExpecifico(){
    fstream studios;
    studios.open("studio.txt",ios::out|ios::app);
    studios << posicaoST <<"\n";
    studios << areaST <<"\n";
    studios << quartosST <<"\n";
    studios << vagasST <<"\n";
    studios << arST <<"\n";
    studios << internet_tvST <<"\n";
    studios << lavanderiaST <<"\n";
    studios << limpezaST <<"\n";
    studios << recepcaoST <<"\n";
    studios << piscinaST <<"\n";
    studios << saunaST <<"\n";
    studios << ginasticaST <<"\n";
    studios.close();
}

Studio::~Studio()
{
    //dtor
}
