#ifndef MORADIA_H
#define MORADIA_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
 using namespace std;
 using std::string;
 using std::ostream;

class Moradia
{
	friend ostream &operator<<(ostream &output, const Moradia &moradia);

public:
	const Moradia &operator=(const Moradia &);
	bool operator==(const Moradia &)const;
	bool operator!=(const Moradia &moradia) const

	{
	   return !(*this==moradia);
	}
    
    bool operator>(const Moradia &) const;
    bool operator<(const Moradia &) const;
    bool operator>=(const Moradia &) const;
    bool operator<=(const Moradia &) const;

//Moradia ();// Construtor vazio
~Moradia();
Moradia(const Moradia &);// Construtor de copia
Moradia (const string &proprietario="JAMILLY VAL�RIA:\n", bool luz=false); // construtor default


	void getProprietario();
	void digitarnomedoProprietario();
	void setluzdoQuarto(bool);
	bool getluzdoQuarto();
	void ligarluzdoQuarto();
	void desligarluzdoQuarto();


protected:
	string nomedoProprietario;
	bool luzdoQuarto;
	
	
	
	
};
#endif//Moradia
 


