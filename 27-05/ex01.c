#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo = NULL;
	pArquivo = fopen("quadrado.svg", "w");
	
	if(pArquivo != NULL){
		fprintf(pArquivo, "<svg version=\"1.1\"\n");
		fprintf(pArquivo, "width=\"300\" height=\"200\"\n");
		fprintf(pArquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
		fprintf(pArquivo, "<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />\n");
		fprintf(pArquivo, "</svg>\n");
	}
	
	fclose(pArquivo);
	return 0;
}

