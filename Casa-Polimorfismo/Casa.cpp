#include "Casa.h"
#include"CasaPraia.h"
#include"Mansao.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

// Inicializando a vari�vel est�tica (ela deve vir antes do construtor)
double Casa::precodaLuz=20;
double Casa::precodoKwh= 0.525389;

ostream &operator <<(ostream &out, const Casa &c)
{
	out<<static_cast<Moradia> (c);
}//implementa��o da sobregarga de operador

// Construtor

Casa::Casa( const Casa &novaCasa)
{
	
}


//*****************************************************************************
// Verifica a quantidade de pessoas existentes na casa a partir do nome delas usando um 
//vetor de string, que ser� usado para armazenar a quantidade de nomes dos moradores .
void Casa::setadicionarnovoMorador(string)
{
	if (nPessoas>0)
{
	novoMorador= new string [nPessoas];// Aloca��o din�mica de mem�ria usando de vetor de ponteiros
	int quantPessoas= nPessoas;
	cout<<" N�mero de pessoas:\n";
	cout<< quantPessoas;
}
 else 
{
	novoMorador=0;

	cout<< "N�o existe moradores !";
}
}
// Destrutor
Casa::~Casa() // Destrutor
{

delete [] novoMorador;
}	
// ******************************************************************************


// Construtor vazio
Casa::Casa()
{
// Validada��o de dados
	this->portadaGaragem=false;
	this->nPessoas=0;
	this->quantKwh=0;
	precodaLuz=precodaLuz+quantKwh*precodoKwh;
}

Casa::Casa (const string &nome, bool porta){ // Construtor de c�pia
	this->nomedoProprietario=nome;
	this->portadaGaragem=porta;
}
//*********************************************************************************
// Fun��o-membro para "Porta Aberta".
void Casa::abrirPortadaGaragem()
{
if (portadaGaragem==true)// Avisa quando  a porta j� estiver aberta
{
		cout<<"Porta j� est� aberta !";
}
else // Se n�o estiver aberta, a abrir�

{
	this->portadaGaragem=true;
	cout<<" Porta Aberta!";
}
}
// Fun��o-membro para " Porta fechada".
void Casa::fecharPortadaGaragem()// construtor
{
if(portadaGaragem==false)//Avisa quando a porta estiver fechada
{
	cout<<"Porta j� est� fechada !";
}
else // se n�o estiver fechada, a fechar�
{
	this->portadaGaragem=true;
	cout<<" Porta Fechada !";
}
}

//********************************************************************************************
// SET e GET- M�todos Acessores.(Porta da garagem)
void Casa::setportadaGaragem(bool atual)// construtor que modifica o estada da porta da garagem.

{
	this->portadaGaragem=atual;//atualiza o estado da porta.
}
bool Casa::getPortadaGaragem() // verifaca o tipo de  retorno da fun��o.
{
		return this->portadaGaragem;// retorna o valor em boleano.
}
//*********************************************************************************************
//Aloca��o din�mica de mem�ria (uso de ponteiros)
// Cadastra novos moradores na casa usando um vetor string de ponteiros (nPessoas) que � usado para guardar os nomes dos novos moradores.
void Casa::adicionarnovoMorador(const string &morador)
{
	if(nPessoas !=0)
	{
	string *aux=new string [nPessoas];

	for (int i=0; i<nPessoas; i++)
	aux [i]=novoMorador [i];

	//Destrutor
	delete [] novoMorador;
	novoMorador= new string [++nPessoas];
	
	for (int i=0; i<nPessoas-1;i++)
		novoMorador [i]=aux[i];
	
	novoMorador [nPessoas-1]=morador;
	
	delete [] aux;
}
else // Se a quantidade de nomes for igual a zero , ent�o o sistema ir� mostrar que n�o existe novo morador.
{
novoMorador= new string [++nPessoas];
novoMorador[0]=morador;
}

}
void Casa::listarMorador () const //Cadastra o novo morador
{
	if( nPessoas>0)
{
cout<<" Os moradores s�o:\n"; // Mostrar a lista de nomes dos novos moradores cadastrados.
for(int i=0;i<nPessoas;i++)
cout<<novoMorador [i]<<"\n";
}
else
{

cout<<" Nenhum morador cadastrador!";
}
}

Casa::Casa( double precoLuz)
{
	this->precodaLuz=precoLuz;
	precodaLuz=precodaLuz+quantKwh*precodoKwh;
}

void Casa::getprecodaLuz()
{
		cout<<precodaLuz;		
}
// Calculando IPTU
Casa::Casa()
{
	metrosQuadrados=0;
	Categoria=0;
	tipodeMoradia=

}

Casa::Casa(int metrosQuadrados, const string &tipo,const string &categoria, int metros )
{
	this->metrosQuadrados=metrosQuadrados;
	this->tipodeMoradia=tipodeMoradia;
	metrosQuadrados=metrosQuadrados+Categoria;
}
	void Casa::setmetrosQuadrados() const
	{
	cout<<"Metros quadrados da Casa:";
	cin>>metrosQuadrados;
   }
	void Casa::settipodeMoradia() 
   {
	cout<<"Tipo de Casa:\n Prec�rio \n Popular \n Luxo";
	cin>>tipodeMoradia;	
	}

void Casa::calcularvalorIptu()	
void Casa::informartipodeMoradia()	
{ 
    if(tipodeMoradia="Prec�rio" and metrosQuadrados<= 50)
    Categoria=229.99;
    Iptu=Categoria+metrosQuadrados*1.5+26.99;
   else
   if(tipodeMoradia="Popular" and metrosQuadrados<= 50)
    Categoria=336.76;
    Iptu=Categoria+metrosQuadrados*1.5+26.99;
    else
    Categoria=463.88;
    Iptu=Categoria+metrosQuadrados*1.5+26.99;
}
    
   void Casa::calcularvalorIptu()
   void Casa::informartipodeMoradia()
{
   if(tipodeMoradia="Prec�rio" and metrosQuadrados<= 50.01 and metrosQudrados<=75)
    Categoria=229.99;
    Iptu=Categoria+metrosQuadrados*2.5+36.99;
   else
   if(tipodeMoradia="Popular" and metrosQuadrados<= 50.01 and metrosQuadrados<=75)
    Categoria=336.76;
    Iptu=Categoria+metrosQuadrados*2.5+36.99;
    else
    Categoria=463.88;
    Iptu=Categoria+metrosQuadrados*2.5+36.99;
}
   void Casa::calcularprecodoAluguel()
   void Casa::informartipodeMoradia()
   
   {
   if(tipodeMoradia="Prec�rio" and metrosQuadrados>75)
    Categoria=229.99;
    Iptu=Categoria+metrosQuadrados*3.5+36.99;
   else
   if(tipodeMoradia="Popular" and metrosQuadrados>75)
    Categoria=336.76;
    Iptu=Categoria+metrosQuadrados*3.5+36.99;
    else
    Categoria=463.88;
    Iptu=Categoria+metrosQuadrados*3.5+36.99;
}
 void Casa::getvalorIptu() 
 {
 	cout<<valorIptu;
 };

