#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
       Endereco(std::string,std::string,std::string,std::string,int);
       Endereco();
       virtual ~Endereco();
       void setCidade(std::string);
       void setBairro(std::string);
       void setCep(std::string);
       void setLogradouro(std::string);
       void setNumero(int);
       std::string getCidade();
       std::string getBairro();
       std::string getCep();
       std::string getLogradouro();
       int getNumero();

    protected:
        std::string logradouro;
        std::string cep;
        std::string cidade;
        std::string bairro;
        int numero;

    private:
};

#endif // ENDERECO_H
