#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include<string>
#include<iostream>
#include<stdlib.h>
#include "Moradia.h"

using namespace std;

class Apartamento : public Moradia
{
	friend ostream &operator<<(ostream &, const Apartamento &);//sobregarga de operadores.
	
	public: // Métodos
	Apartamento (); // Construtor vazio
	Apartamento(const Apartamento&);// cópia
	Apartamento (const string &tipo, const string &categoria, int metros);// Construtor default

		
		void setmetrosQuadrados(float);
		float getmetrosQuadrados();
		void informarmetrosQuadrados() ;
		
		void settipodeMoradia(string);
		string gettipodemoradia();
		void informartipodeMoradia();
		
		void setCategoria(float);
		string getCategoria();
		void informarCategoria() ;
		
		void setvalorIptu(float);
		float getvalorIptu();
		virtual float calcularvalorIptu();
		
		
	protected:
		float metrosQuadrados;
		string tipodeMoradia;
		float Categoria;
		float valorIptu;
	
};

#endif

