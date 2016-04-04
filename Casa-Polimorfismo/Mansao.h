#ifndef MANSAO_H
#define MANSAO_H
#include<iostream>
#include<stdlib.h>
#include "Casa.h"

class Mansao : public Casa
{
	public:
		Mansao();
		Mansao(int Empregados);
		void setquantEmpregados();
		void setnumCozinheiros();
		void setnumCamareiros();
		void setnumBabas();
		void getnumCozinheiros();
		void getnumCamareiros();
		void getnumBabas();
		void getpagamentoTotal();
			void calcularpagamentoTotal();
		void calcularsalCozinheiros();
		void calcularsalCamareiros();
		void calcularsalBabas();
		

	private:
		int quantEmpregados;
		int numBabas;
		int numCozinheiros;
		int numCamareiros;
		float salCozinheiros;
		float salCamareiros;
		float salBabas;
		float pagamentoTotal;
	
		
};

#endif
