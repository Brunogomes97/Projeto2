#include "SistemaImobiliaria.h"

using namespace std;
SistemaImobiliaria::SistemaImobiliaria(){}


void SistemaImobiliaria::cadastraImovel(Imovel *a,int i){
    string rua,bairro,cep,cidade;
    int numero,x,oferta;
    double valor;
    imoveis[i]=a;

do{
    cout<<"********************************************\n";
    cout<<"**************Informacoes Gerais************\n";
    cout<<"********************************************\n";
    cout<<"Insira as informacoes de Endereco do Imovel:\n";
    cout<<"********************************************\n";
    cout<<"1-Insira a Cidade do Imovel:\n";
    cin>>cidade;
    cout<<"2-Insira o Bairro do Imovel:\n";
    cin>>bairro;
    cout<<"3-Insira o CEP do Imovel:\n";
    cin>>cep;
    cout<<"4-Insira a rua do Imovel:\n";
    cin>>rua;
    cout<<"5-Insira o Numero da Casa:\n";
    cin>>numero;
    cout<<"6-Valor do Imovel(em Reais):\n";
    cin>>valor;
    cout<<"7-Disponibilidade do imovel(1-Venda|2-Nao esta a Venda|3-Alugar):\n";
    cin>>oferta;
    cout<<"Deseja salvar as alteracoes de LOCALIZACAO?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
    cin>>x;
    system("cls");
    }while(x!=1);
    imoveis[i]->cadEspecifico();
    imoveis[i]->getEndereco(Endereco(cidade,bairro,cep,rua,numero));
    imoveis[i]->setValor(valor);
    imoveis[i]->setOferta(oferta);

}

void SistemaImobiliaria::getImoveis(){

   for(int i=0;i<MAX;i++){
     if(imoveis[i]->getTipoImovel()==1||imoveis[i]->getTipoImovel()==2||imoveis[i]->getTipoImovel()==3){
       cout<<imoveis[i]->getdescricao()<<endl;
       }

    }
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
