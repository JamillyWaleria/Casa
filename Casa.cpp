#include "Casa.h"
#include"CasaPraia.h"
#include"Mansao.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

// Inicializando a vari�vel est�tica (ela deve vir antes do construtor)
float Casa::precodaLuz=20;
double Casa::precoKwh= 0,525389;

ostream &operator <<(ostream &out, const Casa &c)
{
	out<<static_cast<Moradia> (c)
}//implementa��o da sobregarga de operador

// Construtor

Casa::Casa( const Casa &novaCasa)
Casa::~Casa(){

//*****************************************************************************
// Verifica a quantidade de pessoas existentes na casa a partir do nome delas usando um 
//vetor de string, que ser� usado para armazenar a quantidade de nomes dos moradores .
void Casa::setdigitarNome()
{
	if (nPessoas>0)
{
	nomePessoas= new string [nPessoas]// Aloca��o din�mica de mem�ria usando de vetor de ponteiros
	quantPessoas= nPessoas;
	cout<<" N�mero de pessoas:\n";
	cout<< quantPessoas;
}
 else 
{
	nomePessoas=0;
	quantPessoas=0;
	cout<< "N�o existe moradores !"
}
}
// Destrutor
Casa::~Casa() // Destrutor
{
	

delete [] NomePessoas;
}	
// ******************************************************************************


// Construtor vazio
Casa::Casa()
:Moradia ()
{
// Validada��o de dados
	this->nomedoProprietario=" Novo proprietario:";
	this->portadaGaragem=false;
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
void Casa::setPortadaGaragem(bool atual)// construtor que modifica o estada da porta da garagem.

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
void Casa::adicionarMorador(const string &novoMorador)
{
	if(onoff)
{
	if(quantPessoas !=0)
}
string *aux=new string [nPessoas];

	for (int i=0; i<nPessoas; i++)
	aux [i]=morador [i];

//Destrutor
delete [] morador;
morador= new string [++nPessoas];

for (int i=0; i<nPessoas-1;i++)
	morador [i]=aux[i];

morador [nPessoas-1]=novoMorador;

delete [] aux;
}
else // Se a quantidade de nomes for igual a zero , ent�o o sistema ir� mostrar que n�o existe novo morador.
{
morador= new string [++nPessoas];
morador[0]=novoMorador;
}
else 
{
cout<<" N�o existe novo morador.";
}
void Casa::listarMorador () const //Cadastra o novo morador
{
	if( nPessoas>0)
{
cout<<" Os moradores s�o:\n"; // Mostrar a lista de nomes dos novos moradores cadastrados.
for(int i=0;i<nPessoas;i++)
cout<<morador [i]<<"\n";
}
}
else
{

cout<<" Nenhum morador cadastrador!";
}
Casa::Casa()// Calcular o valor total para o pre�o da conta do consumo de energia el�trica
{
	precodaLuz=precodaLuz+quantKwh*precoKwh;
}
Casa::Casa( double precoLuz)
{
	this->precoLuz=precoLuz;
	precodaLuz=precodaLuz+quantKwh*precoKwh;
}

	void Casa::getprecodaLuz()
{
		cout>>precoLuz;		
}
};
