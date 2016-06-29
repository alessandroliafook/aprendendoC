/*
 * leitura.h
 *
 *  Created on: Jun 29, 2016
 *      Author: asantos
 */

#ifndef LEITURA_H_
#define LEITURA_H_

void ler_str(char entrada[]){

	scanf("%[^\n]s", entrada);
	getchar();

}


void ler_int(int *numero){

	scanf("%d", numero);
	getchar();

}

#endif /* LEITURA_H_ */
