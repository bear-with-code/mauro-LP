#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Checando rem�dios\n");

	FILE *pArquivo = NULL; 
	pArquivo = fopen("txt/remedios.txt", "r");
	if(pArquivo != NULL){
		char ultima[18] = "", aux[18] = "";
		
		while(fgets(ultima, 18, pArquivo) != NULL){strcpy(aux, ultima);}
		strtok(aux, "\n"); printf("�ltima: %s", aux);
	}
	else{printf("\nArquivo n�o encontrado!");}
	
	fclose(pArquivo);
	return 0;
}
