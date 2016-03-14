#ifndef MANSAO_H
#define MANSAO_H

#include "Casa.h"

class Mansao : public Casa
{
	public:
		Mansao();
		Mansao(int Empregados);
		void setexibirEmpregados();
		void setnumCozinheiros();
		void setnumCamareiros();
		void setnumBabas();
		void gettotalSalario();
		void getnumCozinheiros();
		void getnumCamareiros();
		void getnumBabas();
		
	protected:
		float totalSalario;
		int quantEmpregados;
		int numBabas;
		float totalSalario;
		int numCozinheiros;
		int numCamareiros;
		int numBabas;
	
		
};

#endif
