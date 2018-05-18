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
      <<"Terreno                                     \n"
      <<"*******Informacoes Especificas**************\n"
      <<"Area do Terreno: "<<areaT<<"m2"<<          "\n"
      <<"********************************************\n";

    return ss.str();
}

void Terreno::cadEspecifico(){
        cout<<"******************************************\n";
        cout<<"Insira as informacoes especificas da casa:\n";
        cout<<"******************************************\n";
        cout<<"4-Area do terreno(em metros quadrados):\n";
        cin>>areaT;

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
