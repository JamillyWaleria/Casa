#ifndef CASA_H
#define CASA_H
#include"Data.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include <moradia.h>

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
    void setmetrosQuadrados(float);
    void settipodeMoradia(string);
    void setvalorIptu(float);
    void setCategoria(float);
// Saída de dados
	
	bool getPortadaGaragem();
    float getcalcularPrecodaluz();
    string getdigitarnovoMorador();
    float getcalcularquantKwh();
    void getprecodaLuz();
	int getmetrosQuadrados();
	string gettipodemoradia();
	string getCategoria();
	string getCategoria();
	float getvalorIptu();
    
// Função-membro
	void abrirPortadaGaragem();
	void fecharPortadaGaragem ();
	void calcularprecodaLuz ();
	void adicionarnovoMorador();
	void calcularquantKwh();
	virtual float calcularprecodoAluguel( ) = 0;// USANDO O  POLIFORMISMO
	void adicionarnovoMorador(const string &novoMorador);
	void listarMorador () const;
	void informarmetrosQuadrados() ;
	void informartipodeMoradia();
	void informarCategoria() ;
	virtual float calcularvalorIptu();
		
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
		int metrosQuadrados;
		string tipodeMoradia;
		string Categoria;
		float valorIptu;
	
};
#endif // Casa
	

#ifndef CASA_H
#define CASA_H

#include "moradia.h"

class Casa : public Moradia
{
	public:
	protected:
};

#endif
