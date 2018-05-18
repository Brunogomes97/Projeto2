#include "Imovel.h"
using namespace std;
Imovel::Imovel()
{

}

double Imovel::getValor(){
    return valor;
}
Endereco Imovel::getEndereco(Endereco ender){
    d=ender;
    return d;
}


 void Imovel::setOferta(int tipoOferta){
    this->tipoOferta=tipoOferta;
 }


void Imovel::resetTipoImovel()
{
    tipoImovel=0;

}

void Imovel::setValor(double valor){
    this->valor=valor;

 }
Imovel::~Imovel()
{
    //dtor
}
