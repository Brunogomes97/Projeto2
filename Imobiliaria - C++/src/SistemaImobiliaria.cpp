#include "SistemaImobiliaria.h"
#include <string.h>
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
    cout<<"5-Insira o Numero da Imovel:\n";
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
   int fl=0;
   int st=0;

   for(int i=0;i<flag;i++){
        if(fbool[i]==1){
            if(imoveis[i]->getTipoImovel()==1)
                casa++;
            if(imoveis[i]->getTipoImovel()==2)
                ap++;
            if(imoveis[i]->getTipoImovel()==3)
                ter++;
            if(imoveis[i]->getTipoImovel()==4)
                st++;
            if(imoveis[i]->getTipoImovel()==5)
                fl++;
        }
    }
    cout<<"Numero de Casas: "<<casa<<endl;
    cout<<"Numero de APs: "<<ap<<endl;
    cout<<"Numero de Terrenos: "<<ter<<endl;
    cout<<"Numero de Studios: "<<st<<endl;
    cout<<"Numero de Flats: "<<fl<<endl;
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
            if(fbool[i]==1){
            y=imoveis[i]->d.getCidade();
            strupr(y);
            if(y==x){
                descricao(i);
            }
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
            if(fbool[i]==1){
            y=imoveis[i]->d.getBairro();
            strupr(y);
            if(y==x){
                descricao(i);
            }
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
            if(fbool[i]==1){
                y=imoveis[i]->d.getBairro();
                strupr(y);
                if(y==x){
                    descricao(i);
                }
            }
        }
        cout<<"Digite 1 para sair ou qualquer numero para pesquisar novamente:\n";
        cin>>op;
        system("cls");
    }while(op!=1);

        system("cls");




}

void SistemaImobiliaria::deleteImovel(){
    int x;
    if(flag>0){
        cout<<"*********************************\n";
        cout<<"HABILITE OU DESABILITE CADASTROS\n";
        cout<<"*********************************\n";
        cout<<"O que deseja fazer?\n";
        cout<<"1-Desabilitar imoveis\n";
        cout<<"2-Habilitar imoveis\n";
        cout<<"3-Voltar ao menu\n";
        cout<<"*********************************\n";
        cin>>x;
        switch (x){
            case 1:
                desabImovel();
                break;
            case 2:
                HabImovel();
                break;
            case 3:
                break;
        }

    }else{
        cout<<"Nao ha imoveis cadastrados!\n";


    }
}

void SistemaImobiliaria::desabImovel(){
    int x;
    int op;

    system("cls");
  do{
    cout<<"**************************************************\n";
    cout<<"Imoveis cadastrados\n";
    cout<<"**************************************************\n";
    for(int i=0;i<flag;i++){
            if(fbool[i]==1){
                cout<<"Numero de Cadastro: 00"<<i<<" - "<<typeImovel(i)<<endl;
            }
    }
    cout<<"Qual imovel voce gostaria de desabilitar da lista?\n";
            cin>>x;
            if(x<flag && x>=0){
                if(fbool[x]==1){
                    fbool[x]=0;
                    cout<<"Cadastro desabilitado com sucesso!\n";
                }else{
                    cout<<"Erro ao desabilitar cadastro.\n";
                }
            }
     cout<<"Digite 0 para sair ou qualquer numero para realizar a mesma tarefa novamente!\n";
     cin>>op;
     system("cls");
    }while(op!=0);
}
void SistemaImobiliaria::HabImovel(){

  int x;
  int n;
  int op;
  int c;

    system("cls");
  do{

    cout<<"**************************************************\n";
    cout<<"Imoveis desabilitados\n";
    cout<<"**************************************************\n";
    for(int i=0;i<flag;i++){
            if(fbool[i]==0){
                cout<<"Numero de Cadastro: 00"<<i<<" - "<<typeImovel(i)<<endl;
            }
    }



      cout<<"Qual imovel voce gostaria habilitar da lista?\n";
      cin>>x;
      if(x<flag && x>=0){
                if(fbool[x]==0){
                    fbool[x]=1;

                    cout<<"Cadastro reabilitado com sucesso!\n";
                    cout<<"Gostaria de sobrescrever o imovel selecionado?(1-SIM 0-NAO)\n";
                    cin>>c;
                    if(c==1){

                        cout<<"Qual tipo de imovel deseja sobreescrever?(1-CASA 2-APARTAMENTO 3-TERRENO 4-STUDIO 5-FLAT)\n";
                        cin>>n;
                        system("cls");
                        if(n==1){
                            imoveis[x]=new Casa();
                            cadastraImovel(imoveis[x],x);
                            flag--;

                        }else if(n==2){
                            imoveis[x]=new Apartamento();
                            cadastraImovel(imoveis[x],x);
                            flag--;
                        }else if(n==3){
                            imoveis[x]=new Terreno();
                            cadastraImovel(imoveis[x],x);
                            flag--;
                        }else if(n==4){
                            imoveis[x]=new Studio();
                            cadastraImovel(imoveis[x],x);
                            flag--;
                        }else if(n==5){
                            imoveis[x]=new Flat();
                            cadastraImovel(imoveis[x],x);
                            flag--;
                        }
                    }
                }else{
                    cout<<"Erro ao desabilitar cadastro.\n";
                }
            }
     cout<<"Digite 0 para sair ou qualquer numero para realizar a mesma tarefa novamente!\n";
     cin>>op;
     system("cls");
    }while(op!=0);
}



void SistemaImobiliaria::strupr(string &str){

    int x = str.size();

    for(int i=0; i<x; i++){
        str[i] = toupper (str[i]);
    }


}

string SistemaImobiliaria::typeImovel(int i){
    if(imoveis[i]->getTipoImovel()==1){
        return "CASA";}
    else if(imoveis[i]->getTipoImovel()==2){
        return "APARTAMENTO";}
    else if(imoveis[i]->getTipoImovel()==3){
        return "TERRENO";}
    else if(imoveis[i]->getTipoImovel()==4){
        return "STUDIO";}
    else if(imoveis[i]->getTipoImovel()==5){
        return "FLAT";}
    else{
        return "NULL";
    }
}
void SistemaImobiliaria::salvarArquivos(int y){
    int z=y;
    int men=0;
    fstream enderecos;
    fstream adicinals;
    fstream fla;

    if(z<flag){
    enderecos.open("endereco.txt",ios::out|ios::app);
    adicinals.open("adicinal.txt",ios::out|ios::app);
    fla.open("fla.txt",ios::out|ios::trunc);

    }

    for(z;z<flag;z++){

        enderecos << imoveis[z]->d.getCidade() << "\n";
        enderecos << imoveis[z]->d.getBairro() << "\n";
        enderecos << imoveis[z]->d.getCep() << "\n";
        enderecos << imoveis[z]->d.getLogradouro() << "\n";
        enderecos << imoveis[z]->d.getNumero() << "\n";

        men=imoveis[z]->getTipoImovel();
        adicinals << men << "\n";
        adicinals << imoveis[z]->getOferta() << "\n";
        adicinals << getfbool(z) << "\n";
        adicinals << imoveis[z]->getValor() << "\n";

        if(men==1){
            imoveis[z]->savarExpecifico();

        }
        if(men==2){
            imoveis[z]->savarExpecifico();

        }
        if(men==3){
            imoveis[z]->savarExpecifico();

        }
        if(men==4){
            imoveis[z]->savarExpecifico();

        }
        if(men==5){
            imoveis[z]->savarExpecifico();

        }
    }

    fla << flag;
    enderecos.close();
    adicinals.close();
    fla.close();

}

void SistemaImobiliaria::salvarAlteracoes(){
    fstream enderecos;
    fstream adicinals;
    fstream fla;
    fstream casas;
    fstream apartamentos;
    fstream terrenos;
    fstream studios;
    fstream flats;

    enderecos.open("endereco.txt",ios::out|ios::trunc);
    adicinals.open("adicinal.txt",ios::out|ios::trunc);
    fla.open("fla.txt",ios::out|ios::trunc);
    casas.open("casa.txt",ios::out|ios::trunc);
    apartamentos.open("apartamento.txt",ios::out|ios::trunc);
    terrenos.open("terreno.txt",ios::out|ios::trunc);
    studios.open("studio.txt",ios::out|ios::trunc);
    flats.open("flat.txt",ios::out|ios::trunc);

    enderecos.close();
    adicinals.close();
    fla.close();
    casas.close();
    apartamentos.close();
    terrenos.close();
    studios.close();
    flats.close();
    salvarArquivos(0);

}

int SistemaImobiliaria::recuperarArquivos(Casa *cas,Apartamento *ap,Terreno *t,Studio *st,Flat *fl){
    int z=0,num,cont;
    double ox;
    bool bo;
    string cidade,bairro,cep,rua,x;

    fstream enderecos;
    fstream adicinals;
    fstream casas;
    fstream apartamentos;
    fstream terrenos;
    fstream studios;
    fstream flats;
    fstream fla;

    enderecos.open("endereco.txt",ios::in|ios::app);
    adicinals.open("adicinal.txt",ios::in);
    casas.open("casa.txt",ios::in);
    apartamentos.open("apartamento.txt",ios::in);
    terrenos.open("terreno.txt",ios::in);
    studios.open("studio.txt",ios::in);
    flats.open("flat.txt",ios::in);
    fla.open("fla.txt",ios::in);
    fla >>cont;
    if(!fla.is_open()){
        return z;
    }else {
        for(z=0;z<cont;z++){
                adicinals >>num;
            if (num == 1){
                int c1,c2;
                double c3,c4;
                casas >>c1;
                casas >>c2;
                casas >>c3;
                casas >>c4;
                cas = new Casa(c1,c2,c3,c4);
                imoveis[z]= cas;

                getline(enderecos,cidade);
                getline(enderecos,bairro);
                getline(enderecos,cep);
                getline(enderecos,rua);
                enderecos >>num;
                getline(enderecos,x);
                imoveis[z]->getEndereco(Endereco(cidade,bairro,cep,rua,num));

                adicinals >>num;
                imoveis[z]->setOferta(num);
                adicinals >>bo;
                fbool[z]=bo;
                adicinals >>ox;
                imoveis[z]->setValor(ox);
                flag++;

            }else if(num == 2){
                string a1;
                int a2,a3,a4;
                double a5;
                getline(apartamentos,a1);
                apartamentos >>a2;
                apartamentos >>a3;
                apartamentos >>a4;
                apartamentos >>a5;
                ap = new Apartamento(a1,a2,a3,a4,a5);
                imoveis[z]= ap;

                getline(enderecos,cidade);
                getline(enderecos,bairro);
                getline(enderecos,cep);
                getline(enderecos,rua);
                enderecos >>num;
                getline(enderecos,x);
                imoveis[z]->getEndereco(Endereco(cidade,bairro,cep,rua,num));

                adicinals >>num;
                imoveis[z]->setOferta(num);
                adicinals >>bo;
                fbool[z]=bo;
                adicinals >>ox;
                imoveis[z]->setValor(ox);
                flag++;

            }else if(num == 3){
                double t1;
                terrenos >>t1;
                t = new Terreno(t1);
                imoveis[z]= t;

                getline(enderecos,cidade);
                getline(enderecos,bairro);
                getline(enderecos,cep);
                getline(enderecos,rua);
                enderecos >>num;
                getline(enderecos,x);
                imoveis[z]->getEndereco(Endereco(cidade,bairro,cep,rua,num));

                adicinals >>num;
                imoveis[z]->setOferta(num);
                adicinals >>bo;
                fbool[z]=bo;
                adicinals >>ox;
                imoveis[z]->setValor(ox);
                flag++;

            }else if(num == 4){
                float st1;
                int st2,st4;
                string st3;
                bool st5,st6,st7,st8,st9,st10,st11,st12;
                getline(studios,st3);
                studios >>st1;
                studios >>st2;
                studios >>st4;
                studios >>st5;
                studios >>st6;
                studios >>st7;
                studios >>st8;
                studios >>st9;
                studios >>st10;
                studios >>st11;
                studios >>st12;
                st = new Studio(st1,st2,st3,st4,st5,st6,st7,st8,st9,st10,st11,st12);
                imoveis[z]= st;

                getline(enderecos,cidade);
                getline(enderecos,bairro);
                getline(enderecos,cep);
                getline(enderecos,rua);
                enderecos >>num;
                getline(enderecos,x);
                imoveis[z]->getEndereco(Endereco(cidade,bairro,cep,rua,num));

                adicinals >>num;
                imoveis[z]->setOferta(num);
                adicinals >>bo;
                fbool[z]=bo;
                adicinals >>ox;
                imoveis[z]->setValor(ox);
                flag++;

            }else if(num == 5){
                float fl1;
                int fl2,fl4;
                string fl3;
                bool fl5,fl6,fl7,fl8,fl9;
                getline(flats,fl3);
                flats >>fl1;
                flats >>fl2;
                flats >>fl4;
                flats >>fl5;
                flats >>fl6;
                flats >>fl7;
                flats >>fl8;
                flats >>fl9;
                fl = new Flat(fl1,fl2,fl3,fl4,fl5,fl6,fl7,fl8,fl9);
                imoveis[z]= fl;

                getline(enderecos,cidade);
                getline(enderecos,bairro);
                getline(enderecos,cep);
                getline(enderecos,rua);
                enderecos >>num;
                getline(enderecos,x);
                imoveis[z]->getEndereco(Endereco(cidade,bairro,cep,rua,num));

                adicinals >>num;
                imoveis[z]->setOferta(num);
                adicinals >>bo;
                fbool[z]=bo;
                adicinals >>ox;
                imoveis[z]->setValor(ox);
                flag++;

            }

        }

    }

    enderecos.close();
    adicinals.close();
    casas.close();
    apartamentos.close();
    terrenos.close();
    studios.close();
    flats.close();
    fla.close();

    return z;
}

bool SistemaImobiliaria::getfbool(int x){
    int val = fbool[x];
    return val;
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
