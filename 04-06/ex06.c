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
	puts("Editor de filmes\n");
	
	struct filme entrada;
	printf("Digite o nome do filme: "); fgets(entrada.nome, 80, stdin); 
	printf("Digite o gênero do filme: "); scanf("%30s", entrada.genero); getchar();
	printf("Digite a duração em minutos do filme: "); getchar(); scanf("%d", &entrada.duracao);
	
	FILE *pArquivo = NULL; 
	pArquivo = fopen("txt/filmes.txt", "ab");
	if(pArquivo != NULL){
		fwrite(&entrada, sizeof(struct filme), 1, pArquivo);
	}
	else{printf("\nArquivo não encontrado!");}
	
	printf("\nArquivo finalizado!");
	fclose(pArquivo);
	return 0;
}
