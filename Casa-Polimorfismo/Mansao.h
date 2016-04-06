#ifndef MANSAO_H
#define MANSAO_H
#include<iostream>
#include<stdlib.h>
#include <casa.h>
using namespace std;

class Mansao : public Casa
{
	public:
		Mansao();
		Mansao(int Empregados);
		void setquantEmpregados(int);
		void setnumCozinheiros(int);
		void setnumCamareiros(int);
		void setnumBabas(int);
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

