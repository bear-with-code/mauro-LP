#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Leitor de Personagens\n");
	
	char nome[31] = "", arqNome[61] = "txt/";
	printf("Digite o nome do arquivo: ");
	scanf("%30s", nome); strcat(nome, ".txt"); 
	strcat(arqNome, nome); printf("\n"); 
	
	FILE *pArquivo = NULL; 
	pArquivo = fopen(arqNome, "r");
	if(pArquivo != NULL){
		char letra; int fim = 0, n_linha = 1;
		while(fim == 0){
			if(fim){break;}
			
			char linha[81]; getchar(); 
			if(fgets(linha, 80, pArquivo) == NULL){
				fim = 1; printf("Fim de arquivo.");
			}
			else{
				printf("Linha %d: %s", n_linha, linha); n_linha++; 
				printf("(P)róximo ou (F)inalizar? ");
				scanf("%c", &letra); letra = tolower(letra);
				switch(letra){
					case 'f': 
						fim = 1; 
						break;
					default: 
						printf("\n"); 
						break;
				}
			}
		
			
			if(fim){break;}
		}
	}
	else{printf("\nArquivo não encontrado!");}
	
	fclose(pArquivo);
	return 0;
}
