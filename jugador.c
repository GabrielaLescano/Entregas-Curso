#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main(){
	int animo = DEF_ANIMO_JUGADOR;
	char nivel_confianza = DEF_NIVEL_CONFIANZA_JUGADOR;
	float fuerza_psiquica = DEF_FUERZA_PSIQUICA;

	comenzar_enfrentamiento();

	animo = recibir_animo();

	printf("\n%cnimo recibido: %i\n",181, animo);
	
	nivel_confianza = recibir_confianza();

	printf("\nConfianza recibida: %c\n\n", nivel_confianza);

	fuerza_psiquica = recibir_fuerza_psiquica(animo, nivel_confianza);

	printf("\nFuerza ps%cquica obtenida: %f\n",161,fuerza_psiquica);


	return 0;
}
