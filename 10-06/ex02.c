#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Content-type: text/html\n\n");
	
	char *recebido = getenv("QUERY_STRING");
	printf("Recebido: %s\n", recebido);
	
	return 0;
}
