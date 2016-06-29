/*
 * agenda.h
 *
 *  Created on: Jun 29, 2016
 *      Author: asantos
 */

#ifndef AGENDA_AGENDA_H_
#define AGENDA_AGENDA_H_

#include <string.h>
#include "../Pessoa/pessoa.h"

struct Pessoa agenda[100];
int total_cadastros = 0;
int i;

void cadastra_pessoa(char nome[], int idade){

	if(total_cadastros < 100){

		strcpy(agenda[total_cadastros].nome, nome);
		agenda[total_cadastros].idade = idade;
		total_cadastros = total_cadastros + 1;

	} else {
		printf("Limite de memoria ultrapassado.");
	}
}


void imprime_cadastros(){

	for(i = 0; i < total_cadastros; i++){
		printf("%d) ", i + 1);
		imprime_pessoa(agenda[i]);
	}
}


#endif /* AGENDA_AGENDA_H_ */
