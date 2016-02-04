#include <iostream>
#include "Casa.h"
using std::cout;
using std::cin;

int main(int argc, char** argv) {
	
	Casa a;
	int opt;
	string nome;
	cout<<" Digite o nome do proprietário:\n\n O que deseja fazer? \n\n 1 - Abrir porta da garagem \n2 - Fechar porta da garagem \n3 Ligar luz do quarto\n4 Desligar luz do quarto.";
	cin >> opt;
	cin>> nome;
	switch (opt){
		
		case 1:
			a.abrirPortadaGaragem();
			break;
		case 2:
			a.fecharPortadaGaragem();
			break;
		case 3:
		    a.ligarLuzdoQuarto();
		    break;
		case 4:
		    a.desligarLuzdoQuarto()	;
		    break;
	}
	
	return 0;
}
