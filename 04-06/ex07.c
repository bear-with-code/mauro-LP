#include <stdio.h>
#include <string.h>
#include <locale.h>

struct filme{
	char nome[80];
	char genero[30];
	int duracao;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Leitor de filmes\n");
	
	struct filme entrada;
	
	FILE *pArquivo = NULL; 
	pArquivo = fopen("txt/filmes.txt", "rb");
	if(pArquivo != NULL){
		while(fread(&entrada, sizeof(struct filme), 1, pArquivo) >= 1){
			strtok(entrada.nome, "\n"); printf("Nome do filme: %s\n", entrada.nome);
			printf("Gênero do filme: %s\n", entrada.genero);
			printf("Duração do filme: %d\n\n", entrada.duracao);
		}
	}
	else{printf("\nArquivo não encontrado!");}
	
	printf("\nArquivo finalizado!");
	fclose(pArquivo);
	return 0;
}
