#include <iostream>
#include"Casa.h"
#include "CasaPraia.h"
#include "Mansao.h"
#include"Moradia.h"
#include<vector>
using std::cout;
using std::cin;
int main (int argc, char** argv)
{
	
	vector<Casa*> casas(1);
	
	Casa[0]=new CasaPraia();
	
	for (int i=0; i<casas.size(); i++)
	{
		CasaPraia *ptcp = dynamic_cast< CasaPraia*> (casas [i]);
		Mansao *ptms = dynamic_cast< Mansao*> (casas [i]);
		
//CASA DA PRAIA
        if(ptcp!=0)
   {
   	float precoAluguel=ptcp->getcalcularprecodoAluguel();
           cout << "valor a ser pago:" <<precodoAluguel<< endl;
           ptcp->setprecodoAluguel( 1.10 * precodoAluguel );
           cout << "Valor a ser pago com acrescimo de 10%: $";
              << ptcp->getcalcularprecodoAluguel() << endl;
        } // end if

        cout << "Aluguel a receber $" ;
        casas[ i ]->calcularprecodoAluguel();
        cout << "\n\n";
     } // end for

     // release objects pointed to by vector's elements
     for ( int j = 0; j < casas.size(); j++ )
     {        // output class name                           
        cout << "deleting object of "                  
           << typeid( *casas[ j ] ) << endl;

        delete casas[ j ];
     } // end for

     return 0;
}
  
	Casa  c;
	Mansao ms;
	/*CasaPraia p;*/
	
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
	cout<<"\n A quantidade de dias em que ficar�o hospedados:\n";
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
	cout<<"  O que voc� dejesa fazer?\n\n 1-Abrir a porta da garagem:\n 2- Fechar a porta da garagem:\n 3-Ligar luz do quarto\n4-Desligar luz do quarto:\n 5-N�o fazer nada:\n";
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
cout<<"Escolha inv�lida"<<endl;
	}
	
	
	} while (opt!=0);
		
	

	do
	{
	cout<<"MANS�O\n";
	cout<<"Qual a quantidade de funcion�rios:\n 11 COZINHEIRO:\n 12 CAMAREIROS: \n 13 BAB�S:\n";
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
cout<<"Escolha inv�lida"<<endl;
	}
	
	
	} while (opt2!=0);
}	

