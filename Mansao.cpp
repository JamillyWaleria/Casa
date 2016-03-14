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
	salCozinheiro=1500;
	salCamareiros=1300;
	salBaba=2000;
		
}

Mansao::~Mansao()
{
}
