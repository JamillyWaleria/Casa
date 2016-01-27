#include "Casa.h"

// Porta Aberta
void Casa::abrirPortadagaragem(){
	
	if(portadaGaragem == true) {
		cout<<"Porta ja está aberta";
	}
	else{
		this->portadaGaragem = true;
		 cout<<"Porta aberta."; 
	}
//Porta Fechada	
}
void Casa::fecharPortadaGaragem(){
	if(portadaGaragem == false) {
		cout<<"Porta ja está fechada";
	}
	else{
		this->portadaGaragem = false;
		 cout<<"Porta fechada."; 
	}
	
}
//ligar luz do quarto
void Casa::ligarLuzdoQuarto(){
	if(luzdoQuarto== true) {
		cout<<"Luz do quarto ja está ligada.";
	}
	else{
		this->luzdoQuarto= true;
		 cout<<"Luz Ligada."; 
	}
	
}
// desligar luz do quarto

void Casa::desligarLuzdoQuarto(){
	if(luzdoQuarto== false) {
		cout<<"Luz do quarto ja está desligada";
	}
	else{
		this->luzdoQuarto= false;
		 cout<<"Luz desligada."; 
	}
	
}

// SET E GET DA PORTA DA GARAGEM
void Casa::setportadaGaragem(bool atual){
	this->portadaGaragem= atual;
}
bool Casa::getportadaGaragem(){
	return this->portadaGaragem
}
// SET E GET DA LUZ DO QUARTO
Casa::setluzdoQuarto(bool atual2){
	this->luzdoQuarto = atual2;
}
bool Casa::getLuzdoQuarto(){
	return this->luzdoQuarto
}

