#include "Imovel.h"
using namespace std;
Imovel::Imovel()
{
    tipoImovel = 0;
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
void Imovel::cadOferta(){
    if(tipoOferta==1){
        cout<<"Imovel a Venda."<<endl;
    }
    if(tipoOferta==2){
        cout<<"Imovel Indisponivel."<<endl;

    }
    if(tipoOferta==3){
        cout<<"Imovel para Alugar."<<endl;

    }
}
int Imovel::getOferta(){
    return tipoOferta;

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
