#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo = NULL;
	pArquivo = fopen("txt/nomes.txt", "r");
	
	char destino[80];
	
	for(int i = 0; i < 7; i++){
		fgets(destino, 80, pArquivo);
		printf("%s", destino);
	}
	
	
	fclose(pArquivo);
	return 0;
}
