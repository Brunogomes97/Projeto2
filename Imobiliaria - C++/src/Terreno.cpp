#include "Terreno.h"
using namespace std;
Terreno::Terreno()
{
     tipoImovel=3;
}

int Terreno::getTipoImovel(){

    return tipoImovel;


}
string Terreno::getdescricao(){
    return "teste";
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
