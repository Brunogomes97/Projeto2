#include "Terreno.h"
using namespace std;
Terreno::Terreno()
{
    //ctor
}

int Terreno::getTipoImovel(){
    return 3;


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
Endereco Terreno::getEndereco(Endereco ender){
    d=ender;
    return d;
}
Terreno::~Terreno()
{
    //dtor
}
