#include <stdio.h>
#include "Util/leitura.h"
#include "Agenda/agenda.h"

int main() {

	int escolha = 0;

	do {

		printf("Agenda em C: \n"
				"Digite a opcao da funcionalidade:\n"
				"1 - cadastrar uma pessoa;\n"
				"2 - imprimir cadastros;\n"
				"3 - fim\n"
				"opcao: ");

		ler_int(&escolha);


		if (escolha == 1) {
			char nome[100];
			int idade;

			printf("Informe o nome da pessoa: ");
			ler_str(nome);

			printf("Informe a idade da pessoa: ");
			ler_int(&idade);

			cadastra_pessoa(nome, idade);

		} else if (escolha == 2) {
			imprime_cadastros();
		}

		printf("\n");
	} while (escolha != 3);

	return 0;
}
