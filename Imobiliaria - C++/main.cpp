#include <iostream>
#include "Endereco.h"
#include <string>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main()
{

    //TESTES DAS CLASSES
    Imovel *imo5[100];

    imo5[0] = new Casa();

    imo5[0]->getEndereco(Endereco("Joao Pessoa","Centro","98020020","AV Silva",2323));
    cout<<imo5[0]->d.getBairro()<<endl;
    cout<<imo5[0]->d.getCidade()<<endl;
    cout<<imo5[0]->d.getCep()<<endl;
    cout<<imo5[0]->d.getNumero()<<endl;
    cout<<imo5[0]->d.getLogradouro()<<endl;

    delete imo5[0];
 /*
   Casa *imo = new Casa();
   Apartamento *imo2 = new Apartamento();
   Terreno *imo3 = new Terreno();

  // cout<<imo->getdescricao()<<endl;
    imo3->setAreaT(458);
    imo->setAreaC(45);
    imo2->setPosicao("Zona norte");

  cout<<imo2->getPosicao()<<endl;
  cout<<imo->getAreaC()<<endl;
  cout<<imo3->getAreaT()<<endl;
  //imo->d.setCidade("Joao Pessoa");
  cout<<imo->d.getBairro()<<endl;
  cout<<imo->d.getCidade()<<endl;
  cout<<imo->d.getCep()<<endl;
  cout<<imo->d.getNumero()<<endl;
  cout<<imo->d.getLogradouro()<<endl;


   delete imo;
*/
    return 0;
}
