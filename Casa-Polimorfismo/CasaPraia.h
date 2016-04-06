#ifndef CASAPRAIA_H
#define CASAPRAIA_H
#include <casa.h>
using namespace std;

class CasaPraia : public Casa
{
	friend ostream &operator<<(ostream &, const CasaPraia&);
	
	public:
		CasaPraia();
		CasaPraia(int quantHospedes, int dias);
		void setexibirHospedes() ;
		void getexibirHospedes() const;
		void getprecodoAluguel();
		void setquantDias(int);
		void getquantDias(int);
		
	protected:
		float precoAluguel;
		int quantHospedes;
		int quantDias;
};

#endif

