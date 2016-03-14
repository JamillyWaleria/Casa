#ifndef MORADIA_H
#define MORADIA_H
#include"Casa.h"
#include"CasaPraia.h"
#include"Mansao.h"
#include"Data.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
 using namespace std;
 using std::string;
 using std::ostream;

class Moradia
{
	friend ostream &operator<<(ostream &output, const Moradia &moradia);

public:
	const Moradia &operador=(const Moradia &);
	bool operator==(const Moradia &)const;
	bool operator!==(const Moradia &moradia) const

	{
	   return !(*this==Moradia);
	}
    
    bool operator>(const Moradia &) const;
    bool operator<(const Moradia &) const;
    bool operator>=(const Moradia &) const;
    bool operator<=(const Moradia &) const;

Moradia ();// Construtor vazio
Moradia(const Moradia &);// Construtor de copia
Moradia (const string &proprietario="JAMILLY VALÉRIA:\n", bool luz=false); // construtor default

	void getProprietario();
	void digitarnomedoProprietario();
	void setLuzdoQuarto(bool);
	bool getLuzdoQuarto();
	void ligarLuzdoQuarto();
	void desligarLuzdoQuarto();

protected:
	string nomedoProprietario
	bool LuzdoQuarto;
	int nPessoas;
	int quantPessoas;
	string nomePessoas;
	Data datadeConstrucao;
	
};
#endif//Moradia
 


