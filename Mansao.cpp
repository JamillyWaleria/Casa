#include "Mansao.h"
#include<iostream>

ostream &operator<<(ostream &out, const Mansao&ms)
{
	out<<static_cast<Casa>(ms)
}

Mansao::Mansao()
{
	nCozinheiros=0;
	nCamareiros=0;
	nBabas=0;
	salCozinheiro=1500;
	salCamareiros=1300;
	salBaba=2000;
		
}

Mansao::~Mansao()
{
}
