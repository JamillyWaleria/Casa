#include "Apartamento.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

ostream &operator <<(ostream &out, const Apartamento &ap)
{
	///out<<static_cast<Moradia> (ap);
}//implementação da sobregarga de operador

// Construtor
Apartamento::Apartamento()
{
	metrosQuadrados=0;
	Categoria=0;
	

}

Apartamento::Apartamento(float metrosQuadrados, const string &tipodeMoradia,float Categoria)
{
	this->metrosQuadrados=metrosQuadrados;
	this->tipodeMoradia=tipodeMoradia;
	metrosQuadrados=metrosQuadrados+Categoria;
}
	void Apartamento::setmetrosQuadrados() const
	{
	cout<<"Metros quadrados do apartamento:";
	cin>>metrosQuadrados;
   }
	void Apartamento::settipodeMoradia() 
   {
	cout<<"Tipo de Apartamento:\n Precário \n Popular \n Luxo";
	cin>>tipodeMoradia;	
	}


	void Apartamento::calcularvalorIptu()
{
if(tipodeMoradia="Precário" and metrosQuadrados<= 50)
Categoria=429.99;
valorIptu=Categoria+metrosQuadrados*1.5+26.99;
  	
	else
	if(tipodeMoradia="Popular" and metrosQuadrados<= 50)
	Categoria=536.76;
	valorIptu=Categoria+metrosQuadrados*1.5+26.99;
	
    	else
		Categoria=763.88;
		valorIptu=Categoria+metrosQuadrados*1.5+26.99;

			if(tipodeMoradia="Precário" and metrosQuadrados<= 50.01 and metrosQudrados<=75)
			Categoria=429.99;
			valorIptu=Categoria+metrosQuadrados*2.5+36.99;
else
if(tipodeMoradia="Popular" and metrosQuadrados<= 50.01 and metrosQuadrados<=75)
Categoria=536.76;
valorIptu=Categoria+metrosQuadrados*2.5+36.99;

	else
	Categoria=763.88;
    valorIptu=Categoria+metrosQuadrados*2.5+36.99;
    
		if(tipodeMoradia="Precário" and metrosQuadrados>75)
		Categoria=429.99;
		valorIptu=Categoria+metrosQuadrados*3.5+36.99;
		
  			else
			if(tipodeMoradia="Popular" and metrosQuadrados>75)
			Categoria=536.76;
			valorIptu=Categoria+metrosQuadrados*3.5+36.99;
    			
				else
				Categoria=763.88;
				valorIptu=Categoria+metrosQuadrados*3.5+36.99;

}
 void Apartamento::getvalorIptu() 
 {
 	cout<<valorIptu;
 };

   


