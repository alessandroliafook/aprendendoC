/*
 * pessoa.h
 *
 *  Created on: Jun 29, 2016
 *      Author: asantos
 */

#ifndef PESSOA_H_
#define PESSOA_H_

struct Pessoa{

	char nome[100];
	int idade;
};

int compara_pessoa(struct Pessoa pessoa, struct Pessoa pessoa2){

	if(pessoa.idade > pessoa2.idade){
		return 1;

	} else if (pessoa.idade == pessoa2.idade){
		return 0;

	} else {
		return -1;
	}
}

void imprime_pessoa(struct Pessoa pessoa){

	printf("%s, %d\n", pessoa.nome, pessoa.idade);
}

#endif /* PESSOA_H_ */
