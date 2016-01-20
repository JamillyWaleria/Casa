class Casa
{

	public:
		Casa();
		void setluzdoQuarto(bool);
		void setluzdaSala(bool);
		void setluzdoBanheiro(bool);
		void setluzdaCozinha(bool);
		void setportadaGaragem(bool);
		
		bool getLuzdoQuarto(bool);
		bool getLuzdaSala(bool);
		bool getLuzdoBanheiro(bool);
		bool getLuzdaCozinha(bool);
		bool getPortadaGaragem(bool);
		
		bool abrirPortadagaragem();
		bool fecharPortadaGaragem();
		bool ligarLuzdoQuarto();
		bool desligarLuzdoQuarto();
		bool ligarLuzdaSala();
		bool desligarLuzdaSala();
		bool ligarLuzdoBanheiro();
		bool desligarLuzdoBanheiro();
		bool ligarLuzdaCozinha();
		bool desligarLuzdaCozinha();
		
	private:
		bool luzdoQuarto;
		bool luzdaSala;
		bool luzdaBonheiro;
		bool luzdaCozinha;
		bool portadaGaragem;
}
