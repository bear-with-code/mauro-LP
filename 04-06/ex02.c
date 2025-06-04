#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Editor de Personagens\n");
	
	char nome[31] = "", arqNome[61] = "txt/";
	printf("Digite o nome escolhido pro arquivo: ");
	scanf("%30s", nome); strcat(nome, ".txt"); 
	strcat(arqNome, nome);
	
	FILE *pArquivo = NULL; 
	pArquivo = fopen(arqNome, "a");
	if(pArquivo != NULL){
		char letra; int fim = 0;
		while(fim == 0){
			if(fim){break;}
			
			char personagem[31];
			printf("Digite um personagem pro arquivo: ");
			getchar(); fgets(personagem, 30, stdin);
			
			fprintf(pArquivo, "%s", personagem);
			
			printf("Deseja continuar? (S/N) ");
			scanf("%c", &letra); letra = tolower(letra);
			switch(letra){
				case 's': 
					printf("\n"); 
					break;
				default: 
					fim = 1; 
					break;
			}
			
			if(fim){break;}
		}
	}
	else{printf("\nArquivo não criado!");}
	
	printf("\nArquivo finalizado!");
	fclose(pArquivo);
	return 0;
}
