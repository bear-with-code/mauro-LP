#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include "svgFuncs.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Editor de SVG Avançado\n");
	
	char nome[31] = "";
	printf("Digite o nome escolhido pro arquivo: ");
	scanf("%30s", nome); strcat(nome, ".svg");
	
	FILE *pArquivo = NULL; pArquivo = fopen(nome, "w");
	if(pArquivo != NULL){
		svg_begin(pArquivo);
		
		char escolha; int fim = 0;
		while(!fim){
			if(fim){break;}
			printf("\nOpções: [R]etângulo, [C]írculo, [L]inha, [T]exto\n");
			printf("Digite a opção escolhida (F para finalizar): ");
			getchar(); scanf("%c", &escolha); escolha = tolower(escolha); 
			
			switch(escolha){
				case 'r': svg_rect(pArquivo); break;
				case 'c': svg_circ(pArquivo); break;
				case 'l': svg_line(pArquivo); break;
				case 't': svg_text(pArquivo); break;
				case 'f': fim = 1; break;
			}
			
			if(fim){break;}
		}
		
		svg_end(pArquivo);
	}
	
	else{printf("\nArquivo não criado!");}
	
	fclose(pArquivo);
	return 0;
}
