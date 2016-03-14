#ifndef CASA_H
#define CASA_H
#include"CasaPraia.h"
#include"Mansao.h"
#include"Data.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class Casa:public Moradia
{
	friend ostream &operator<<(ostream &, const Casa &);//sobregarga de operadores.
	
	public: // Métodos
	Casa (); // Construtor vazio
	Casa(const Casa&);// cópia
	Casa (const string &morador="MORADOR:", bool porta=false);// Construtor default


// Dados de Entrada

	void setportadaGaragem(bool);
	void setdigitarnovoMorador( string);
    void setcalcularprecodaLuz (double);
    void setdatadeconstrucao();
    void setcalcularquantKwh(double)
// Saída de dados
	
	bool getPortadaGaragem();
    float getcalcularPrecodaluz();
    string getdigitarnovoMorador();
    float getcalcularquantKwh();
    
// Função-membro
	void abrirPortadaGaragem();
	void fecharPortadaGaragem ();
	void calcularprecodaLuz ();
	void digitarnovoMorador();
	void calcularquantKwh();
	
// Atributos
	protected:
		
		static double precodaLuz;
		static double precodoKwh;
		double quantKwh;
		bool portadaGaragem;
		string novoMorador;
		Data datadeConstrucao;
};
#endif // Casa
	

