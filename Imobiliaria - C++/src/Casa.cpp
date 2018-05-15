#include "Casa.h"
#include <string>
#include <stdio.h>
using namespace std;


Casa::Casa()
{
    tipoImovel=1;
}


void Casa::setPav(int numPavimentos){
    this->numPavimentos=numPavimentos;
}
void Casa::setQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}
void Casa::setAreaT(double areaTerreno){
    this->areaTerreno=areaTerreno;

}
void Casa::setAreaC(double areaConstruida){
    this->areaConstruida=areaConstruida;

}

int Casa::getPav(){
    return numPavimentos;

}
int Casa::getQuartos(){
    return numQuartos;

}
double Casa::getAreaT(){
    return areaTerreno;

}

double Casa::getAreaC(){
    return areaConstruida;

}

double Casa::getValor(){
    return valor;
}


string Casa::getdescricao(){
    return "teste";


}
int Casa::getTipoImovel(){

    return tipoImovel;

}
Casa::~Casa()
{
    //dtor
}
