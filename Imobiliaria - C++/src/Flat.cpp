#include "Flat.h"
using namespace std;

Flat::Flat()
{

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


Flat::~Flat()
{
    //dtor
}
