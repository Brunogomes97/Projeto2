#include "Flat.h"
using namespace std;

Flat::Flat()
{

    tipoImovel=5;
}
string Flat::getdescricao(){

    stringstream ss;
    ss<<"********************************************\n"
      <<"CASA                                        \n"
      <<"**********Informacoes Especificas***********\n"
      <<"Area do Flat: "<<areaFL<<"m2"<<            "\n"
      <<"Quant. de Quartos: "<<quartosFL<<"m2"<<    "\n"
      <<"Referencia: "<<posicaoFL<<"m2"<<           "\n"
      <<"********************************************\n";


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
        cin>>posicaoFL;
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
        cout<<"Deseja salvar as alteracoes de CASA?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}


int Flat::getTipoImovel(){

    return tipoImovel;

}


Flat::~Flat()
{
    //dtor
}
