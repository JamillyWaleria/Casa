#include"Moradia.h"
#include"Casa.h"
#include"CasaPraia.h"
#include"Mansao.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

ostream &operator <<(ostream &out, const Moradia &m)
//{out <<static_cast<Moradia> (m)} implementação da sobregarga do operador (casa ou moradia).
// Construtor 
Moradia::Moradia (const Moradia &novaMoradia)
Moradia::~Moradia()
{
{
	(nPessoas>0)
	{
	nomePessoas=new string [nPessoas]
	quantPessoas=nPessoas;
	cout<<"Número de pessoas existentes na moradia:\n";
	cout<<quantPessoas;
	}
	
else 
		{
			nomePessoas=0;
			quantPessoas=0;
			cout<<" Não existe moradores !";	
		}
}
//Destrutor
		{delete [] nomePessoas;}
		
				{
				  nomedoProprietario=novamoradia.luzdoQuarto;
				  nomedoProprietario=nova.moradia.nomedoProprietario;
				} 
Moradia:: Moradia()
// Validação de dados
// this->nomedoProprietario=" Proprietario\n"
 {
 	this->nomedoProprietario="PROPRIETÁRIO:\n"
 	this->luzdoQuarto=false;
 	
 }
 			Moradia::Moradia(const string &proprietario, bool luz)
 			{
 			this->nomedoProprietario=proprietario;
 			this->luzdoQuarto=luz;
	 		}
void Moradia::getProprietario()
{
	cout<<"\n"<<nomedoProprietario;
}
// Função membro do Proprietario da moradia
void Moradia::digitarnomedoProprietario()
{
	cout<<"Proprietario:\n";
	cin>>nomedoProprietario;
	cout<<"\n"<<nomedoProprietario;
}

// Função membro da Luz do Quarto
void:: Moradia::ligarLuzdoQuarto()
{
	if(luzdoQuarto==true)
	cout<<" A luz do quarto já está acessa !"
}
else
{
	this->luzdoQuarto=true;
	cout<<" Luz acessa!"
}
//SET e GET- Métodos Acessores.(Luz do quarto)
void Casa::setLuzdoQuarto(bool atual2)
{
	this->luzdoQuarto=atual2;// atualiza o estado da luz .
}
bool Casa::getLuzdoQuarto()// verifica o tipo de retorno da função.
{
		return this ->luzdoQuarto;// retorna o valor em boleano.
}
};


