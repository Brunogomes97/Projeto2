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

Imovel::~Imovel()
{
    //dtor
}
