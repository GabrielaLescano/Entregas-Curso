#ifndef __DEMOGORGON_H__
#define __DEMOGORGON_H__

#include <stdio.h>
#include <stdbool.h>


/*Pre: -.
 *Post: Anuncia el comienzo del enfrentamiento mediante consola.
*/
void comenzar_enfrentamiento();



/*Pre: -.
 *Post: Pide el nivel de animo de Eleven, en caso de recibir un valor invalido lo informa 
 *		y vuelve a pedir el ingreso, caso contrario devuelve el valor recibido.
*/
int recibir_animo();


/*Pre: "animo_recibido" debe corresponder al tipo de dato int.
 *Post: Devuelve "ANIMO_VERIFICADO" si el valor de "animo_recibido" se encuentra 
 *	   	entre MIN_ANIMO y MAX_ANIMO, caso contrario devuelve "ANIMO_NO_VERIFICADO".
*/
bool verificar_animo_recib(int animo_recibido);


/*Pre: -.
 *Post: Pide el nivel de confianza de Eleven con sus amigos, en caso de recibir un valor invalido lo informa 
 *		y vuelve a pedir el ingreso, caso contrario devuelve el valor recibido.
*/
char recibir_confianza();


/*Pre: "confianza_recibida" debe corresponder al tipo de dato char.
 *Post: Devuelve "NIVEL_CONFIANZA_VERF" si el valor de "confianza_recibida" se encuentra 
 *	   	entre los niveles considerados, caso contrario devuelve "NIVEL_CONFIANZA_NO_VERF".
*/
bool verificar_nivel_confianza_recib(char confianza_recibida);


/*Pre: "nivel_animo" y "nivel_confianza" con correspondientes valores verificados.
 *Post: Devuelve el valor de la fuerza psiquica actual de Eleven.
*/
float recibir_fuerza_psiquica(int nivel_animo, char nivel_confianza);


/*Pre: "nivel_animo" con valor verificado y "multiplicador_confianza" correspondiente al "nivel_confianza".
 *Post: Calcula la fuerza psiquica de Eleven con los valores actuales de "nivel_animo" y "multiplicador_confianza".
*/
float calcular_fuerza(int nivel_animo, float multiplicador_confianza);


/*Pre: "fuerza_psiquica" correctamente calculado.
 *Post: Anuncia el resultado del enfrentamiento mediante consola.
*/
void resultado_enfrentamiento(float fuerza_psiquica);


/*Pre: "fuerza_psiquica" correctamente calculado.
 *Post: Evalua si la "fuerza_psiquica" de El(Eleven) es suficiente para poder 'vencer' al Demogorgon.
*/
char enfrentamiento(float fuerza_psiquica); 



#endif /* __DEMOGORGON_H__ */