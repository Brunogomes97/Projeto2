#include "Casa.h"
#include <string>
#include <stdio.h>
using namespace std;


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

Casa::Casa()
{
    //ctor
}
double Casa::getValor(){
    return valor;
}
Endereco Casa::getEndereco(Endereco ender){
    d=ender;
    return d;
}

string Casa::getdescricao(){
    return "teste";


}
int Casa::getTipoImovel(){
    return 1;

}
Casa::~Casa()
{
    //dtor
}
