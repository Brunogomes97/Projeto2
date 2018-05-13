#include <iostream>
#include "Endereco.h"
#include <string>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"

using namespace std;

int main()
{

    //TESTES DAS CLASSES
   Casa *imo = new Casa();
   Apartamento *imo2 = new Apartamento();

  // cout<<imo->getdescricao()<<endl;
    imo->setAreaC(45);
    imo2->setPosicao("Zona norte");
    imo->getEndereco(Endereco("Joao Pessoa","Centro","98020020","AV Silva",2323));
  cout<<imo2->getPosicao()<<endl;
  cout<<imo->getAreaC()<<endl;
  //imo->d.setCidade("Joao Pessoa");
  cout<<imo->d.getBairro()<<endl;
  cout<<imo->d.getCidade()<<endl;
  cout<<imo->d.getCep()<<endl;
  cout<<imo->d.getNumero()<<endl;
  cout<<imo->d.getLogradouro()<<endl;


   delete imo;

    return 0;
}
