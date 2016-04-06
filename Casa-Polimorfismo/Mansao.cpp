#include "Mansao.h"
#include<iostream>

ostream &operator<<(ostream &out, const Mansao&ms)
{
	out<<static_cast<Casa>(ms);
}

Mansao::Mansao()
{
	numCozinheiros=0;
	numCamareiros=0;
	numBabas=0;
	pagamentoTotal=0;
	salCozinheiros=1500*numCozinheiros;
	salCamareiros=1300*numCamareiros;
	salBabas=2000*numBabas;
	pagamentoTotal=salCozinheiros+salCamareiros+salBabas;
	quantEmpregados=numCozinheiros+numCamareiros+numBabas;
}
Mansao::Mansao(int numCozinheiros, int numCamareiros, int numBabas, int quantEmpregados, float pagamentoTotal)

{
	this->quantEmpregados=quantEmpregados;
	pagamentoTotal=salCozinheiros+salCamareiros+salBabas;
}	
 void Mansao::setcalcularsalCamareiros() const
{
	cout<<" Quantidade de Camareiros:\n";
	cin>>numCamareiros;
	cout<<" SALÁRIOS\N";
	cout<<salCamareiros=1300*numCamareiros;
}
 void Mansao::setcalcularsalCozinheiros() const
 {
 	cout<<" Quantidade de Cozinheiros:\n";
	cin>>numCozinheiros;
	cout<<" SALÁRIOS\N";
	cout<<salCozinheiros=1500*numCozinheiros;

 }
 void Mansao::setcalcularsalBabas() const	
 {
 	cout<<" Quantidade de Babás:\n";
	cin>>numBabas;
	cout<<" SALÁRIOS\N";
	cout<salBabas=2000*numBabas;
 }
 void Mansao::
 {
 }
 void Mansao::getcalcularpagamentoTotal()
 {
 	cout<<pagamentoTotal=salCozinheiros+salCamareiros+salBabas;
 };
 
 
 
 
 
 
