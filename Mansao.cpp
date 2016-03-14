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


