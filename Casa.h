
#include <iostream>

using std::cout;

class Casa
{

	public:
		Casa();
		void setluzdoQuarto(bool);
		void setportadaGaragem(bool);
		
		bool getLuzdoQuarto();
		bool getPortadaGaragem();
		
		void abrirPortadagaragem();
		bool fecharPortadaGaragem();
		bool ligarLuzdoQuarto();
		bool desligarLuzdoQuarto();
		
		
	private:
		bool luzdoQuarto;
		bool portadaGaragem;
};
