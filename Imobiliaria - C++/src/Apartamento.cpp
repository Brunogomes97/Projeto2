#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(){}

Endereco Apartamento::getEndereco(Endereco ender){
    d=ender;
    return d;
}

int Apartamento::getTipoImovel(){
    return 2;

}
 void Apartamento::setPosicao(std::string posicao){
     this->posicao=posicao;
 }
void Apartamento::setQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}
void Apartamento::setValorCond(double valorCondominio){
    this->valorCondominio=valorCondominio;

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
double Apartamento::getValorCond(){
    return valorCondominio;
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
