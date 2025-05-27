#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Editor de SVG\n");
	
	char nome[31] = "";
	printf("Digite o nome escolhido pro arquivo: ");
	scanf("%30s", nome); getchar(); strcat(nome, ".svg");
	
	int x, y;
	printf("Digite a posição x e y da forma: "); scanf("%d %d", &x, &y);
	
	int w, h;
	printf("Digite a largura e altura da forma: "); scanf("%d %d", &w, &h);
	
	FILE *pArquivo = NULL;
	pArquivo = fopen(nome, "w");
	
	if(pArquivo != NULL){
		fprintf(pArquivo, "<svg version=\"1.1\"\n");
		fprintf(pArquivo, "width=\"300\" height=\"200\"\n");
		fprintf(pArquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
		fprintf(pArquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n", x, y, w, h);
		fprintf(pArquivo, "</svg>\n");
		
		printf("\nArquivo criado!");
	}
	else{
		printf("\nArquivo não criado!");
	}
	
	fclose(pArquivo);
	return 0;
}

