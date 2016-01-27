#include <iostream>
#include "Casa.h"

int main(int argc, char** argv) {
	
	Casa a;
	int opt;
	
	cout << " O que deseja fazer? \n\n 1 - Abrir porta da garagem \n 2 - Fechar porta da garagem \n 3 Ligar luz do quarto\n 4 Desligar luz do quarto."
	cin >> opt;
	switch (opt){
		case 1:
			a.abrirPortadagaragem()
			break;
		case 2:
			a.fecharPortadaGaragem()
		case 3:
		    a.ligarLuzdoQuarto()
		break;
		case 4:
		    a.desligarLuzdoQuarto()	
	}
	
	return 0;
}
