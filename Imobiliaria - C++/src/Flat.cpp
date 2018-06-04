#include "Flat.h"
using namespace std;

Flat::Flat()
{

    tipoImovel=5;
}
Flat::Flat(float areaFL,int quartosFL,std::string posicaoFL,int vagasFl,
bool arFL,bool internet_tvFL,bool lavanderiaFL,bool limpezaFL,bool recepcaoFL)
{
    this->areaFL=areaFL;
    this->quartosFL=quartosFL;
    this->posicaoFL=posicaoFL;
    this->vagasFl=vagasFl;
    this->arFL=arFL;
    this->internet_tvFL=internet_tvFL;
    this->lavanderiaFL=lavanderiaFL;
    this->limpezaFL=limpezaFL;
    this->recepcaoFL=recepcaoFL;
    tipoImovel=5;
}
string Flat::getdescricao(){

    stringstream ss;
    ss<<"********************************************\n"
      <<"Area do Flat: "<<areaFL<<"m2"<<            "\n"
      <<"Quant. de Quartos: "<<quartosFL<<          "\n"
      <<"Referencia: "<<posicaoFL<<                 "\n"
      <<"********************************************\n";

      boolFL();

    return ss.str();

}
void Flat::cadEspecifico(){

    int x;
    do{
        cout<<"******************************************\n";
        cout<<"Insira as informacoes especificas do Flat:\n";
        cout<<"******************************************\n";
        cout<<"1-Informe a area ocupada pelo Flat(em metros quadrados):\n";
        cin>>areaFL;
        cout<<"2-Informe o numero de quartos do Flat:\n";
        cin>>quartosFL;
        cout<<"3-Informe alguma referencia(posicao):\n";
        setbuf(stdin,NULL);
        getline(cin,posicaoFL);
        cout<<"4-Numeros de vagas na garagem?:\n";
        cin>>vagasFl;
        cout<<"5-O Flat possui ar condicionado?(Sim - 1/Nao - 0):\n";
        cin>>arFL;
        cout<<"6-O Flat possui internet e TV a cabo?(Sim - 1/Nao - 0):\n";
        cin>>internet_tvFL;
        cout<<"7-O Flat possui servicos de lavanderia?(Sim - 1/Nao - 0):\n";
        cin>>lavanderiaFL;
        cout<<"8-O Flat possui arrumacao/limpeza?(Sim - 1/Nao - 0):\n";
        cin>>limpezaFL;
        cout<<"9-O Flat possui recepcao 24h?(Sim - 1/Nao - 0):\n";
        cin>>recepcaoFL;
        cout<<"Deseja salvar as alteracoes de FLAT?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}

void Flat::boolFL(){
    cout<<"********************************************\n";
    cout<<"FLAT                                        \n";
    cout<<"**********Informacoes Especificas***********\n";
    cout<<("POSSUI:\n");
    if(arFL == 1)
        cout<<"Ar Condicionado   \n";
    if(internet_tvFL == 1)
        cout<<"Internet e TV     \n";
    if(lavanderiaFL == 1)
        cout<<"Lavanderia e Ser. \n";
    if(limpezaFL == 1)
        cout<<"Serv. de limpeza  \n";
    if(recepcaoFL == 1)
        cout<<"Recepcao 24h      \n";
    cout<<"********************************************\n";

}
int Flat::getTipoImovel(){

    return tipoImovel;

}
void Flat::setTipoImovel(int t){

    tipoImovel=t;
}

float Flat::getAreaF(){
    return areaFL;
}

int Flat::getQuartos(){
    return quartosFL;
}

int Flat::getVagas(){
    return vagasFl;
}

std::string Flat::getPosicao(){
    return posicaoFL;
}

bool Flat::getAr(){
    return arFL;
}

bool Flat::getInternet_tv(){
    return internet_tvFL;
}

bool Flat::getLavanderia(){
    return lavanderiaFL;
}

bool Flat::getLimpeza(){
    return limpezaFL;
}

bool Flat::getRecepcao(){
    return recepcaoFL;
}

void Flat::savarExpecifico(){
    fstream flats;
    flats.open("flat.txt",ios::out|ios::app);
    flats << posicaoFL << "\n";
    flats << areaFL << "\n";
    flats << quartosFL << "\n";
    flats << vagasFl << "\n";
    flats << arFL << "\n";
    flats << internet_tvFL << "\n";
    flats << lavanderiaFL << "\n";
    flats << limpezaFL << "\n";
    flats << recepcaoFL << "\n";
    flats.close();
}

Flat::~Flat()
{
    //dtor
}
