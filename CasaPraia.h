#ifndef CASAPRAIA_H
#define CASAPRAIA_H
#include "Casa.h"

class CasaPraia : public Casa
{
	friend ostream &operator<<(ostream &, const CasaPraia&);
	
	public:
		CasaPraia();
		CasaPraia(int quantHospedes);
		void setexibirHospedes() ;
		void getexibirHospedes();
		void getprecodoAluguel();
		
	protected:
		float precoAluguel;
		int quantHospedes;
};

#endif
