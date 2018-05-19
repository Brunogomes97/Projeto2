#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(string posicao,int numQuartos,int vagasGaragem,double areaAP){
    this->posicao=posicao;
    this->numQuartos=numQuartos;
    this->vagasGaragem=vagasGaragem;
    this->areaAP=areaAP;
    tipoImovel=2;

}
Apartamento::Apartamento(){
    tipoImovel=2;

}
int Apartamento::getTipoImovel(){

    return tipoImovel;

}
 void Apartamento::setPosicao(std::string posicao){
     this->posicao=posicao;
 }
void Apartamento::setQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}

void Apartamento::setGaragem(int vagasGaragem){
    this->vagasGaragem=vagasGaragem;
}
void Apartamento::setAreaAP(double areaAP){
    this->areaAP=areaAP;
}
std::string Apartamento::getPosicao(){
    return posicao;

}
int Apartamento::getQuartos(){
    return numQuartos;

}
int Apartamento::getGaragem(){
    return vagasGaragem;
}

double Apartamento::getAreaAP(){
    return areaAP;

}
string Apartamento::getdescricao(){
       stringstream ss;
    ss<<"********************************************\n"
      <<"AP                                          \n"
      <<"**********Informacoes Especificas***********\n"
      <<"Posicao: "<<posicao <<                     "\n"
      <<"N de Quartos: "   <<numQuartos<<           "\n"
      <<"Vagas na Garagem: "<<vagasGaragem<<        "\n"
      <<"N de Andares: "<<andar<<                   "\n"
      <<"Area do AP: "<<areaAP<<"m2"<<              "\n"
      <<"********************************************\n";

    return ss.str();
}
void Apartamento::cadEspecifico(){
    int x;
    do{
        cout<<"******************************************\n";
        cout<<"Insira as informacoes especificas do AP:\n";
        cout<<"******************************************\n";
        cout<<"1-Insira um referencia(Posicao):\n";
        setbuf(stdin,NULL);
        getline(cin,posicao);
        cout<<"2-Insira o numero de quartos do AP:\n";
        cin>>numQuartos;
        cout<<"3-Insira o numero de andares:\n";
        cin>>andar;
        cout<<"4-Insira o numero de vagas na garagem\n";
        cin>>vagasGaragem;
        cout<<"5-Area do apartamento em metros quadrados:\n";
        cin>>areaAP;
        cout<<"Deseja salvar as alteracoes de AP?(1-SIM ou Qualquer numero para Repetir o Preenchimento)\n";
        cin>>x;
        system("cls");
    }while(x!=1);

    }

Apartamento::~Apartamento()
{
    //dtor
}
