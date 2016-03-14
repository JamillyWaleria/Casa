#include "CasaPraia.h"
#include<iostream>

ostream &operator<<(ostream &out, const CasaPraia &p)

{
	out<<static_cast<Casa>(p);
}
CasaPraia::CasaPraia()
{
	quantHospedes=0;
	precoAluguel=100*quantHospedes;

}
CasaPraia::CasaPraia(int quantHospedes)
{
	this->quantHospedes=quantHospedes;
	precoAluguel=100*quantHospedes;
}
void CasaPraia::setexibirHospedes()
{
	cout<<" Quantidade de hospedes:\n";
	cin>>quantHospedes;
	precoAluguel=100*quantHospedes;
}
void CasaPraia::getexibirHospedes() const
{
	cout<<quantHospedes;
}
void CasaPraia::getprecodoAluguel()
{
	cout<<precoAluguel;
};
