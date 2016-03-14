#include "Casa.h"
#include"CasaPraia.h"
#include"Mansao.h"
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

// Inicializando a variável estática (ela deve vir antes do construtor)
double Casa::precodaLuz=20;
double Casa::precodoKwh= 0.525389;

ostream &operator <<(ostream &out, const Casa &c)
{
	out<<static_cast<Moradia> (c);
}//implementação da sobregarga de operador

// Construtor

Casa::Casa( const Casa &novaCasa)
{
	
}


//*****************************************************************************
// Verifica a quantidade de pessoas existentes na casa a partir do nome delas usando um 
//vetor de string, que será usado para armazenar a quantidade de nomes dos moradores .
void Casa::setadicionarnovoMorador(string)
{
	if (nPessoas>0)
{
	novoMorador= new string [nPessoas];// Alocação dinâmica de memória usando de vetor de ponteiros
	int quantPessoas= nPessoas;
	cout<<" Número de pessoas:\n";
	cout<< quantPessoas;
}
 else 
{
	novoMorador=0;

	cout<< "Não existe moradores !";
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
// Validadação de dados
	this->portadaGaragem=false;
	this->nPessoas=0;
	this->quantKwh=0;
	precodaLuz=precodaLuz+quantKwh*precodoKwh;
}

Casa::Casa (const string &nome, bool porta){ // Construtor de cópia
	this->nomedoProprietario=nome;
	this->portadaGaragem=porta;
}
//*********************************************************************************
// Função-membro para "Porta Aberta".
void Casa::abrirPortadaGaragem()
{
if (portadaGaragem==true)// Avisa quando  a porta já estiver aberta
{
		cout<<"Porta já está aberta !";
}
else // Se não estiver aberta, a abrirá

{
	this->portadaGaragem=true;
	cout<<" Porta Aberta!";
}
}
// Função-membro para " Porta fechada".
void Casa::fecharPortadaGaragem()// construtor
{
if(portadaGaragem==false)//Avisa quando a porta estiver fechada
{
	cout<<"Porta já está fechada !";
}
else // se não estiver fechada, a fechará
{
	this->portadaGaragem=true;
	cout<<" Porta Fechada !";
}
}

//********************************************************************************************
// SET e GET- Métodos Acessores.(Porta da garagem)
void Casa::setportadaGaragem(bool atual)// construtor que modifica o estada da porta da garagem.

{
	this->portadaGaragem=atual;//atualiza o estado da porta.
}
bool Casa::getPortadaGaragem() // verifaca o tipo de  retorno da função.
{
		return this->portadaGaragem;// retorna o valor em boleano.
}
//*********************************************************************************************
//Alocação dinâmica de memória (uso de ponteiros)
// Cadastra novos moradores na casa usando um vetor string de ponteiros (nPessoas) que é usado para guardar os nomes dos novos moradores.
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
else // Se a quantidade de nomes for igual a zero , então o sistema irá mostrar que não existe novo morador.
{
novoMorador= new string [++nPessoas];
novoMorador[0]=morador;
}

}
void Casa::listarMorador () const //Cadastra o novo morador
{
	if( nPessoas>0)
{
cout<<" Os moradores são:\n"; // Mostrar a lista de nomes dos novos moradores cadastrados.
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

