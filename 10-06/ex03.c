#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Content-type: text/html\n\n");
	
	char *posicao = NULL;
	char *recebido = getenv("QUERY_STRING");
	posicao = strchr(recebido, '=');
	
	int ano = atoi(posicao + 1); ano = 2025 - ano;
	printf((ano < 0) ? "Falta(m) %d ano(s) pra chegar lá." : "Já se passaram %d ano(s).", abs(ano));
	
	return 0;
}
