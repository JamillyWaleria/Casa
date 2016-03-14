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
		~Mansao();
	private:
		float totalSalario;
		int quantEmpregados;
		int numBabas;
		int numCozinheiros;
		int numCamareiros;
		float salCozinheiro;
	float salCamareiros;
	float salBaba;
	
		
};

#endif
