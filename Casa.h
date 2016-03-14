#ifndef CASA_H
#define CASA_H
#include"Data.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include "Moradia.h"

using namespace std;

class Casa : public Moradia
{
	friend ostream &operator<<(ostream &, const Casa &);//sobregarga de operadores.
	
	public: // M�todos
	Casa (); // Construtor vazio
	Casa(const Casa&);// c�pia
	Casa( double precodaLuz);
	Casa (const string &morador, bool porta=false);// Construtor default
~Casa();

// Dados de Entrada

	void setportadaGaragem(bool);
	void setadicionarnovoMorador( string);
    void setcalcularprecodaLuz (double);
    void setdatadeconstrucao();
    void setcalcularquantKwh(double);
// Sa�da de dados
	
	bool getPortadaGaragem();
    float getcalcularPrecodaluz();
    string getdigitarnovoMorador();
    float getcalcularquantKwh();
    void getprecodaLuz();

    
// Fun��o-membro
	void abrirPortadaGaragem();
	void fecharPortadaGaragem ();
	void calcularprecodaLuz ();
	void adicionarnovoMorador();
	void calcularquantKwh();
	
	void adicionarnovoMorador(const string &novoMorador);
	void listarMorador () const;
	
// Atributos
	protected:
		static double precodaLuz;
		static double precodoKwh;
		double quantKwh;
		bool portadaGaragem;
		string* novoMorador;
		Data datadeConstrucao;
		int nPessoas;
};
#endif // Casa
	

