#include "Casa.h"

using namespace std;


Casa::Casa(int numPavimentos,int numQuartos,double areaConstruida,double areaTerreno)
{
    this->numPavimentos=numPavimentos;
    this->areaConstruida=areaConstruida;
    this->numQuartos=numQuartos;
    this->areaTerreno=areaTerreno;
    tipoImovel=1;
}
Casa::Casa()
{
      numPavimentos=0;
      areaConstruida=0;
      numQuartos=0;
      areaTerreno=0;
      tipoImovel=1;

}

void Casa::cadEspecifico(){
    int x;
    do{
        cout<<"******************************************\n";
        cout<<"Insira as informacoes especificas da casa:\n";
        cout<<"******************************************\n";
        cout<<"1-Insira o numero de pavimentos:\n";
        cin>>numPavimentos;
        cout<<"2-Insira o numero de quartos da casa:\n";
        cin>>numQuartos;
        cout<<"3-Area do terreno(em metros quadrados):\n";
        cin>>areaTerreno;
        cout<<"4-Area do terreno construida(em metros quadrados):\n";
        cin>>areaConstruida;
        cout<<"Deseja salvar as alteracoes de CASA?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;

    system("cls");
    }while(x!=1);
}

void Casa::setPav(int numPavimentos){
    this->numPavimentos=numPavimentos;
}
void Casa::setQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}
void Casa::setAreaT(double areaTerreno){
    this->areaTerreno=areaTerreno;

}
void Casa::setAreaC(double areaConstruida){
    this->areaConstruida=areaConstruida;

}

int Casa::getPav(){
    return numPavimentos;

}
int Casa::getQuartos(){
    return numQuartos;

}
double Casa::getArea(){
    return areaTerreno;

}

double Casa::getAreaC(){
    return areaConstruida;

}


string Casa::getdescricao(){

    stringstream ss;
    ss<<"********************************************\n"
      <<"CASA                                        \n"
      <<"**********Informacoes Especificas***********\n"
      <<"N de Pavimentos: "<<numPavimentos <<       "\n"
      <<"N de Quartos: "   <<numQuartos<<           "\n"
      <<"Area Construida: "<<areaConstruida<<"m2"<< "\n"
      <<"Area do Terreno: "<<areaTerreno<<"m2"<<    "\n"
      <<"********************************************\n";

    return ss.str();

}


int Casa::getTipoImovel(){

    return tipoImovel;

}
void Casa::setTipoImovel(int t){

    tipoImovel=t;
}

void Casa::savarExpecifico(){
    fstream casas;
    casas.open("casa.txt",ios::out|ios::app);
    casas << numPavimentos << "\n";
    casas << numQuartos << "\n";
    casas << areaTerreno << "\n";
    casas << areaConstruida << "\n";
    casas.close();
}

Casa::~Casa()
{
    //dtor
}
