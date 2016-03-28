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
	
	public: // Métodos
	Casa (); // Construtor vazio
	Casa(const Casa&);// cópia
	Casa( double precodaLuz);
	Casa (const string &morador, bool porta=false);// Construtor default
~Casa();

// Dados de Entrada

	void setportadaGaragem(bool);
	void setnovoMorador( string);
    void setprecodaLuz (double);
    void setdatadeconstrucao();
    void setquantKwh(double);
// Saída de dados
	
	bool getPortadaGaragem();
    float getcalcularPrecodaluz();
    string getdigitarnovoMorador();
    float getcalcularquantKwh();
    void getprecodaLuz();

    
// Função-membro
	void abrirPortadaGaragem();
	void fecharPortadaGaragem ();
	void calcularprecodaLuz ();
	void adicionarnovoMorador();
	void calcularquantKwh();
	virtual float calcularprecodoAluguel( );
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
		float calcularprecodoAluguel;
};
#endif // Casa
	

