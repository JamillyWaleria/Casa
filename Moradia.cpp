#include"Moradia.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

ostream &operator <<(ostream &out, const Moradia &m){
	
}
//{out <<static_cast<Moradia> (m)} implementa��o da sobregarga do operador (casa ou moradia).
// Construtor 
Moradia::Moradia (const Moradia &novaMoradia){
	this->luzdoQuarto = novaMoradia.luzdoQuarto;
	this->nomedoProprietario=novaMoradia.nomedoProprietario;

}
	  	
/*Moradia:: Moradia()
// Valida��o de dados
// this->nomedoProprietario=" Proprietario\n"
 {
 	this-> nomedoProprietario="PROPRIET�RIO:\n";
 	this->luzdoQuarto=false;
 	
 }*/
 
 			Moradia::Moradia(const string &proprietario, bool luz)
 			{
 			this->nomedoProprietario=proprietario;
 			this->luzdoQuarto=luz;
	 		}
void Moradia::getProprietario()
{
	cout<<"\n"<<nomedoProprietario;
}
// Fun��o membro do Proprietario da moradia
void Moradia::digitarnomedoProprietario()
{
	cout<<"Proprietario:\n";
	cin>>nomedoProprietario;
	cout<<"\n"<<nomedoProprietario;
}

// Fun��o membro da Luz do Quarto
void:: Moradia::ligarluzdoQuarto()
{
	if(luzdoQuarto==true)
	{
		cout<<" A luz do quarto j� est� acessa !";
	}
	
else
{
	this->luzdoQuarto=true;
	cout<<" Luz acessa!";
}
}

void:: Moradia::desligarluzdoQuarto()
{
	if(luzdoQuarto==false)
	{
		cout<<" A luz do quarto j� est� apagada !";
	}
	
else
{
	this->luzdoQuarto=false;
	cout<<" Luz apagada!";
}
}
//SET e GET- M�todos Acessores.(Luz do quarto)
void Moradia::setluzdoQuarto(bool atual2)
{
	this->luzdoQuarto=atual2;// atualiza o estado da luz .
}
bool Moradia::getluzdoQuarto()// verifica o tipo de retorno da fun��o.
{
		return this ->luzdoQuarto;// retorna o valor em boleano.
}

Moradia::~Moradia()
{
}

