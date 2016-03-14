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
	string nome;
	double kwh;
	cout<<" Digite o nome do proprietário:\n\n o que você dejesa fazer?\n\n 1-Abrir a porta da garagem\n 2- fechar a porta da garagem\n 3-Ligar luz do quarto\n4-Desligar luz do quarto";
	cout<<"Digite a quantidade de Kwh consumidos:\n ";
	cin>> kwh;
	cin>> nome;
	
	
	
	do{
	
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
default:
cout<<"Escolha inválida"<<endl;
	}
	
	
	} while (opt!=0);
		
	
}
