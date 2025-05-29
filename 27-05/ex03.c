#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int svg_begin(FILE *arquivo);
int svg_end(FILE *arquivo);

int svg_rect(FILE *arquivo);
int svg_circ(FILE *arquivo);
int svg_line(FILE *arquivo);
int svg_text(FILE *arquivo);

void x_and_y(int *vetor);

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
				//case 'l': svg_line(pArquivo); break;
				//case 't': svg_text(pArquivo); break;
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

void x_and_y(int *vt){
	int x, y; scanf("%d %d", &x, &y);
	*vt = x; vt++; *vt = y;
}

int svg_rect(FILE *arq){
	int xy[2] = {0, 0}, wh[2] = {0, 0};
	
	int retorno;
	printf("Digite a posição x e y do retângulo: "); x_and_y(xy);
	printf("Digite a largura e altura do retângulo: "); x_and_y(wh);
	retorno = fprintf(arq, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", xy[0], xy[1], wh[0], wh[1]);
	return (retorno < 0) ? 0 : 1;
}

int svg_circ(FILE *arq){
	int xy[2] = {0, 0};
	
	int retorno, raio;
	printf("Digite a posição x e y do círculo: "); x_and_y(xy);
	printf("Digite o raio do círculo: "); scanf("%d", &raio);
	retorno = fprintf(arq, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" />", xy[0], xy[1], raio);
	return (retorno < 0) ? 0 : 1;
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
