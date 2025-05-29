#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int svg_begin(FILE *arquivo);
int svg_end(FILE *arquivo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Editor de SVG Avan�ado\n");
	
	char nome[31] = "";
	printf("Digite o nome escolhido pro arquivo: ");
	scanf("%30s", nome); getchar(); strcat(nome, ".svg");
	
	FILE *pArquivo = NULL; pArquivo = fopen(nome, "w");
	if(pArquivo != NULL){
		svg_begin(pArquivo);
		
		char escolha; int fim = 0;
		while(1){
			if(fim){break;}
			printf("\nOp��es: [R]et�ngulo, [C]�rculo, [L]inha, [T]exto\n");
			printf("Digite a op��o escolhida (F para finalizar): ");
			scanf("%c", escolha); escolha = tolower(escolha); getchar();
			
			switch(escolha){
				case 'r':
					break;
				case 'c':
					break;
				case 'l':
					break;
				case 't':
					break;
				case 'f':
					fim = 1;
					break;
			}
		}
	}
	else{printf("\nArquivo n�o criado!");}
	
	return 0;
}

int svg_begin(FILE *arq){
	int retorno = fprintf(arq, "<svg version=\"1.1\" "); if(retorno < 0){return 0;}
	retorno = fprintf(arq, "width=\"300\" height=\"200\" "); if(retorno < 0){return 0;}
	retorno = fprintf(arq, "xmlns=\"http://www.w3.org/2000/svg\">"); if(retorno < 0){return 0;}
	return 1;
}

int svg_end(FILE * arquivo) {
	int retorno = fprintf(arquivo, "</svg>"); return (retorno < 0) ? 0 : 1;
} 
