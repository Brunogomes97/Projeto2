#include "SistemaImobiliaria.h"
#include <string.h>
using namespace std;
SistemaImobiliaria::SistemaImobiliaria(){}


void SistemaImobiliaria::cadastraImovel(Imovel *a,int i){
    string rua,bairro,cep,cidade;
    int numero,x,oferta;
    double valor;

    imoveis[i]=a;
    fbool[i]=0;

do{
    cout<<"********************************************\n";
    cout<<"**************Informacoes Gerais************\n";
    cout<<"********************************************\n";
    cout<<"Insira as informacoes de Endereco do Imovel:\n";
    cout<<"********************************************\n";
    cout<<"1-Insira a Cidade do Imovel:\n";
    setbuf(stdin,NULL);
    getline(cin,cidade);
    cout<<"2-Insira o Bairro do Imovel:\n";
    setbuf(stdin,NULL);
    getline(cin,bairro);
    cout<<"3-Insira o CEP do Imovel:\n";
    cin>>cep;
    cout<<"4-Insira a rua do Imovel:\n";
    setbuf(stdin,NULL);
    getline(cin,rua);
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
    flag++;
    fbool[i]=1;


}
void SistemaImobiliaria::descricao(int i){
    cout<<imoveis[i]->getdescricao();
    cout<<"**************Informacoes Gerais************\n";
    cout<<"********************************************\n";
    cout<<"Cidade: "<<imoveis[i]->d.getCidade()<<endl;
    cout<<"Bairro: "<<imoveis[i]->d.getBairro()<<endl;
    cout<<"Rua: "<<imoveis[i]->d.getLogradouro()<<endl;
    cout<<"CEP: "<<imoveis[i]->d.getCep()<<endl;
    cout<<"Numero: "<<imoveis[i]->d.getNumero()<<endl;
    cout<<"Valor: R$"<<imoveis[i]->getValor()<<endl;
    imoveis[i]->cadOferta();
    cout<<"********************************************\n";
    cout<<endl;
    }





void SistemaImobiliaria::getImoveis(){
   int casa=0;
   int ap=0;
   int ter=0;


   for(int i=0;i<flag;i++){
        if(fbool[i]==1){
            if(imoveis[i]->getTipoImovel()==1)
                casa++;
            if(imoveis[i]->getTipoImovel()==2)
                ap++;
            if(imoveis[i]->getTipoImovel()==3)
                ter++;
        }
    }
    cout<<"Numero de Casas: "<<casa<<endl;
    cout<<"Numero de APs: "<<ap<<endl;
    cout<<"Numero de Terrenos: "<<ter<<endl;
}
void SistemaImobiliaria::getDescricaoImoveis(){

    for(int i=0;i<flag;i++){
        if(fbool[i]==1){
           descricao(i);
        }
    }
            system("pause");
            system("cls");
}
void SistemaImobiliaria::getImoveisVendaPorTipo(){

    for(int i=0;i<flag;i++){
        if(imoveis[i]->getOferta()==1){
             if(fbool[i]==1){
              descricao(i);
            }
        }
    }

}
void SistemaImobiliaria::getImoveisAlugarPorTipo(){

    for(int i=0;i<flag;i++){
        if(imoveis[i]->getOferta()==3){
             if(fbool[i]==1){
              descricao(i);
            }
        }
    }

}
void SistemaImobiliaria::getImoveisPorCidade(){
    string y;
    string x;
    int op;
    do{
        cout<<"Imoveis e suas cidades cadastradas:\n";
        for(int i=0;i<flag;i++){
                 if(fbool[i]==1){
                        cout<<"Numero de Cadastro: 00"<<i<<" - Cidade: "<<imoveis[i]->d.getCidade()<<endl;
                }
            }
        cout<<endl;
        cout<<"Insira a cidade que deseja as informacoes:\n";
        setbuf(stdin,NULL);
        getline(cin,x);
        strupr(x);
        system("cls");

        for(int i=0;i<flag;i++){
            y=imoveis[i]->d.getCidade();
            strupr(y);
            if(y==x){
                descricao(i);
            }
         }
        cout<<"Digite 1 para sair ou qualquer numero para pesquisar novamente:\n";
        cin>>op;
        system("cls");
    }while(op!=1);

        system("cls");
}

 void SistemaImobiliaria::getImoveisParaAlugarPorBairro(){
    string y;
    string x;
    int op;
    do{
        cout<<"Imoveis para alugar e seus bairros cadastrados:\n";
        for(int i=0;i<flag;i++){
                 if(fbool[i]==1){
                        if(imoveis[i]->getOferta()==3)
                            cout<<"Numero de Cadastro: 00"<<i<<" - Bairro: "<<imoveis[i]->d.getBairro()<<endl;
                }
            }
        cout<<endl;
        cout<<"Insira o bairro que deseja os imoveis para alugar:\n";
        setbuf(stdin,NULL);
        getline(cin,x);
        strupr(x);
        system("cls");

        for(int i=0;i<flag;i++){
            y=imoveis[i]->d.getBairro();
            strupr(y);
            if(y==x){
                descricao(i);
            }
         }
        cout<<"Digite 1 para sair ou qualquer numero para pesquisar novamente:\n";
        cin>>op;
        system("cls");
    }while(op!=1);

        system("cls");
}

void SistemaImobiliaria::getImoveisParaVenderPorBairro(){

    string y;
    string x;
    int op;
    do{
        cout<<"Imoveis para vender e seus bairros cadastrados:\n";
        for(int i=0;i<flag;i++){
                 if(fbool[i]==1){
                        if(imoveis[i]->getOferta()==1)
                            cout<<"Numero de Cadastro: 00"<<i<<" - Bairro: "<<imoveis[i]->d.getBairro()<<endl;
                }
            }
        cout<<endl;
        cout<<"Insira o bairro que deseja os imoveis para vender:\n";
        setbuf(stdin,NULL);
        getline(cin,x);
        strupr(x);
        system("cls");

        for(int i=0;i<flag;i++){
            y=imoveis[i]->d.getBairro();
            strupr(y);
            if(y==x){
                descricao(i);
            }
         }
        cout<<"Digite 1 para sair ou qualquer numero para pesquisar novamente:\n";
        cin>>op;
        system("cls");
    }while(op!=1);

        system("cls");




}



void SistemaImobiliaria::strupr(string &str){



    int x = str.size();
    for(int i=0; i<x; i++)
    {
     str[i] = toupper (str[i]);
    }


}







SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
