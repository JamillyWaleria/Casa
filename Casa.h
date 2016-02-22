
#include <iostream>
#include <string>

using std::string;
using std::cout;

class Casa
{

	public:// metodos
		Casa();
		Casa(const string &nome,bool luz,bool porta);
		void setluzdoQuarto(bool);
		void setportadaGaragem(bool);
		void setdigitarnome (string);
		void setcalcularprecodaLuz(float);
		
		bool getLuzdoQuarto();
		bool getPortadaGaragem();
	    string getdigitarNome();
	    float getcalcularPreco();
		
		void abrirPortadaGaragem();
		void fecharPortadaGaragem();
		void ligarLuzdoQuarto();
		void desligarLuzdoQuarto();
	    string digitarNomedoProprietario();
	    void calcularPrecodaLuz();

		
	private:// atributos
		string nomedoProprietario;
		bool luzdoQuarto;
		bool portadaGaragem;
		static float precodaLuz;
		
};
