#include "Endereco.h"

using namespace std;

Endereco::Endereco(string cidade,string bairro,string cep,string logradouro,int numero){
    setCidade(cidade);
    setBairro(bairro);
    setCep(cep);
    setLogradouro(logradouro);
    setNumero(numero);

}
Endereco::Endereco(){}
Endereco::~Endereco(){}



void Endereco::setCidade(string cidade){
    this->cidade=cidade;
}
void Endereco::setBairro(string bairro){
    this->bairro=bairro;

}
void Endereco::setCep(string cep){
    this->cep=cep;

}
void Endereco::setLogradouro(string logradouro){
    this->logradouro=logradouro;

}
void Endereco::setNumero(int numero){
    this->numero=numero;

}

string Endereco::getCidade(){
    return cidade;
}
string Endereco::getBairro(){
    return bairro;

}
string Endereco::getCep(){
    return cep;

}
string Endereco::getLogradouro(){
    return logradouro;

}
int Endereco::getNumero(){
    return numero;
}
