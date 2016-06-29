/*
 * agenda.h
 *
 *  Created on: Jun 29, 2016
 *      Author: asantos
 */

#ifndef AGENDA_AGENDA_H_
#define AGENDA_AGENDA_H_

struct Pessoa agenda[100];

int i;
int n_cadastros;
int total_cadastros = 0;

void cadastra_pessoa(){

	printf("Informe o numero de cadastros: ");
	ler_int(&n_cadastros);

	total_cadastros = total_cadastros + n_cadastros;

	for(i = 0; i < n_cadastros; i++){

		printf("Informe o nome da pessoa: ");
		ler_str(agenda[i].nome);

		printf("Informe a idade da pessoa: ");
		ler_int(&agenda[i].idade);
	}
}


void imprime_cadastros(){

	for(i = 0; i < total_cadastros; i++){
		imprime_pessoa(agenda[i]);
	}
}


#endif /* AGENDA_AGENDA_H_ */
