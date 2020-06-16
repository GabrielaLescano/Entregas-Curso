#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main(){
	int animo = DEF_ANIMO_JUGADOR;

	comenzar_enfrentamiento();
	animo = recibir_animo();
	printf("%cnimo recibido: %i",181, animo);
	
	return 0;
}
