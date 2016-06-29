#include <stdio.h>


struct Pessoa{
	char nome[100];
	int idade;

};

struct Pessoa agenda[100];

int main(){

	int i;
	int n_cadastros;

	scanf("%d", &n_cadastros);
	getchar();

	for(i = 0; i < n_cadastros; i++){

		scanf("%[^\n]s", agenda[i].nome);
		getchar();

		scanf("%d", &agenda[i].idade);
		getchar();

	}

	for(i = 0; i < n_cadastros; i++){
		printf("%d: %s, %d\n", i + 1, agenda[i].nome, agenda[i].idade);
	}

	return 0;
}
