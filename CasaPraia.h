#ifndef CASAPRAIA_H
#define CASAPRAIA_H
#include "Casa.h"

class CasaPraia : public Casa
{
	friend ostream &operator<<(ostream &, const CasaPraia&);
	
	public:
		CasaPraia();
		CasaPraia(int quantHospedes, int dias);
		void setexibirHospedes() ;
		void getexibirHospedes() const;
		void getprecodoAluguel();
		void setquantDias();
		void getquantDias();
		
	protected:
		float precoAluguel;
		int quantHospedes;
		int quantDias;
};

#endif
