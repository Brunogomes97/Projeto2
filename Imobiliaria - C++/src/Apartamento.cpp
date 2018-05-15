#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(){
    tipoImovel=2;

}

int Apartamento::getTipoImovel(){

    return tipoImovel;

}
 void Apartamento::setPosicao(std::string posicao){
     this->posicao=posicao;
 }
void Apartamento::setQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}

void Apartamento::setGaragem(int vagasGaragem){
    this->vagasGaragem=vagasGaragem;
}
void Apartamento::setAreaAP(double areaAP){
    this->areaAP=areaAP;
}
std::string Apartamento::getPosicao(){
    return posicao;

}
int Apartamento::getQuartos(){
    return numQuartos;

}
int Apartamento::getGaragem(){
    return vagasGaragem;
}

double Apartamento::getAreaAP(){
    return areaAP;

}
string Apartamento::getdescricao(){
    return "teste";
}

Apartamento::~Apartamento()
{
    //dtor
}
