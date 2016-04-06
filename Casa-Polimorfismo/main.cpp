#include <iostream>
#include"Casa.h"
#include "CasaPraia.h"
#include "Mansao.h"
#include"Moradia.h"
#include<vector>

using std::cout;
using std::cin;
using std::vector;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
vector < Moradia * > moradias( 4 );

Moradia[0]=new Casa();
Moradia[1]=new Apartamento();
Moradia[2]=new CasaPraia();
Moradia[3]=new Mansao();

for (int i=0; i<moradias.size(); i++) 

{
	Casa*ptrc = dynamic_cast< Casa*> (moradias [i]);
	Aparatamento*ptrap = dynamic_cast< Apartamento*> (moradias [i]);
	CasaPraia *ptrcp = dynamic_cast< CasaPraia*> (moradias[i]);
	Mansao *ptrms = dynamic_cast< Mansao*> (moradias [i]);
}

//CASA DA PRAIA
        if(ptcp!=0)
    cout<<"Aluguel\n Está dentro da temporada:\n 1-SIM \n 2-Não";
    cin>>opt;
    switch (opt)
	{
	if (opt=1)
	cout << "valor a ser pago:" <<precodoAluguel<< endl;
	else
	ptrcp->setprecodoAluguel( 1.10 * precodoAluguel );
           cout << "Valor a ser pago com acrescimo de 10%: $";
              << ptcp->getcalcularprecodoAluguel() << endl;
}
		
	cout << "Aluguel a receber $" ;
    moradias[ i ]->calcularprecodoAluguel();
    cout << "\n\n";	 // endif
}
for ( int j = 0; j < moradias.size(); j++ )
     {        // output class name                           
        cout << "deleting object of "                  
           << typeid( *moradias[ j ] ) << endl;

        delete moardias[ j ];
     } // end for

 return 0;
