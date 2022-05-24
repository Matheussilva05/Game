#pragma once

#include "Coordenada.h"
#include "Jogador.h"

#define VIDA_ORIANA 100
#define TAM_X_ORIANA 50
#define TAM_Y_ORIANA 80
#define VELOCIDADE_X_ORIANA 0.05f
#define VELOCIDADE_Y_ORIANA 0.0f

namespace Entidade {
	namespace Personagem {
		class Oriana : public Jogador
		{
		private:
			const bool EhJogador1;
		public:
			Oriana(Matematica::CoordenadaF posInicio);
			~Oriana();
			void inicializacao();
		};
	}
}

