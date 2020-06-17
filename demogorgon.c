#include "demogorgon.h"


#define MSJ_ENFRENTAMIENTO "\n\nEl enfrentamiento est%c por comenzar\n"

#define MSJ_MAL_INGRESO "Ingreso no v%clido\n"
#define MSJ_RECIBIR_ANIMO "\nIngrese el %cnimo de El(Eleven) en un rango del 1 al 100 inclusive\n"

const int DEF_ANIMO = 0;
const int MIN_ANIMO = 1;
const int MAX_ANIMO = 100;

const bool ANIMO_VERIFICADO = true;
const bool ANIMO_NO_VERIFICADO = false;

#define MSJ_RECIBIR_CONFIANZA "\nIngrese el nivel de confianza que tiene El(Eleven) con sus amigos\nBajo [b] - Medio [m] - Alto [a]\n"

const char DEF_NIVEL_CONFIANZA = 'z';
#define CONFIANZA_BAJA 'b'
#define CONFIANZA_MEDIA 'm'
#define CONFIANZA_ALTA 'a'

const bool NIVEL_CONFIANZA_VERF = true;
const bool NIVEL_CONFIANZA_NO_VERF = false;

const float DEF_FUERZA_PSQUICA = -0.1F;
const float MULTIP_CONF_BAJO = 0.7F;
const float MULTIP_CONF_MEDIO = 1.3F;
const float MULTIP_CONF_ALTO = 3.7F;

const char DEF_RESULTADO = 'w';
#define GANO 'g'
#define GANO_JUSTO 'h'
#define RESULT_DESCONOCIDO 'd'
const float MIN_GANO = 67.0F;
const float MAX_GANO = 370.0F;
const float VALOR_GANO_JUSTO = 65.0F;

#define MSJ_ERROR_CALCULAR_FUERZA "Algo mali%c sal"


#define MSJ_GANO "\n\n\n\n\tEleven cont%c con su mayor %cnimo y con la confianza de sus amigos\n\tpor lo que logr%c vencer al Demogorgon con su fuerza ps%cquica!!!\n\n\n\t \n"

#define MSJ_GANO_JUSTO "\n\n\n\n\tEleven cont%c con la fuerza ps%cquica justa para poder vencer al Demogorgon\n\tpor lo que qued%c realmente d%cbil luego del enfrentamiento!\n\n\n"

#define MSJ_RESULT_DESC "\n\n\n\n\tEleven enfrent%c al Demogorgon pero no parec%ca que lo pudiera vencer\n\thasta que una luz cubri%c todo el lugar desapareciendo al Demogorgon junto a Eleven\n\n\tFin.. ?\n\n"



void comenzar_enfrentamiento(){

	printf(MSJ_ENFRENTAMIENTO,160);
	
}

int recibir_animo(){
	int animo_recibido = DEF_ANIMO;
	do{

		printf(MSJ_RECIBIR_ANIMO,160);
		scanf("%i", &animo_recibido);

		if( (animo_recibido < MIN_ANIMO ) || (animo_recibido > MAX_ANIMO) ){
		printf (MSJ_MAL_INGRESO,160);
		}else{
			printf("Ingreso aceptado\n");
		}
	}while ( (animo_recibido < MIN_ANIMO) || (animo_recibido > MAX_ANIMO) );
	
	return animo_recibido;
}

char recibir_confianza(){
	char confianza_recibida = DEF_NIVEL_CONFIANZA;

	do{
		printf(MSJ_RECIBIR_CONFIANZA);
		scanf("%c", &confianza_recibida);
		if(confianza_recibida == CONFIANZA_BAJA || confianza_recibida == CONFIANZA_MEDIA || confianza_recibida == CONFIANZA_ALTA){
			printf("Ingreso de confianza aceptado");
		}else{
			printf(MSJ_MAL_INGRESO,160);
		}
	}while ( ((confianza_recibida!=CONFIANZA_BAJA ) && (confianza_recibida!=CONFIANZA_MEDIA)) && (confianza_recibida!=CONFIANZA_ALTA));
	
	return confianza_recibida;

}


float recibir_fuerza_psiquica(int nivel_animo, char nivel_confianza){
	float multiplicador = 0.0F;
	
	switch(nivel_confianza){
		case CONFIANZA_BAJA:
			multiplicador = MULTIP_CONF_BAJO;
			break;
		case CONFIANZA_MEDIA:
			multiplicador = MULTIP_CONF_MEDIO;
			break;
		default:
			multiplicador = MULTIP_CONF_ALTO;
	}

	return calcular_fuerza(nivel_animo, multiplicador);

}


float calcular_fuerza(int nivel_animo, float multiplicador_confianza){
	return (nivel_animo * multiplicador_confianza);
}


void resultado_enfrentamiento(float fuerza_psiquica){
	if (fuerza_psiquica<VALOR_GANO_JUSTO){
		printf(MSJ_RESULT_DESC,162,161,162);

	}else if( fuerza_psiquica>=VALOR_GANO_JUSTO && fuerza_psiquica<MIN_GANO ){
		printf(MSJ_GANO_JUSTO,162,161,162,130);

	}else if( fuerza_psiquica>=MIN_GANO && fuerza_psiquica<=MAX_GANO ){
		printf(MSJ_GANO,162,160,162,161);
	
	}else{
		printf(MSJ_ERROR_CALCULAR_FUERZA);
	
	}
	

}
