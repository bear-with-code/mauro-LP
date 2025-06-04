#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Anotando remédios\n");

	FILE *pArquivo = NULL; 
	pArquivo = fopen("txt/remedios.txt", "a");
	if(pArquivo != NULL){
		char data[11], hora[6];
		
		printf("Digite uma data (DD/MM/YYYY) pro arquivo: "); scanf("%10s", data);
		printf("Digite uma hora (HH:MM) pro arquivo: "); getchar(); scanf("%5s", hora);
		fprintf(pArquivo, "%s %s\n", data, hora);
	}
	else{printf("\nArquivo não encontrado!");}
	
	printf("\nArquivo finalizado!");
	fclose(pArquivo);
	return 0;
}
