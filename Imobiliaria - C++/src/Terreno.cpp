#include "Terreno.h"
using namespace std;
Terreno::Terreno(double areaT)
{
     this->areaT=areaT;
     tipoImovel=3;
}
Terreno::Terreno()
{

     tipoImovel=3;
}
int Terreno::getTipoImovel(){

    return tipoImovel;


}
string Terreno::getdescricao(){
      stringstream ss;
    ss<<"********************************************\n"
      <<"TERRENO                                     \n"
      <<"**********Informacoes Especificas***********\n"
      <<"Area do Terreno: "<<areaT<<"m2"<<          "\n"
      <<"********************************************\n";

    return ss.str();
}

void Terreno::cadEspecifico(){
    int x;
    do{
        cout<<"******************************************\n";
        cout<<"Insira as informacoes especificas da casa:\n";
        cout<<"******************************************\n";
        cout<<"4-Area do terreno(em metros quadrados):\n";
        cin>>areaT;
        cout<<"Deseja salvar as alteracoes de TERRENO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}
void Terreno::setAreaT(double areaT){
    this->areaT=areaT;

}
double Terreno::getAreaT(){
    return areaT;

}

Terreno::~Terreno()
{
    //dtor
}
