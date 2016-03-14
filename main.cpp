#include <iostream>
#include"Casa.h"
#include "CasaPraia.h"
#include "Mansao.h"
#include"Moradia.h"
using std::cout;
using std::cin;
int main (int argc, char** argv)
{
	
	
	Casa  c;
	Mansao ms;
	CasaPraia p;
	Moradia m;
	int opt;
	int opt2;
	string nome;
	double kwh;
	int dias;
	string proprietario;
	int hospedes;
	string morador;
		
	cout<<"CLASSES\n MOARDIA\n";
	cout<<" Digite o nome do proprietario:\n";
	cin>> proprietario;

	cout<<" CASA DA PRAIA\n";
	cout<<" Digite a quantidade de hospedes:\n";
	cin>> hospedes;
	cout<<"\n A quantidade de dias em que ficarão hospedados:\n";
	cin>>dias;
	cout<<" CASA\n";
	cout<<" Novo morador:\n";
	cout<<"Digite a quantidade de Kwh consumidos:\n ";
	cin>> kwh;
		
 for (int i=0;i<=6;i++){
 
 	getline( cin,morador);
 	c.adicionarnovoMorador(morador);
  }

	c.listarMorador();
	
	
	do{
	cout<<"  O que você dejesa fazer?\n\n 1-Abrir a porta da garagem:\n 2- Fechar a porta da garagem:\n 3-Ligar luz do quarto\n4-Desligar luz do quarto:\n 5-Não fazer nada:\n";
	cin>> opt;
	switch (opt)
	{
		case 1:
		c.abrirPortadaGaragem();
		break;
	case 2:
		c.fecharPortadaGaragem();
		break;
	case 3:
		c.ligarluzdoQuarto();
		break;
	case 4:
		c.desligarluzdoQuarto();
		break;
	case 5:
		break;	
default:
cout<<"Escolha inválida"<<endl;
	}
	
	
	} while (opt!=0);
		
	

	do
	{
	cout<<"MANSÃO\n";
	cout<<"Qual a quantidade de funcionários:\n 11 COZINHEIRO:\n 12 CAMAREIROS: \n 13 BABÁS:\n";
	cin>> opt2;
	switch (opt2)
	{
		case 11:
        ms.calcularsalCozinheiros();
    
		break;
		 			 
		case 12:	
		ms.calcularsalCamareiros();   
		break;
		
		case 13:
		ms.calcularsalBabas();
		break;
		
		case 14:
		break;	
	
default:
cout<<"Escolha inválida"<<endl;
	}
	
	
	} while (opt2!=0);
}	

