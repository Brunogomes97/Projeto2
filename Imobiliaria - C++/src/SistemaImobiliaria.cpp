#include "SistemaImobiliaria.h"

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}
void SistemaImobiliaria::cadastraImovel(Imovel *a,int i){

    imoveis[i]=a;
    i++;

}
SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
