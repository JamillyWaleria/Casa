#include "Casa.h"
// inicializando variavel estatica(ele deve vir antes do construtor)
 float Casa::precodaLuz=200;
 
 	Casa::Casa (const Casa &novacasa)
	 {
 		nomedoProprietario=novacasa.luzdoQuarto;
 		nomedoProprietario=novacasa.nomedoProprietario;
 		nomedoProprietario=novacasa.portadaGaragem;
	 }
 

Casa::Casa(){
	this->nomedoProprietario="Novo proprietario";
	this->luzdoQuarto=false;
	this->portadaGaragem=false;
	
}
Casa::Casa(const string &nome ,bool luz,bool porta ){
	this->nomedoProprietario=nome;
	this->luzdoQuarto=luz;
	this->portadaGaragem=porta;

}
// Porta Aberta
void Casa:: abrirPortadaGaragem(){
	
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
 bool Casa::getPortadaGaragem(){
	return this->portadaGaragem;
}
// SET E GET DA LUZ DO QUARTO
void Casa::setluzdoQuarto(bool atual2){
	this->luzdoQuarto = atual2;
}
bool Casa::getLuzdoQuarto(){
	return this->luzdoQuarto;
}
// calculando o preco da luz (usando a variavel estática).


